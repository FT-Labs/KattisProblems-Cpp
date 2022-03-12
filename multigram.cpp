#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s; cin >> s;

	for (int i=1; i<s.size(); i++)
	{
		if (s.size() % i == 0)
		{
			bool flag = true;
			int cur = accumulate(s.begin(), s.begin()+i, 0);

			for (int j=i; j<s.size(); j+=i)
			{
				int tmp = accumulate(s.begin()+j, s.begin()+j+i, 0);

				if (cur != tmp)
				{
					flag = false;
					break;
				}
			}

			if (flag)
			{
				cout << s.substr(0, i) << endl;
				return 0;
			}
		}
	}

	cout << -1 << endl;


	return 0;
}
