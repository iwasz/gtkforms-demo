# Wymagaj tej wersji - dopier w niej jest nowe makro FindPkgConfig
CMAKE_MINIMUM_REQUIRED (VERSION 2.8.0 FATAL_ERROR)

PROJECT (gtkforms-demo)
SET (CMAKE_EXPORT_COMPILE_COMMANDS ON)
INCLUDE (../tiliae/tiliae.cmake)
SET (CMAKE_VERBOSE_MAKEFILE OFF)

if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11" CACHE INTERNAL "cxx compiler flags")

SET(CMAKE_C_FLAGS_RELEASE "-DNDEBUG" CACHE INTERNAL "c release compiler flags")
SET(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG" CACHE INTERNAL "cxx release compiler flags")

ADD_DEFINITIONS (-DBOOST_LOG_DYN_LINK)

find_package (Boost REQUIRED COMPONENTS log log_setup regex)
include_directories(${Boost_INCLUDE_DIRS})
link_directories (${Boost_LIBRARY_DIRS})

include (FindPkgConfig)

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

pkg_check_modules (PROTOBUF REQUIRED "protobuf")
INCLUDE_DIRECTORIES (${PROTOBUF_INCLUDE_DIRS})
link_directories(${PROTOBUF_LIBRARY_DIRS})

# +-------------------------------+
# | Generate reflection database. |
# +-------------------------------+
TILIAE_PARSE ("${PROJECT_SOURCE_DIR}/../tiliae/build/parser/tiliaeparser" "gtkFormsDemo" "src/Reflection_input.cc" "src/Reflection_output.cc.h")
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
)

# Local includes (inside project).
INCLUDE_DIRECTORIES (src)
INCLUDE_DIRECTORIES ("/usr/include/libcxxabi")

add_executable (${CMAKE_PROJECT_NAME} ${SOURCES})

TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} c++abi)
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} pthread)
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} ${Boost_LIBRARIES})
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} ${TILIAE_LIBRARIES})
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} ${GTK_LIBRARIES})
TARGET_LINK_LIBRARIES (${CMAKE_PROJECT_NAME} ${GTKFORMS_LIBRARIES})

#FILE (COPY "src/config.xml" DESTINATION ${CMAKE_BINARY_DIR})
#FILE (COPY "ui" DESTINATION ${CMAKE_BINARY_DIR})

# NIe działą!
ADD_CUSTOM_COMMAND (OUTPUT "${CMAKE_BINARY_DIR}/config.xml"
                    COMMAND ln -s "src/config.xml" "${CMAKE_BINARY_DIR}/config.xml"
                    DEPENDS "src/config.xml")

ADD_CUSTOM_COMMAND (OUTPUT "${CMAKE_BINARY_DIR}/ui"
                    COMMAND ln -s "ui" "${CMAKE_BINARY_DIR}/ui"
                    DEPENDS "ui")

ADD_CUSTOM_COMMAND (OUTPUT "${CMAKE_BINARY_DIR}/src"
                    COMMAND ln -s "src" "${CMAKE_BINARY_DIR}/src"
                    DEPENDS "src")
