# Wymagaj tej wersji - dopier w niej jest nowe makro FindPkgConfig
CMAKE_MINIMUM_REQUIRED (VERSION 2.8.0 FATAL_ERROR)

if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

if(COMMAND cmake_policy)
    cmake_policy(SET CMP0048 NEW)
endif(COMMAND cmake_policy)

PROJECT (gtkforms-demo VERSION 0.9)
SET (CMAKE_EXPORT_COMPILE_COMMANDS ON)
INCLUDE (../tiliae/tiliae.cmake)
SET (CMAKE_VERBOSE_MAKEFILE OFF)
SET (CMAKE_INSTALL_PREFIX /usr)
SET (WITH_PARSER               ON CACHE BOOL "")

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11" CACHE INTERNAL "cxx compiler flags")
SET(CMAKE_C_FLAGS_RELEASE "-DNDEBUG" CACHE INTERNAL "c release compiler flags")
SET(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG" CACHE INTERNAL "cxx release compiler flags")

ADD_DEFINITIONS (-DBOOST_LOG_DYN_LINK)

find_package (Boost REQUIRED COMPONENTS log log_setup regex)
include_directories(${Boost_INCLUDE_DIRS})
link_directories (${Boost_LIBRARY_DIRS})

include (FindPkgConfig)
pkg_check_modules (MXML REQUIRED "mxml")
INCLUDE_DIRECTORIES (${MXML_INCLUDE_DIRS})
link_directories(${MXML_LIBRARY_DIRS})

pkg_check_modules (TILIAE "tiliae")
if (NOT TILIAE_FOUND)
        MESSAGE (STATUS "Tiliae not installed, using local copy.")
        SET (TILIAE_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/../tiliae/src/")
        SET (TILIAE_LIBRARY_DIRS "${PROJECT_SOURCE_DIR}/../tiliae/build/src/")
        SET (TILIAE_LIBRARIES "tiliae")
        MESSAGE (STATUS ${TILIAE_INCLUDE_DIRS})
        MESSAGE (STATUS ${TILIAE_LIBRARY_DIRS})
endif ()
INCLUDE_DIRECTORIES (${TILIAE_INCLUDE_DIRS})
link_directories(${TILIAE_LIBRARY_DIRS})

pkg_check_modules (GTKFORMS "gtkforms")
if (NOT GTKFORMS_FOUND)
        MESSAGE (STATUS "GtkForms not installed, using local copy.")
        SET (GTKFORMS_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/../gtkforms/src/")
        SET (GTKFORMS_LIBRARY_DIRS "${PROJECT_SOURCE_DIR}/../gtkforms/build/")
        SET (GTKFORMS_LIBRARIES "gtkforms")
        MESSAGE (STATUS ${GTKFORMS_INCLUDE_DIRS})
        MESSAGE (STATUS ${GTKFORMS_LIBRARY_DIRS})
endif ()
INCLUDE_DIRECTORIES (${GTKFORMS_INCLUDE_DIRS})
link_directories(${GTKFORMS_LIBRARY_DIRS})

pkg_check_modules (GTK REQUIRED "gtk+-3.0")
INCLUDE_DIRECTORIES (${GTK_INCLUDE_DIRS})
link_directories(${GTK_LIBRARY_DIRS})

# +-------------------------------+
# | Generate reflection database. |
# +-------------------------------+
IF (WITH_PARSER)
TILIAE_PARSE ("${PROJECT_SOURCE_DIR}/../tiliae/build/parser/tiliaeparser" "gtkFormsDemo" "src/Reflection_input.cc" "src/Reflection_output.cc.h")
ENDIF ()
LIST (APPEND SOURCES "src/Reflection_input.cc")
LIST (APPEND SOURCES "src/Reflection_output.cc.h")

# +-------------------------------+
# | Main target                   |
# +-------------------------------+

LIST (APPEND SOURCES
        "src/common/ComputerGear.h"
        "src/common/User.h"
        "src/common/User.cc"
        "src/common/FloraFaunah.h"
        "src/common/FloraFaunah.cc"
        "src/main.cc"
        "src/Logging.h"
        "src/submitTest1/SubmitTest1Controller.cc"
        "src/submitTest1/SubmitTest1Controller.h"
        "src/submitAuto/SubmitAutoController.cc"
        "src/submitAuto/SubmitAutoController.h"
        "src/treeView1/TreeView1Controller.cc"
        "src/treeView1/TreeView1Controller.h"
        "src/main/MainController.cc"
        "src/main/MainController.h"
        "src/addNode/AddNodeController.cc"
        "src/addNode/AddNodeController.h"
        "src/addNode/AddNodeTableFilterMapping.cc"
        "src/addNode/AddNodeTableFilterMapping.h"

)

# Local includes (inside project).
INCLUDE_DIRECTORIES (src)
INCLUDE_DIRECTORIES ("/usr/include/libcxxabi")

add_executable (${CMAKE_PROJECT_NAME} ${SOURCES})

IF (WITH_CPPABI)
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} c++abi)
ENDIF ()

IF (BUILD_SHARED_LIBS)
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} ${GTKFORMS_LIBRARIES})
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} ${TILIAE_LIBRARIES})
ELSE ()
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} libgtkforms.a)
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} libtiliae.a)
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} ${MXML_LIBRARIES})
ENDIF ()
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} ${GTK_LIBRARIES})
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} ${Boost_LIBRARIES})
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} pthread)

