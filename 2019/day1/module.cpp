#include "module.h"

namespace aoc{
  module::module(int mass){
    this->mass = mass;
  }

  int module::getMass() const{
    return mass;
  }

  int module::convertToFuel() const{
    return (mass / 3 - 2);
  }
}