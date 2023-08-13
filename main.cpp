#include"Reverser.h"
#include"Truckloads.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
    Reverser r;
    int number = r.reverseDigit(12345);
    cout<<number<<endl;

    Truckloads t;
    int truck = t.numTrucks(2,3);
    cout << truck<<endl;

    return 0;
}