#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{

	int t;

	while (cin >> t && t)
	{
		map<string, vector<string>> mp;

		for (int i=0; i<t; i++)
		{
			string name; cin >> name;

			string tmp;

			while (cin.peek() != '\n' && cin >> tmp)
			{
				if (mp.count(tmp))
					mp[tmp].push_back(name);
				else
					mp[tmp] = vector<string>{name};
			}
		}

		for (auto it : mp)
		{
			cout << it.first << ' ';
			sort(it.second.begin(), it.second.end());

			for (auto name : it.second)
			{
				cout << name << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}


	return 0;
}
