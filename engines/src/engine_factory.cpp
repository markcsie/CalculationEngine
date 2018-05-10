#include "engine_factory.h"
#include "multiplier_engine.h"
#include "divider_engine.h"

namespace calculation_engine
{
  std::shared_ptr<Engine> EngineFactory::makeEngine(const std::string& engine_name)
  {
    if (engine_name == "Multiplier")
    {
      return std::shared_ptr<Engine>(new MultiplierEngine());
    }
    else if (engine_name == "Divider")
    {
      return std::shared_ptr<Engine>(new DividerEngine());
    }
    else if (engine_name == "StandardDeviation")
    {
      throw std::logic_error(engine_name + " not implemented");
    }
    throw std::logic_error(engine_name + " unsupported");
  }
}
