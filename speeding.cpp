#include <iostream>
using namespace std;


int main()
{
	int t; cin >> t;
	int n, d;
	int maxMiles = 0;
	int nPrev, dPrev;

	while(t--)
	{
		cin >> n >> d;
		int curHour = n - nPrev, curMiles = d - dPrev;
		maxMiles = max(curMiles/curHour, maxMiles);
		nPrev = n;
		dPrev = d;
	}

	cout << maxMiles << endl;

	return 0;
}
