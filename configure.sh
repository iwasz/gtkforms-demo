#!/bin/bash

cmake -DCMAKE_BUILD_TYPE='Debug' -DCMAKE_INSTALL_PREFIX:PATH=$HOME/local -DBOOST_ROOT="/home/iwasz/local" ..
