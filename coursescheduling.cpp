#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;



int main()
{
	int n; cin >> n;

	map<string, set<string>> mp;

	while(n--)
	{
		string s1, s2, cls; cin >> s1 >> s2 >> cls;
		s1 += s2;

		mp[cls].insert(s1);
	}

	for(auto it = mp.begin(); it!=mp.end(); it++)
	{
		cout << it->first << ' ' << it->second.size() << endl;
	}

	return 0;
}
