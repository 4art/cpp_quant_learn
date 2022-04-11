cmake_minimum_required(VERSION 3.21)
project(quant_learn)

set(CMAKE_CXX_STANDARD 17)

add_executable(quant_learn src/main.cpp src/time_value.cpp src/time_value.h src/zero_coupon_bonds.cpp src/zero_coupon_bonds.h)

