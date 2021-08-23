/*
Author: Arda
Company: PhysTech
Date: 9/30/20
*/
#include  <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    int n,m;
    cin >> n;

    for(int i=0;i<n;++i)
    {
        cin >> m;
        vec.push_back(m);
    }
    sort(vec.rbegin(),vec.rend());

    int tot = 0;
    for(int i=0;i<vec.size();++i)
    {
        if((i+1)%3!=0)
            tot += vec[i];

    }

    cout << tot << endl;


    return 0;
}
