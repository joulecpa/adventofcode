#ifndef AOC_MODULE
#define AOC_MODULE

namespace aoc
{
  class module
  {
    int mass;
  public:
    module(int mass = 0);
    int getMass() const;
    int convertToFuel() const;
  };
} // namespace aoc

#endif