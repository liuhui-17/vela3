# author:   liuhui-17
# created:  2018-12-9

# cmake VERSION required
CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

# project info
PROJECT(vela3)

# 消息输出
MESSAGE(STATUS "========> Project: vela3")
MESSAGE(STATUS "========> Source dir:" ${PROJECT_SOURCE_DIR})

# 暂时还不懂的一些定义
SET(CMAKE_BUILD_TYPE DEBUG)
SET(CMAKE_C_COMPILER g++)
if(CMAKE_COMPILER_IS_GNUCXX)
   add_compile_options(-std=c++11)
endif(CMAKE_COMPILER_IS_GNUCXX)

# 添加子目录
ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(demo)


