#include <iostream>
#include <set>
using namespace std;


int main()
{
	int mn, mx; cin >> mn >> mx;

	int tot = 0;

	for (int i=mn; i<=mx; i++)
	{
		bool flag = true;
		set<int> s;
		int tmp = i;

		while (tmp)
		{
			if ((tmp%10) == 0 || i % (tmp%10) != 0 || s.count(tmp%10))
			{
				flag = false;
				break;
			}
			s.insert(tmp%10);
			tmp /= 10;
		}

		if (flag) tot++;
	}

	cout << tot << endl;



	return 0;
}
