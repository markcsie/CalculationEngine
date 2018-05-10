#ifndef ENGINE_H
#define ENGINE_H

#include <vector>
#include <stdexcept>

namespace calculation_engine
{
  class Engine
  {
  public:
    virtual double calculate(const std::vector<std::string>& file_names)
    {
      throw std::logic_error("file list not supported for " + name_ + " engine");
    }
    virtual double calculate(const std::vector<long long int>& integers) = 0;

    virtual ~Engine()
    {
    }

    const std::string& getName() const
    {
      return name_;
    }

  protected:
    std::string name_;
  };
}

#endif // ENGINE_H
