#include <iostream>
#include <fstream>
#include "module.h"

using namespace aoc;
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
        module m(tmp);
        sum += m.convertToFuel();
      }
    } while(fin);

    cout << "The total fuel needed is: " << sum << endl;
  }
  else{
    cout << "File " << filename << " could not be found or opened" << endl;
  }
}