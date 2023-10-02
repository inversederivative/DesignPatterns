cmake_minimum_required(VERSION 3.25)
project(DesignPatterns)

set(CMAKE_CXX_STANDARD 23)


add_subdirectory(Singleton)
add_subdirectory(Factory)


#
##
#
########
#
##
#

###################
#					#
#    Google Test	#
#					#
###################



include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1 # most recent version 11/2022 Check GITHUB!
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

#
##
#
########
#
##
#