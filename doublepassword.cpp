#include <iostream>
#include <set>
using namespace std;


int main()
{
	int p1, p2; cin >> p1 >> p2;

	int diff = 0;

	while (p1 && p2)
	{
		int p1rem = p1%10, p2rem = p2%10;

		if (p1rem != p2rem) ++diff;

		p1/= 10, p2/= 10;
	}

	cout << (1 << diff) << endl;

	return 0;
}
