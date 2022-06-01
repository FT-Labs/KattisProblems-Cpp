#include <algorithm>
#include <cstdio>
#include <iostream>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    unordered_set<string> se;

    while (!cin.eof())
    {
        string cur;
        cin >> cur;
        string tmp = cur;
        transform(cur.begin(), cur.end(), cur.begin(), ::tolower);

        if (se.count(cur))
        {
            cout << '.';
            if (getchar() != EOF)
                cout << ' ';
        }
        else
        {
            se.insert(cur);
            cout << tmp;
            if (getchar() != EOF)
                cout << ' ';
        }
    }
    return 0;
}
