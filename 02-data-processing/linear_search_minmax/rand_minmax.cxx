// rand_minmax.cxx
#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;
int main(int argc, char *argv[])
{
  const int rand_threshold=999999; // cannot be changed afte being declared
  vector<int> numbers;
  int sign_generator = 1;
  for (int i = 0; i < 1000000; i++)
  {
    sign_generator = -1;
    if (rand()%2 == 0)
    {
      sign_generator = 1;
    }
    numbers.push_back(sign_generator * (rand() % rand_threshold));		      
  }
  int max = -99999;
  int min = 99999;
  vector<int> target_index;
  for(int value : numbers){
    if(value > max){
      max = value;
    }
    if (value < min){
      min = value;
    }
  }
  cout << "max is: " << max << endl;
  cout << "min is: " << min << endl;
  return 0;

}
  
  
