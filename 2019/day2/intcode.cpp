// intcode.cpp
#include <iostream>
#include <fstream>
#include <vector>

const char* input = "input.txt";

int main(){

  std::vector<int> v;

  std::ifstream fin(input);
  if (fin){
    int x = 0;
    while (fin){
      fin >> x;
      fin.ignore();
      v.push_back(x);
    }
  }
  else{
    std::cout << "File " << input << " could not be found or opened." << std::endl;
  }

  for (auto y : v){
    std::cout << y << ",";
  }

  return 0;
}