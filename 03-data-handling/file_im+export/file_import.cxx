//file_import.h
#include <iostream> //"including" input/output stream.
#include <stdio.h>
#include <vector>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]){
    ifstream input_data;
    input_data.open("random_numbers.txt");
    string line_holder;
    for (int i = 0; i < 10; i++){
        getline(input_data, line_holder);
        cout << line_holder << endl;
    }
    input_data.close(); // very important to close
    cout << "While method" << endl;
    input_data.close();
    input_data.open("random_numbers.txt");
    while (input_data >> line_holder){
        cout << line_holder << endl;
    }
    input_data.close();

    return 0;
}