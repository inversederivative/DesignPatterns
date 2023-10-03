project(DesignPatterns)

# adding the Google_Tests_run target
add_executable(AbstractFactoryTests
        AbstractFactoryTest.cpp)
target_link_libraries(AbstractFactoryTests gtest gtest_main)