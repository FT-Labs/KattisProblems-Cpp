#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	string s; cin >> s;

	unordered_set<char> se;

	for (auto ch : s)
		se.insert(ch);

	int mn = se.size();

	string tmp = s.substr(0, mn);

	while (true)
	{
		bool flag = true;

		for (int i = 0; i < s.size(); i+= mn)
		{
			if (tmp != s.substr(i, mn))
			{
				flag = false;
				break;
			}
			rotate(tmp.rbegin(), tmp.rbegin()+1, tmp.rend());
		}

		if (flag)
			break;

		while (s.size()%++mn != 0);
		tmp = s.substr(0, mn);
	}

	cout << mn << endl;
	return 0;
}
