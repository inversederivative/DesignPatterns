project(DesignPatterns)

# adding the Google_Tests_run target
add_executable(FactoryTests
        FactoryTest.cpp)
target_link_libraries(FactoryTests gtest gtest_main)