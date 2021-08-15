#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;


int main()
{
	int m,n; cin >> n >> m;

	set<string> s;
	set<string> stmp;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			string tmp; cin >> tmp;
			if(i == 0)
				s.insert(tmp);
			else
			{
				if(s.count(tmp))
				{
					stmp.insert(tmp);
				}
			}
		}
		if(i != 0)
			s = stmp;
		stmp.clear();
	}

	vector<string> ans;

	for(auto it : s)
		ans.push_back(it);

	sort(ans.begin(),ans.end());

	cout << ans.size() << endl;
	for(auto it : ans)
		cout << it << endl;

	return 0;
}
