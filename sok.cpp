#include <iostream>
using namespace std;


int main()
{
	double a, b, c; cin >> a >> b >> c;
	double ar, br, cr; cin >> ar >> br >> cr;

	double mn = min(a/ar, min(b/br, c/cr));

	a = (a - mn * ar), b = (b - mn * br), c = (c - mn * cr);
	cout.precision(4);

	cout << fixed << a << ' ' << b << ' ' << c << endl;

	return 0;
}
