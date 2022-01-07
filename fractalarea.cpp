#include <iostream>
using namespace std;

#define PI 3.141592653589793


int main()
{
	int t; cin >> t;

	while (t--)
	{
		long double r;
		int n;
		cin >> r >> n;

		int fact = 4;
		long double ans = PI * r * r;

		long double add = ans;

		for (int i=0; i<n-1; i++)
		{
			ans += add;
			add *= 0.75;
		}


		cout.precision(10);

		cout << fixed << ans << endl;
	}


	return 0;
}
