#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;

	int cases = 1;
	while (!cin.eof() && cin >> a >> b >> c >> d)
	{
		cout << "Case " << cases << ":\n";
		int i = a*d - b*c;
		d /=i, b /=i, c /=i, a /= i;
		cases++;
		cout << d << ' ' << -b << endl << -c << ' ' << a << endl;
	}



	return 0;
}
