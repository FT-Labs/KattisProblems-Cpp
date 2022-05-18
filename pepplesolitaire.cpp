#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

unordered_map<string, int> d;
string t;

int dp(string s)
{
	if (d[s] > 0)
		return d[s];
	d[s] = 1;
	for (int i = 0; i < 10; i++)
	{
		if (s[i] == 'o' && s[i+1] == 'o' && s[i+2] == '-')
		{
			t = s;
			t[i] = t[i+1] = '-';
			t[i+2] = 'o';
			d[s] = max(d[s], dp(t) + 1);
		}
		if (s[i] == '-' && s[i+1] == 'o' && s[i+2] == 'o')
		{
			t = s;
			t[i] = 'o';
			t[i+1] = t[i+2] = '-';
			d[s] = max(d[s], dp(t) + 1);
		}
	}
	return d[s];
}

int main ()
{
	int t; cin >> t;
	string s;

	while (t--)
	{
		cin >> s;
		d.clear();
		int cnt = 1;
		for (int i = 0; i < 12; i++)
			s[i] == 'o' ? ++cnt : cnt;
		cout << cnt - dp(s) << endl;
	}

	return 0;
}
