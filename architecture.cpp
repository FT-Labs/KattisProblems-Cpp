#include <iostream>
using namespace std;



int main()
{
	int r, c; cin >> r >> c;

	int mx1 = 0, mx2 = 0, tmp;

	while (r--)
	{
		cin >> tmp;
		mx1 = max(mx1, tmp);
	}

	while (c--)
	{
		cin >> tmp;
		mx2 = max(mx2, tmp);
	}

	cout << (mx1 == mx2 ? "possible" : "impossible") << endl;

	return 0;
}
