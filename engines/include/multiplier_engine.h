#ifndef MULTIPLIER_ENGINE_H
#define MULTIPLIER_ENGINE_H

#include "engine.h"

namespace calculation_engine
{
  class MultiplierEngine : public Engine
  {
  public:
    MultiplierEngine()
    {
      name_ = "MultiplierEngine";
    }
    ~MultiplierEngine() {}

    double calculate(const std::vector<long long int>& integers);
  };
}

#endif // MULTIPLIER_ENGINE_H
