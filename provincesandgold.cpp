/*
Author: Arda
Company: PhysTech
Date: 10/1/20
*/
#include  <iostream>
using namespace std;

int main() {

    int g,s,c;
    cin >> g >> s >> c;

    int total = 3*g + 2*s + 1*c;


    if(total >= 8)
        cout << "Province or Gold" << endl;
    else if(total >= 6)
        cout << "Duchy or Gold" << endl;
    else if(total >= 5)
        cout << "Duchy or Silver"  << endl;
    else if(total >= 3)
        cout << "Estate or Silver" << endl;
    else if(total >= 2)
        cout << "Estate or Copper" << endl;
    else
        cout << "Copper" << endl;

    return 0;



}