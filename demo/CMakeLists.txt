SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

MESSAGE(STATUS "[Demo] Binary dir:" ${PROJECT_BINARY_DIR})

ADD_EXECUTABLE(test_HelloWorld test_HelloWorld.cpp)

# 设置安装目录
INSTALL(TARGETS test_HelloWorld 
        RUNTIME DESTINATION install
        )