# creating main executable project
set(PROJECT_NAME app)
project (${PROJECT_NAME})

# adding sources to include in project
file(GLOB APP_SOURCES "*.cpp" "*.h")

# creating static library for testing
# adding same source for static library except main.cpp
file(GLOB LIB_SOURCES "*.cpp" "*.h")
list(FILTER LIB_SOURCES EXCLUDE REGEX ".*main\\.cpp$")

set(LIBRARY_NAME applibrary)
add_library(${LIBRARY_NAME} STATIC)
target_sources(${LIBRARY_NAME} PUBLIC ${LIB_SOURCES})
set_target_properties(${LIBRARY_NAME} PROPERTIES FOLDER Libraries)


# add the executable
add_executable(${PROJECT_NAME} ${APP_SOURCES})