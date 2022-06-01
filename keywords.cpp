#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main ()
{
    unordered_set<string> se;
    int n; cin >> n;
    cin.ignore();

    while (n--)
    {
        string s; getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
                s[i] = '-';
        }
        se.insert(s);
    }
    cout << se.size() << endl;

    return 0;
}
