//linear-search
#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;
int main(int argc, char *argv[]){
	string owner[] = {"Bob","Donald","Alice","Elodie","Chris","Johannes", "Roland","Micael","Ben","Ashley","Paul","Steven","Peter","Alvaro"};
	string pets[] = {"dog","cat","lion","dog","bird","turtle","hamster", "dog","guinea pig","pig","fish","dog","rat","cat"};
	string target = "dog";
	vector<int> target_index;
	for (int i = 0; i < 14; i++){
		if (pets[i] == target){
			cout << "The " << target <<" is found and has the index "<< i << endl;
			target_index.push_back(i);
		}
	}
	for (int i : target_index){
		cout << owner[i] << " has a target " << target << endl;
	}
return 0;
}

