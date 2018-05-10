find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})
add_executable(test_divider_engine main.cpp test_divider_engine.cpp)
target_link_libraries(test_divider_engine ${GTEST_LIBRARIES} pthread CalculationEngine)

FILE(COPY
    testdata/test1.txt
    testdata/test2.txt
    testdata/test3.txt
    DESTINATION "${CMAKE_BINARY_DIR}/test/testdata")
