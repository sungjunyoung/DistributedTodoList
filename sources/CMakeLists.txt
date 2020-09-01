set(BINARY ${CMAKE_PROJECT_NAME})

add_executable(${BINARY} ${SOURCES})
target_include_directories(${BINARY} PUBLIC ${INCLUDES})
