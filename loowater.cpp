#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n, m;

	while(cin >> n >> m && (n || m))
	{
		int dragon[n], knight[m];

		for(int i=0; i<n; i++)
			cin >> dragon[i];

		for(int i=0; i<m; i++)
			cin >> knight[i];

		int cmp = 0;
		int cnt = 0;

		long long tot = 0;

		sort(dragon, dragon+n);
		sort(knight, knight+m);

		for(int i=0; i<m; i++)
		{
			if(cnt == n)
				break;

			if(knight[i] >= dragon[cmp])
			{
				cnt++;
				tot += knight[i];
				cmp++;
			}
		}

		if(cnt == n)
			cout << tot << endl;
		else
			cout << "Loowater is doomed!" << endl;
	}

	return 0;
}
