set(PROJECT_NAME tests)
project (${PROJECT_NAME})

# adding sources to include in project
file(GLOB SOURCES "*.cpp" "*.h")

# add the executable
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} applibrary)

# define tests
add_test(
  NAME sum.valid.passes
  COMMAND $<TARGET_FILE:tests> 1
  )

add_test(
  NAME sum.invalid.fails
  COMMAND $<TARGET_FILE:tests> 2
  )