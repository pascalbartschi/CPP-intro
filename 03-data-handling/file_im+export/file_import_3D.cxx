//file_import.h
#include <iostream> //"including" input/output stream.
#include <stdio.h>
#include <vector>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]){
    ifstream input_data;
    input_data.open("random_numbers.txt");
    // here we print the header
    string line_holder;
    for (int i = 0; i<1 ; i++ ){
        cout << line_holder << endl;
    }
    int xd, yd, zd;
    vector<int> x, y, z;
    // here we save the numbers in the columns
    while (input_data >> xd >> yd >> zd){
        x.push_back(xd);
        y.push_back(yd);
        z.push_back(zd);
    }
    input_data.close();
    // todo: finish here with looping through loop


    return 0;
}