/*
Author: Arda
Company: PhysTech
Date: 9/29/20
*/
#include <iostream>
#include <vector>
using namespace  std;

int compare(string a, string b)
{
    return a>b;
}

int main() {
    vector<string> names;
    int n;
    cin >> n;

    for(int i=1;i<n;++i)
    {
        string a;
        cin >> a;
        names.push_back(a);
    }

    int first = compare(names[0],names[1]);
    string last = names[1];


    if(first==0)
    {
        for(int i=2;i<names.size();++i)
        {
            int a = compare(last,names[i]);
            if(a != 0)
            {
                cout << "NEITHER" << endl;
                return 0;
            }
        }
        cout << "INCREASING" << endl;
    }
    else if(first == 1)
    {
        for(int i=2;i<names.size();++i)
        {
            int a = compare(last,names[i]);
            if(a != 1)
            {
                cout << "NEITHER" << endl;
                return 0;
                }

        }
        cout << "DECREASING" << endl;

    }



    return 0; }