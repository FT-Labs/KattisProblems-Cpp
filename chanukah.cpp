/*
Author: Arda
Company: PhysTech
Date: 9/28/20
*/
#include  <iostream>
using namespace std;

int sum(int n)
{
    if(n == 1)
        return n;
    else
        return n+sum(n-1);
}

int main()
{
    int m;
    cin >> m;

    for(int i = 0; i<m ; ++i)
    {
        int x,y;
        cin >> x >> y;
        int tot = sum(y+1);
        cout << x << ' ' << --tot << endl;
    }
    return 0;
}