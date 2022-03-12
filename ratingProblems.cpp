#include <iostream>
using namespace std;

int main()
{
	int m,n; cin >> m >> n;

	int tot = 0;

	for(int i=0;i<n;i++)
	{
		int x; cin >> x;
		tot += x;
	}

	float mn=tot,mx=tot;

	for(int i=n;i<m;i++)
	{
		mn += -3;
		mx += 3;
	}

	mn /= m;
	mx /= m;

	cout.precision(4);

	cout << fixed << mn << ' ' << mx << endl;


	return 0;
}
