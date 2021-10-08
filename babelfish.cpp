#include <unordered_map>
#include <iostream>
using namespace std;

int main()
{
	string line;
	bool both = false;

	unordered_map<string, string> mp;


	while(!cin.eof())
	{
		getline(cin, line);
		if(line == "")
			both = true;
		else
		{
			if(both)
			{
				if(mp.count(line))
					cout << mp[line] << endl;
				else
					cout << "eh" << endl;
			}
			else
			{
				auto lwr = line.find(" ");
				string s1 = line.substr(0, lwr);
				string s2 = line.substr(lwr+1);
				mp[s2] = s1;
			}
		}


	}


	return 0;
}
