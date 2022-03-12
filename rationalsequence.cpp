#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long t; cin >> t;

	long idx, q, p;
	while (t--)
	{
		cin >> idx >> p;
		cin.ignore();
		cin >> q;

		cout << idx << ' ';

		if (q == 1)
		{
			cout << 1 << '/' << p+1 << endl;
			continue;
		}

		long stp = 0;

		if (p > q)
		{
			stp = ceil((double)(p-q)/q);
			p -= q * stp;
		}

		q -= p;
		p += q;

		if (stp > 0)
			q += p * stp;

		cout << p << '/' << q << endl;

	}



	return 0;
}
