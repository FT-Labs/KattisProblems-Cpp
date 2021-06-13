/*
Author: Arda
Company: PhysTech
Date: 9/29/20
*/
#include  <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    vector<int> vec;
    vec.push_back(x);
    vec.push_back(y);
    vec.push_back(z);

    sort(vec.begin(),vec.end());

    int ans;
    int left = vec[1] - vec[0];
    int right = vec[2] - vec[1];

    if(left>right)
    {
        cout << vec[0]+right;
    }
    else if(left<right)
    {
        cout << vec[2]-left;
    }
    else
        cout << vec[2] + left;

    return 0;
}