/*
Author: Arda
Company: PhysTech
Date: 9/28/20
*/
#include  <iostream>
#include <string>
#include <locale>
using namespace std;


int main() {

    int n, m;
    cin >> n >> m;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        bool valid = true;
        for(int j = 0; j < m; j++) {
            string s;
            cin >> s;

            for(int k = 1; k < s.size(); k++) {
                if(isupper(s[k])){
                    valid = false;
                }
            }
        }
        if(valid)
            sum++;

    }

    cout << sum << endl;

    return 0;
}
