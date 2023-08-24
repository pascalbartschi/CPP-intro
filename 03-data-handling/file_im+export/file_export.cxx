//file_export.cxx
#include <iostream> //"including" input/output stream.
#include <stdio.h>
#include <vector>
#include <fstream>
using namespace std;

int random_no(int lower, int upper)
{
  int rand_no = lower - 1;
    while ((rand_no > upper) || (rand_no < lower)){
      int sign = 1;
      if (rand() % 2 == 0){
	sign = -1;
      }
      rand_no = sign * rand();
    }
    return rand_no;
}

int main(int argc, char *argv[]){

    const int limit = 999;

    vector<int> numbers;

    for (int i = 0; i < 100; i++){
        int rn = random_no(-limit, limit);
        numbers.push_back(rn);
    }

    ofstream output;
    output.open("random_numbers.txt");

    output << "random_numbers.txt" << endl;

    for (int value : numbers){
        output << value << endl;
    }
    output.close();
    return 0;
}