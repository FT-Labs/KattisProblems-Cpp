/*
Author: Arda
Company: PhysTech
Date: 9/29/20
*/
#include  <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int> vec;
    unordered_set<int> set;

    int n;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        int q;
        cin >> q;
        vec.push_back(q);
        set.insert(q);
    }

    int cmp = 0;

    for(auto i=set.begin();i!=set.end();++i)
    {
        int sum = 0;
        int num = 0;
        for(int q = 0;q<vec.size();++q)
        {
            if(*i == vec[q])
            {
                num = vec[q];
                ++sum;
            }
        }
        if(sum == 1)
        {
            cmp = max(num,cmp);
        }

    }

    if(cmp == 0)
        cout << "none" << endl;
    else
    {
        vector<int>::iterator it = find(vec.begin(),vec.end(),cmp);
        cout << 1+distance(vec.begin(),it) << endl;
    }

    return 0;

}
