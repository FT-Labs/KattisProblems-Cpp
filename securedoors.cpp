#include <iostream>
#include <unordered_map>
using namespace std;


int main()
{
	unordered_map<string, int> mp;

	int n; cin >> n;

	while(n--)
	{
		string log, name;
		cin >> log >> name;

		if(log == "exit")
		{
			if(!mp.count(name) || mp[name] == 0)
				cout << name << " exited (ANOMALY)" << endl;
			else
			{
				cout << name << " exited" << endl;
				mp[name] = 0;
			}
		}
		else
		{
			if(!mp.count(name) || mp[name] == 0)
			{
				mp[name] = 1;
				cout << name << " entered" << endl;
			}
			else
			{
				cout << name << " entered (ANOMALY)" << endl;
			}
		}
	}

	return 0;
}
