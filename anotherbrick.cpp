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

    int h,w,n;
    cin >> h >> w >> n;

    vector<int> vec;

    for(int i=0;i<n;++i)
    {
        int q;
        cin >> q;
        vec.push_back(q);
    }

    int currentHeight = 0;
    int currentLen = 0;
    for(auto i : vec)
    {
        currentLen += i;

        if(currentLen == w)
        {

            currentLen = 0;
            currentHeight += 1;
        }

        if(currentHeight == h)
            break;

    }

    string s = (h==currentHeight) ? "YES" : "NO";

    cout << s << endl;




    return 0;
}
