#include <iostream>
using namespace std;


int main()
{
	float x, y; cin >> x >> y;


	float a, b;
	cout.precision(2);
	if(y == 0.0)
	{
		if(x <= 125.0)
		{
			b = 250.0*125/(250 - x);
			a = 250.0 - b;
			cout << fixed << a << ' ' << b;
		}
		else
		{
			b = 250.0*125/x;
			cout << "0.00" << ' ' << fixed << b;
		}
	}
	else if(x == 0.0)
	{
		if(y <= 125.0)
		{
			a = 250.0*125/(250-y);
			b = 250.0 - a;
			cout << fixed << a << ' ' << b;
		}
		else
		{
			a = 250.0*125/y;
			cout << fixed << a << ' ' << "0.00";
		}
	}
	else
	{
		if(x <= 125.0)
		{
			a = 250.0-250.0*125/y;
			cout << fixed << a << ' ' << "0.00";
		}
		else
		{
			b = 250.0-250.0*125/x;
			cout << "0.00 " << fixed << b;
		}
	}

	return 0;
}
