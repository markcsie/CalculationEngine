#ifndef DIVIDER_ENGINE_H
#define DIVIDER_ENGINE_H

#include "engine.h"

namespace calculation_engine
{
  class DividerEngine : public Engine
  {
  public:
    DividerEngine()
    {
      name_ = "DividerEngine";
    }
    ~DividerEngine() {}

    double calculate(const std::vector<std::string>& file_names);
    double calculate(const std::vector<long long int>& integers);
  };
}

#endif // DIVIDER_ENGINE_H
