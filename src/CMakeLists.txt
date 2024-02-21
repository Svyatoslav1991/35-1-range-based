set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Add source to this project's executable.
add_executable (35-1-range-based "main.cpp" ${MY_INCLUDE_DIR}/functions.h)

target_include_directories(35-1-range-based PUBLIC ${CMAKE_SOURCE_DIR}/include)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 35-1-range-based PROPERTY CXX_STANDARD 20)
endif()