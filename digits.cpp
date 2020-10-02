/*
Author: Arda
Company: PhysTech
Date: 10/1/20
*/
#include  <iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int recurrence(int i,string num)
{
    stringstream ss;
    int l = num.size();
    ss << l;

    if(num == ss.str())
        return i;

    return recurrence(++i,ss.str());
}


int main() {
    string s;

    while (cin>>s && s != "END")
    {
        cout << recurrence(1,s) << endl;
    }
    return 0;
}