// CPP_TinhSoThoc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main(){
    double tonghatthoc = 0;
    for (double i = 0; i < 64; i++) {
        tonghatthoc += pow(2,i);
    }
    cout << "Tong so thoc tren ban co:" << tonghatthoc << endl;
    return 0;   
}

