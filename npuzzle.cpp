#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;


int main()
{
	unordered_map<char, pair<int, int>> orig;
	unordered_map<char, pair<int, int>> curmp;


	char s = 'A';
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<4; j++)
		{
			char cur; cin >> cur;

			if (cur == '.')
				cur = 'P';

			orig.insert({s, {i, j}});
			curmp.insert({cur, {i, j}});
			s++;
		}
	}

	int ans = 0;

	for (auto it : curmp)
	{
		if (it.first != 'P' && it.second != orig[it.first])
		{
			ans += abs(it.second.first - orig[it.first].first) + abs(it.second.second - orig[it.first].second);
		}
	}

	cout << ans << endl;


	return 0;
}
