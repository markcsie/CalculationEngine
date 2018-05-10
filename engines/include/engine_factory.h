#ifndef ENGINE_FACTORY_H
#define ENGINE_FACTORY_H

#include <memory>

#include "engine.h"

namespace calculation_engine
{
  class EngineFactory
  {
  public:
    EngineFactory() {}
    ~EngineFactory() {}

    std::shared_ptr<Engine> makeEngine(const std::string& engine_name);
  };
}

#endif // ENGINE_FACTORY_H
