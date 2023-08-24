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
    // input is how many numbers to generate
    const int limit = 999;
    int len = atoi(argv[1]);
    vector<int> numbers;

    ofstream output;
    output.open("random_numbers_3D.txt");

    output << "random_numbers_3D.txt" << endl;
    output <<"x \t y \t z" << endl;
    
    for (int i = 0; i < len; i++){
        output << random_no(-limit, limit) << "\t" << random_no(-limit, limit) << "\t" << random_no(-limit, limit) << endl;
    }
    output.close();
    return 0;
}