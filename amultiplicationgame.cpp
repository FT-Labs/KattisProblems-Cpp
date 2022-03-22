#include <iostream>
using namespace std;

int main()
{
	long n;

	while (cin >> n)
	{
		long p = 1;
		while (p < n) p *= 18;

		if (p >= 2*n)
			cout << "Stan wins." << endl;
		else
			cout << "Ollie wins." << endl;
	}

	return 0;
}
