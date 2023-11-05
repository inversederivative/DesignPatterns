project(DesignPatterns)

# adding the Google_Tests_run target
add_executable(BuilderTests
        BuilderTest.cpp)
target_link_libraries(BuilderTests gtest gtest_main)
