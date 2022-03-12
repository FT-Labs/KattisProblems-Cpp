#include <algorithm>
#include <iostream>
using namespace std;

typedef long long ll;


ll gcdExt(ll a, ll b, ll* x, ll* y)
{
	//Base case
	if (a == 0)
	{
		*x = 0; *y = 1;
		return b;
	}

	ll x1,y1;
	ll gcd = gcdExt(b % a, a, &x1, &y1);

	*x = y1 - (b/a) * x1;
	*y = x1;

	return gcd;
}

int main()
{
	ll n,t; cin >> n >> t;

	while(n && t)
	{
		for(int i=0;i<t;i++)
		{
			ll x; char ch; ll y;
			cin >> x;  cin >> ch; cin >> y;

			if(ch == '+')
				cout << (x+y)%n << endl;
			else if(ch == '-')
			{
				ll tmp = abs(x-y);
				cout << tmp%n << endl;
			}
			else if(ch == '*')
				cout << (x*y)%n << endl;
			else
			{
				ll inv1,inv2;
				ll m = gcdExt(y, n, &inv1, &inv2);
				if (m != 1)
					cout << -1 << endl;
				else
				{
					ll tmp = x * ((inv1 % y + y) %y);
					cout << tmp % n << endl;
				}
			}
		}

		cin >> n >> t;
	}
}
