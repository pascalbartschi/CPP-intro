// hanlding memory.cxx
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]){
    // how many integer fit into 1.5 GB of RAM?
    int max_usage = 1.5 * pow(1024, 3); // 1.5 GB
    int count = 0;
    // allocate a random size of space
    int *f = (int*)malloc(10000000000000000 * sizeof(int));
    while (count < max_usage){



    }


}