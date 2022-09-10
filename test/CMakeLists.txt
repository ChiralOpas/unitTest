set(PROJECT_NAME test)
project (${PROJECT_NAME})

# adding sources to include in project
file(GLOB SOURCES "*.cpp" "*.h")

# add the executable
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} applibrary)