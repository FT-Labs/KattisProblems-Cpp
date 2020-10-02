/*
Author: Arda
Company: PhysTech
Date: 10/1/20
*/
#include  <iostream>
using namespace std;

int main() {

    int x,y;

    cin >> x >> y;

    if(x==0 && y==1)
        cout << "ALL GOOD" << endl;
    else if(y == 1)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        float ans = (float)x/(1-y);
        cout.precision(7);
        cout << fixed << ans << endl;
    }

    return 0;
}