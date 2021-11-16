#include <iostream>
#include <cstring>
using namespace std;


int main()
{

	int n;
	bool flag[11];

	memset(flag, 1, sizeof(flag));


	while (cin >> n && n)
	{
		string query; cin >> query >> query;

		if (query == "high")
		{
			for (int i=n; i<11; i++)
				flag[i] = false;
		}
		else if (query == "low")
		{
			for (int i=0; i<=n; i++)
				flag[i] = false;
		}
		else
		{
			if (flag[n])
				cout << "Stan may be honest" << endl;
			else
				cout << "Stan is dishonest" << endl;

			memset(flag, 1, sizeof(flag));
		}
	}


	return 0;
}