#FILE (COPY "src/config.xml" DESTINATION ${CMAKE_BINARY_DIR})
#FILE (COPY "ui" DESTINATION ${CMAKE_BINARY_DIR})

# NIe działą!
# ADD_CUSTOM_COMMAND (OUTPUT "${CMAKE_BINARY_DIR}/config.xml"
#                     COMMAND ln -s "src/config.xml" "${CMAKE_BINARY_DIR}/config.xml"
#                     DEPENDS "src/config.xml")
#
# ADD_CUSTOM_COMMAND (OUTPUT "${CMAKE_BINARY_DIR}/ui"
#                     COMMAND ln -s "ui" "${CMAKE_BINARY_DIR}/ui"
#                     DEPENDS "ui")
#
# ADD_CUSTOM_COMMAND (OUTPUT "${CMAKE_BINARY_DIR}/src"
#                     COMMAND ln -s "src" "${CMAKE_BINARY_DIR}/src"
#                     DEPENDS "src")

INSTALL (
        DIRECTORY "${PROJECT_SOURCE_DIR}/src/"
        DESTINATION "share/gtkforms-demo"
        FILES_MATCHING
        PATTERN "*.ui"
        PATTERN "*.xml"
        PATTERN "*.png"
        PATTERN "*.jpg"
        PATTERN "*.svn*" EXCLUDE
        PATTERN "*.git*" EXCLUDE
        PATTERN "*test*" EXCLUDE)

INSTALL (
        TARGETS gtkforms-demo
        DESTINATION bin
        PERMISSIONS
        OWNER_READ OWNER_WRITE OWNER_EXECUTE
        GROUP_READ GROUP_EXECUTE
        WORLD_READ WORLD_EXECUTE)

ADD_CUSTOM_TARGET("publish" DEPENDS gtkforms-demo COMMAND rm -Rf /tmp/installdir)
ADD_CUSTOM_COMMAND(TARGET "publish" COMMAND mkdir -p /tmp/installdir)
ADD_CUSTOM_COMMAND(TARGET "publish" COMMAND make install DESTDIR=/tmp/installdir)

FIND_PROGRAM (FPM fpm)
ADD_CUSTOM_COMMAND (TARGET "publish" COMMAND ${FPM} -f -s dir -t deb -n gtkforms-demo -v ${PROJECT_VERSION} -C /tmp/installdir/ -p gtkforms-demo_VERSION_ARCH.deb -d 'libgtkforms >= 0.9' usr)
FIND_PROGRAM (DPKGSIG dpkg-sig)
ADD_CUSTOM_COMMAND (TARGET "publish" COMMAND ${DPKGSIG} -k 9EDE3F68 -s builder *.deb)
FIND_PROGRAM (SCP scp)
ADD_CUSTOM_COMMAND (TARGET "publish" COMMAND ${SCP} gtkforms-demo_${PROJECT_VERSION}_amd64.deb iwasz@iwasz.pl:/home/iwasz/domains/iwasz.pl/public_html/deb/)
