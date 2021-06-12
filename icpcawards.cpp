#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<string> names;
	vector<string> teams;

	for(int i=0;i<n;++i)
	{
		string name,team;
		cin >> name >> team;
		if(names.size() == 12)
			continue;
		auto it = find(names.begin(),names.end(),name);
		if(it == names.end())
		{
			names.push_back(name);
			teams.push_back(team);
		}
	}

	for(int i=0;i<names.size();++i)
	{
		cout << names[i] << ' ' << teams[i] << endl << flush;
	}

	return 0;
}
