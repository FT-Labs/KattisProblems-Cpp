#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	int t; cin >> t;

	int mn = INT_MAX;

	int tmp, cur = 0;

	while (t--)
	{
		cin >> tmp;

		cur += tmp;

		if (cur < 0)
			mn = min(mn, cur);
	}

	cout << (mn != INT_MAX ? -mn : 0) << endl;


	return 0;
}
