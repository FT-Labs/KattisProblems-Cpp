#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

struct Project
{
	string name;
	unordered_set<string> us;
};

bool cmp(const Project& p1, const Project& p2)
{
	if (p1.us.size() == p2.us.size())
		return p1.name < p2.name;
	else
		return p1.us.size() > p2.us.size();
}

int main()
{
	vector<Project> v;
	unordered_set<string> usAll;
	unordered_set<string> usDup;

	string s;

	while(getline(cin, s))
	{
		if (s == "1" || s == "0")
		{
			sort(v.begin(), v.end(), cmp);

			for (auto it : v)
			{
				cout << it.name << ' ' << it.us.size() << endl;
			}


			v.clear();
			usAll.clear();
			usDup.clear();
			if (s == "1")
				continue;
			else
				break;
		}

		if (isupper(s[0]))
		{
			Project cur = Project();
			cur.name = s;
			v.push_back(cur);

			while(islower(cin.peek()))
			{
				getline(cin, s);

				if (usDup.count(s))
					continue;

				if (usAll.count(s))
				{

					for (int i=0; i<v.size()-1; i++)
					{
						if (v[i].us.count(s))
						{
							usDup.insert(s);
							v[i].us.erase(s);
							break;
						}
					}
				}
				else
				{
					v.back().us.insert(s);
					usAll.insert(s);
				}
			}
		}


	}

	return 0;
}
