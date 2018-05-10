set(ENGINES_SRC
  src/engine_factory
  src/multiplier_engine
  src/divider_engine

  include/engine
  include/engine_factory
  include/multiplier_engine
  include/divider_engine
)

add_library(CalculationEngine ${ENGINES_SRC})
target_include_directories (CalculationEngine PUBLIC include)
