project(DesignPatterns)

# adding the Google_Tests_run target
add_executable(SingletonTests
        SingletonTest.cpp)
target_link_libraries(SingletonTests gtest gtest_main)