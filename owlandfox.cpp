#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;

	while(n--)
	{
		int x; cin >> x;
		int tmp = x;
		int digs = 0;

		while(tmp)
		{
			digs += tmp%10;
			tmp /= 10;
		}

		if(digs == 1)
			cout << 0 << endl;
		else
		{
			string ans = to_string(x);
			for(auto it = ans.rbegin(); it != ans.rend(); it++)
			{
				if(*it != '0')
				{
					*it -= 1;
					break;
				}
			}

			cout << ans << endl;
		}


	}


	return 0;
}
