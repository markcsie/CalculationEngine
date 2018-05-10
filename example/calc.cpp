#include <iostream>

#include "engine_factory.h"

int main(int argc, char *argv[])
{
  if (argc <= 2)
  {
    return EXIT_FAILURE;
  }

  std::string engine_name = argv[1];
  std::cout << engine_name << std::endl;
  calculation_engine::EngineFactory engine_factory;
  std::shared_ptr<calculation_engine::Engine> engine = engine_factory.makeEngine(engine_name);

  std::string type = argv[2];
  size_t size = 0;
  bool is_number = true;
  try
  {
    std::stoll(type, &size, 0);
  }
  catch (const std::invalid_argument& ia)
  {
    is_number = false;
  }
  if (type.length() == size && is_number)
  {
    std::cout << "list of integers" << std::endl;
    std::vector<long long int> integers(argc - 2);
    for (int i = 2; i < argc; ++i)
    {
      integers[i-2] = std::stoll(argv[i], nullptr, 0);
    }
    std::cout << engine->calculate(integers) << std::endl;
  }
  else
  {
    std::cout << "list of files" << std::endl;
    std::vector<std::string> file_names(argc - 2);
    for (int i = 2; i < argc; ++i)
    {
      file_names[i-2] = argv[i];
      file_names[i-2] += ".txt";
    }
    std::cout << engine->calculate(file_names) << std::endl;
  }

  return EXIT_SUCCESS;
}
