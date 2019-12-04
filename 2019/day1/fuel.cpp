#include <iostream>
#include "fuel.h"
using namespace std;

int fuel::convertToFuel(int mass){
  return (mass / 3 - 2);
}

int fuel::fuelForFuel(int fuel){
  int sum = convertToFuel(fuel);
  if (sum > 0)
    sum += fuelForFuel(sum);
  return sum < 0 ? 0 : sum;
}