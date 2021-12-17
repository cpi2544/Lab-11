#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	string t;
	cout << "-------------------- BOOM ---------------------\n";
	while(getline(source,t)){
		if(true){
			dest << t << "\n";
		}
	}
	cout << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}
