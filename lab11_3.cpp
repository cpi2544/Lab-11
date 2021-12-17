#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    ifstream source("score.txt");
    string t;
    int n = 0;
    double sum=0;
    double Z=0;

    while(getline(source,t)){
        sum += atof(t.c_str());
        Z += pow(atof(t.c_str()),2);
        n++;
    }

    double M = sum/n;
    double S = sqrt((Z/n)-pow(M,2));


    cout << "Number of data = " << n << "\n";
    cout << setprecision(3);
    cout << "Mean = " << M << "\n";
    cout << "Standard deviation = " << S;
}