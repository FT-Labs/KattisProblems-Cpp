#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;

	map<string, pair<int, string>> mp;
	string name, date;
	int factor;
	vector<string> ans;
	while(t--)
	{
		cin >> name >> factor >> date;
		if(mp.count(date) && mp[date].first < factor)
			mp[date] = make_pair(factor, name);
		else if(!mp.count(date))
			mp[date] = make_pair(factor, name);
	}

	for(auto it : mp)
		ans.push_back(it.second.second);

	sort(ans.begin(), ans.end());

	cout << ans.size() << endl;
	for(auto name : ans)
		cout << name << endl;

	return 0;
}
