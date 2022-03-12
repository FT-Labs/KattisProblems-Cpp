#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int>& p1, pair<int,int>& p2)
{
	return p1.second<p2.second;
}

int main()
{
	int n; cin >> n;
	vector<pair<int, int>> v;

	int s, e;

	for (int i=0; i<n; i++)
	{
		cin >> s >> e;
		v.push_back({s,e});
	}

	sort(v.begin(), v.end(), ::cmp);

	int tot = 0;
	int curEnd = 0;

	for (int i=0; i<v.size(); i++)
	{
		if (v[i].first >= curEnd)
		{
			tot++;
			curEnd = v[i].second;
		}
	}

	cout << tot << endl;




	return 0;
}
