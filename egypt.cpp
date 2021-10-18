#include <iostream>
#include <cmath>
using namespace std;

#define HYPOT2D(x, y) ((x*x + y*y))


int main()
{
	long x, y, hyp;

	while(cin >> x >> y >> hyp && (x && y && hyp))
	{
		if(x > y && x > hyp)
			swap(hyp, x);
		else if(y > x && y > hyp)
			swap(hyp, y);
		long hy = (HYPOT2D(x, y));

		cout << (hy == hyp*hyp ? "right" : "wrong") << endl;
	}

	return 0;
}
