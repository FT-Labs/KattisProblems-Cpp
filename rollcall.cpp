#include <set>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool comp(pair<string, string> p1, pair<string, string> p2)
{
	if(p1.second == p2.second)
		return (p1.first<p2.first);
	return (p1.second<p2.second);
}

int main()
{
	unordered_map<string, int> names;
	unordered_map<string, int> surNames;
	vector<pair<string, string>> vec;

	string name, surName;

	while(cin >> name >> surName)
	{
		names[name]++;
		surNames[surName]++;
		vec.push_back(make_pair(name,surName));
	}

	sort(vec.begin(), vec.end(), ::comp);

	for(auto it : vec)
	{
		if(names[it.first]>1)
			cout << it.first << ' ' << it.second << endl;
		else
			cout << it.first << endl;
	}


	return 0;
}
