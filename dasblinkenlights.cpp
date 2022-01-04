#include <iostream>
using namespace std;


int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b%a, a);
}


int lcm(int a, int b)
{
	return (a / gcd(a,b)) * b;
}


int main()
{
	int a, b, s;

	cin >> a >> b >> s;

	int lc = lcm(a, b);


	if (lc <= s)
		cout << "yes" << endl;
	else
		cout << "no" << endl;


	return 0;
}
