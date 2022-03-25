#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int n; cin >> n;

	string cmp[n];

	string key;

	for (int i = 0; i < n; i++)
	{
		cin >> cmp[i];
	}

	cin >> key;

	int cnt = 0;

	for (auto s : cmp)
	{
		if (s.size() != key.size())
			continue;

		bool flag = true;

		for (int i = 0; i < s.size(); i++)
		{
			int keyVal = key[i] - '0';

			int curVal;

			int tmp = s[i] - 'a';

			switch (tmp)
			{
				case 0 ... 2:
					curVal = 1;
					break;
				case 3 ... 5:
					curVal = 2;
					break;
				case 6 ... 8:
					curVal = 3;
					break;
				case 9 ... 11:
					curVal = 4;
					break;
				case 12 ... 14:
					curVal = 5;
					break;
				case 15 ... 18:
					curVal = 6;
					break;
				case 19 ... 21:
					curVal = 7;
					break;
				default:
					curVal = 8;
			}
			curVal++;

			if (curVal != keyVal)
			{
				flag = false;
				break;
			}
		}

		if (flag)
			cnt++;
	}

	cout << cnt << endl;

}
