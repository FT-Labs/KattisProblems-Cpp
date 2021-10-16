#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;
	double sl = 0.0;
	int totMin = 0, totSec = 0;

	for(int i=0; i<n; i++)
	{
		int m, sec; cin >> m >> sec;
		totMin += m;
		totSec += sec;
	}

	sl = (double)totSec/(totMin*60);

	cout.precision(7);

	if(sl <= 1.0)
		cout << "measurement error" << endl;
	else
		cout << fixed << sl << endl;


	return 0;
}
