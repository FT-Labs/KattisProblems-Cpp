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
		r /= 2;

		for (int i=1; i<n; i++)
		{
			ans += (PI * r * r) * fact;
			fact *= 3;
			r /= 2;
		}

		cout.precision(6);

		cout << fixed << ans << endl;
	}


	return 0;
}
