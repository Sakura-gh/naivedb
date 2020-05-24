cmake_minimum_required(VERSION 3.10)

project(NaiveDB VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(EXECUTABLE_NAME naivedb)

add_subdirectory(include)
add_subdirectory(lib)

# 设置项目主要文件夹变量
set(NAIVEDB_INCLUDE_DIRECTORY ${CMAKE_SOURCE_DIR}/include)
set(NAIVEDB_CONFIG_DIRECTORY ${CMAKE_SOURCE_DIR}/config)

configure_file(${NAIVEDB_CONFIG_DIRECTORY}/naivedb_config.h.in include/naivedb_config.h)

# 全局使用主要包含文件
include_directories(${NAIVEDB_INCLUDE_DIRECTORY})

# 二进制文件生成路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_CFG_INTDIR}/bin)

# 生成可执行文件
add_executable(${EXECUTABLE_NAME} ${CMAKE_SOURCE_DIR}/src/main.cc)

# 包含 CMake 生成头文件
target_include_directories(${EXECUTABLE_NAME} PRIVATE
                           "${PROJECT_BINARY_DIR}/include"
                          )
