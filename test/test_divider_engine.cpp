#include <gtest/gtest.h>
#include <fstream>

#include "divider_engine.h"

using calculation_engine::DividerEngine;
DividerEngine engine;

TEST(DividerEngine, Constructor)
{
  ASSERT_EQ("DividerEngine", engine.getName());
}

TEST(DividerEngine, CalculateListOfIntegers)
{
  ASSERT_DOUBLE_EQ(1.0 / 2.0 / 3.0, engine.calculate({1, 2, 3}));
}

TEST(DividerEngine, CalculateListOfFiles)
{
  ASSERT_DOUBLE_EQ(1.0 / 2.0 / 3.0, engine.calculate({"test/testdata/test1.txt",
                                                      "test/testdata/test2.txt",
                                                      "test/testdata/test3.txt"}));
}

TEST(DividerEngine, CalculateEmptyList)
{
  ASSERT_DOUBLE_EQ(0.0, engine.calculate(std::vector<long long int>()));
  ASSERT_DOUBLE_EQ(0.0, engine.calculate(std::vector<std::string>()));
}

TEST(DividerEngine, CalculateDivisionByZero)
{
  ASSERT_THROW(engine.calculate({1, 0, 3}), std::overflow_error);
}
