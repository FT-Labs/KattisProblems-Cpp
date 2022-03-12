#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define mp make_pair

bool cmp(pair<int, int>& p1, pair<int,int>& p2)
{
	if (p1.second == p2.second)
		return p1.first < p2.first;
	return p1.second < p2.second;
}

int main()
{
	int n; cin >> n;
	vector<pair<int, int>> v;

	int s, e;
	while (n--)
	{
		cin >> s >> e;
		v.push_back(mp(s, e));
	}

	sort(v.begin(), v.end(), ::cmp);

	int cnt = 1;
	int curEnd = v[0].second;

	for (int i=1; i<v.size(); i++)
	{
		if (v[i].first > curEnd)
		{
			cnt++;
			curEnd = v[i].second;
		}
	}

	cout << cnt << endl;


	return 0;
}
