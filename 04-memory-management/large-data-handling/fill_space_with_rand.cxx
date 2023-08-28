// random_bool.cxx
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <cmath>
using namespace std;

bool* rand_bool(float gb){
    int max = gb *pow(1024, 3) / sizeof(bool);
    bool *booli;
    booli = (bool*) malloc(gb * pow(1024, 3));

    for (int i = 0; i < max; i++){
        if (rand() % 2 == 0){
            booli[i] = true;
        }
        else {
            booli[i] = false;
        }
        cout << booli[i] << endl;
    }
    return booli;
}

unsigned int* rand_unsint(float gb){
    long int max = static_cast<double>(gb * 1024 * 1024 * 1024 / sizeof(unsigned int));
    cout << max << endl;
    unsigned int *inti;
    inti = (unsigned int*) malloc(max * sizeof(unsigned int));
    cout << "print out" << endl;
    for (long int i = 0; i < max; i++){ // also has to be long int here
        inti[i] = static_cast<unsigned int>(rand());
    }

    return inti;
}

int* rand_int(float gb){
    int max = gb * pow(1024, 3) / sizeof(unsigned int);
}




int main(int argc, char *argv[]){
    float gb = atoi(argv[1]);
    // int max = gb *pow(1024, 3) / sizeof();
    unsigned int *inti = rand_unsint(gb);
    free(inti);

    return 0;
}