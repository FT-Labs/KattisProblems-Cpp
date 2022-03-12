#include <iostream>
using namespace std;

int main()
{
	int r,c,zr,zc;	cin >> r >> c >> zr >> zc;

	for(int i=0;i<r;i++)
	{
		string s; cin >> s;

		string ans;

		if (zc > 1)
		{
			for (char ch : s)
			{
				for (int j=0;j<zc;j++)
					ans += ch;
			}
		}
		else
			ans = s;

		for (int j=0;j<zr;j++)
			cout << ans << endl;
	}

	return 0;
}
