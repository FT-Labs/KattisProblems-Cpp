#include <iostream>
#include <unordered_map>
using namespace std;


int main()
{
	int c; cin >> c;

	while (c--)
	{
		int n; cin >> n;
		unordered_map<string, int> mp;

		for (int i=0; i<n; i++)
		{
			string s;
			cin >> s >> s;

			if (mp.count(s))
				mp[s]++;
			else
				mp[s] = 2;
		}

		int tot = 1;

		for (auto it : mp)
			tot *= it.second;

		cout << --tot << endl;
	}



	return 0;
}
