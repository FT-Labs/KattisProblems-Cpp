#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;

	string cur;
	while(cin >> n && n)
	{
		cin >> cur;
		reverse(cur.begin(), cur.end());

		for(auto& ch : cur)
		{
			int tot;
			if(ch == '_')
				tot = 26+n;
			else if(ch == '.')
				tot = 27+n;
			else
				tot = ch-'A'+n;

			tot %= 28;

			if(tot == 26)
				ch = '_';
			else if(tot == 27)
				ch = '.';
			else
				ch = 'A'+tot;
		}

		cout << cur << endl;
	}


	return 0;
}
