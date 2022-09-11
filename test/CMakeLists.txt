set(PROJECT_NAME tests)
project (${PROJECT_NAME})

# adding sources to include in project
file(GLOB SOURCES "*.cpp" "*.h")

# add the executable
add_executable(${PROJECT_NAME} ${SOURCES})

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

target_link_libraries(${PROJECT_NAME} applibrary GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})

# organizing in solution folder
set_target_properties(gmock PROPERTIES FOLDER GTest)
set_target_properties(gmock_main PROPERTIES FOLDER GTest)
set_target_properties(gtest PROPERTIES FOLDER GTest)
set_target_properties(gtest_main PROPERTIES FOLDER GTest)

# setting non required flags to OFF
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)