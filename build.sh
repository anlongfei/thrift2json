#!/bin/bash
# ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : anlongfei
#   Email         : anlongfei@meituan.com
#   File Name     : build.sh
#   Last Modified : 2018-11-21 15:12
#   Describe      :
#
# ====================================================

g++ main.cpp gen-cpp/student_types.cpp -I./include/thrift -std=c++0x -fpermissive -L./lib -lthrift
