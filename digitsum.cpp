/*
Author: Arda
Company: PhysTech
Date: 9/24/20
*/
#include  <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;
    int ans = (int)s[0]-48;

    while(s.size()!=1)
    {
        for(int i=1;i<s.size();++i)
        {
            if(s[i] == '0')
            {
                s.erase(i,i);
            } else
            {  ans *= (int)(s[i]-48);}

        }
        s = to_string(ans);
        ans = (int)s[0]-48;
    }

    cout << ans << endl;

    return 0;

}
