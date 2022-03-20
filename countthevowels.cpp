#include <algorithm>
#include <cctype>
#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set<char> se;
	se.insert('a');
	se.insert('e');
	se.insert('i');
	se.insert('o');
	se.insert('u');

	string s;
	getline(cin, s);

	transform(s.begin(), s.end(), s.begin(), ::tolower);

	int cnt = 0;

	for (auto ch : s)
	{
		if (se.count(ch))
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}
