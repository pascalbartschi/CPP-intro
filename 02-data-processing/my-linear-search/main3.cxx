// main.cxx
#include <iostream>
#include <stdio.h>
#include <vector>
#include "linear_searchers.h"
using namespace std;
int main(int argc, char *argv[]){
  vector<float> vectr = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5};
  float max = find_max(vectr);
  cout << "Max: " << max << endl;
  return 0;
}
