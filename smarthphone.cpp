#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	int t; cin >> t;

	while (t--)
	{
		string wanted, cur; cin >> wanted >> cur;
		int tot = 51;

		string tmp;

		for (int i=0; i<3; i++)
		{
			cin >> tmp;

			int cnt = 0;

			for (int j=0; j<tmp.size() && j<wanted.size(); j++)
			{
				if (tmp[j] != wanted[j])
					break;
				cnt++;
			}

			int ttmp = wanted.size() - 2 * cnt + tmp.size() + 1;
			tot = min(tot, ttmp);
		}

		int cnt = 0;

		for (int j=0; j<cur.size(); j++)
		{
			if (cur[j] != wanted[j] || j >= wanted.size())
				break;
			cnt++;
		}


		int ttmp = abs((int)wanted.size() - 2 * cnt + (int)cur.size());
		tot = min(tot, ttmp);

		cout << (tot >= 0 ? tot : 0) << endl;
	}

	return 0;
}
