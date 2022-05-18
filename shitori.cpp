#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin >> n;
	unordered_set<string> s;
	string cur, prev;

	// not the best solution but passes anyway, could hold last element in char instead of string
	for (int i = 0; i < n; i++)
	{
		cin >> cur;
		if (s.count(cur) || (!prev.empty() && prev.back() != cur.front()))
		{
			cout << (i%2 == 0 ? "Player 1 lost\n" : "Player 2 lost\n");
			return 0;
		}
		s.insert(cur);
		prev = cur;
	}

	cout << "Fair game";


	return 0;
}
