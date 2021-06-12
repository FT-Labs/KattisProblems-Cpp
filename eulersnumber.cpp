/*
Author: Arda
Company: PhysTech
Date: 9/26/20
*/
#include  <iostream>
using namespace std;

typedef long double ff;

ff eulersNumber(int x)
{
    ff m = 0.0;
    ff fact = 1.0;
    if(x>30){
        x = 30;
    }
    for(int i=1;i<=x+1;++i)
    {
       m += 1.0/fact;
       fact *= i;
    }
    return m;
}


int main() {
    int n;
    cout << fixed;
    cin >> n;
    cout.precision(15);
    cout << eulersNumber(n) << endl;
}