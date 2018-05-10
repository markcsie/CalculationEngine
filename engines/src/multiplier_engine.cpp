#include "multiplier_engine.h"

namespace calculation_engine
{
  double MultiplierEngine::calculate(const std::vector<long long int>& integers)
  {
    double result = 1;
    for (const long long int& i : integers)
    {
      result *= static_cast<double>(i);
    }
    return result;
  }
}
