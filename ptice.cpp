/*
Author: Arda
Company: PhysTech
Date: 10/1/20
*/
#include  <iostream>
#include <cstdio>
#include <vector>
#include <map>

using namespace std;

int main() {

    char adrian[] = {'A', 'B', 'C'};
    char bruno[] = {'B', 'A', 'B', 'C'};
    char goran[] = {'C', 'C', 'A', 'A', 'B', 'B'};

    int a = 0, b = 0, g = 0;

    int n;
    cin >> n;

    int aLen = sizeof(adrian) / sizeof(adrian[0]);
    int bLen = sizeof(bruno) / sizeof(bruno[0]);
    int gLen = sizeof(goran) / sizeof(goran[0]);

    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        if (i >= aLen) {
            if (adrian[i % aLen] == c)
                ++a;
        } else {
            if (adrian[i] == c)
                ++a;
        }
        if (i >= bLen) {
            if (bruno[i % bLen] == c)
                ++b;
        } else {
            if (bruno[i] == c)
                ++b;
        }
        if (i >= gLen) {
            if (goran[i % gLen] == c)
                ++g;
        } else {
            if (goran[i] == c)
                ++g;
        }
    }


    int mx;
    mx = std::max(a, b);
    mx = max(mx, g);

    cout << mx << endl;

    if (a == mx && b == mx && g == mx)
        cout << "Adrian" << endl << "Bruno" << endl << "Goran" << endl;
    else if (a == mx && b == mx)
        cout << "Adrian" << endl << "Bruno" << endl;
    else if (a == mx && g == mx)
        cout << "Adrian" << endl << "Goran" << endl;
    else if(a == mx)
        cout << "Adrian" << endl;
    else if (b == mx && g == mx)
        cout << "Bruno" << endl << "Goran" << endl;
    else if(b == mx)
        cout << "Bruno" << endl;
    else if (g == mx)
        cout << "Goran" << endl;


    return 0;
}




