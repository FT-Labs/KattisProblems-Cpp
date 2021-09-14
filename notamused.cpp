#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main()
{

	int days = 1;
	while(!cin.eof())
	{
		string s; cin >> s;

		string q, name;
		int mins;
		map<string, vector<int>> mp;
		if(s == "OPEN")
		{
			while(cin >> q && q != "CLOSE")
			{
				cin >> name >> mins;
				mp[name].push_back(mins);
			}

			cout << "Day " << days << endl;

			for(auto it : mp)
			{
				double cnt = 0.0;

				for(int i=1; i<it.second.size(); i+=2)
				{
					cnt += it.second[i] - it.second[i-1];
				}
				cnt /= 10;
				cout.precision(2);

				cout << it.first << " $" << fixed << cnt << endl;
			}

			cout << endl;
			days++;
		}
	}

	return 0;
}
