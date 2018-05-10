#include "divider_engine.h"

#include <iostream>
#include <fstream>

namespace calculation_engine
{
  double DividerEngine::calculate(const std::vector<std::string>& file_names)
  {
    std::vector<long long int> integers;
    for (const std::string& file_name : file_names)
    {
      std::ifstream file(file_name);
      std::string s;
      while (std::getline(file, s))
      {
        integers.push_back(std::stoll(s, nullptr, 0));
      }
    }
    return calculate(integers);
  }

  double DividerEngine::calculate(const std::vector<long long int>& integers)
  {
    if (integers.empty())
    {
      std::cout << "No numbers" << std::endl;
      return 0.0;
    }
    double result = integers.front();
    for (size_t i = 1; i < integers.size(); ++i)
    {
      if (integers[i] == 0)
      {
        throw std::overflow_error("Divide by zero exception");
      }
      result /= static_cast<double>(integers[i]);
    }
    return result;
  }
}
