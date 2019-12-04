#include <iostream>
#include <fstream>
#include "fuel.h"

using namespace fuel;
using namespace std;

const char* filename = "module-mass.txt";

int main(){
  ifstream fin(filename);
  if(fin){
    int sum = 0;
    do {
      int tmp = 0;
      fin >> tmp;
      if (fin){
        int fuel = convertToFuel(tmp);
        sum += fuel;
        sum += fuelForFuel(fuel);
      }
    } while(fin);
    cout << "The total fuel needed is: " << sum << endl;
  }
  else{
    cout << "File " << filename << " could not be found or opened" << endl;
  }
  fin.close();
}