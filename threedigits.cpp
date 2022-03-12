#include <iostream>
using namespace std;

typedef unsigned long long ull;


ull removeZeros(int n)
{
	while(n%10 == 0)
		n /= 10;

	return n;
}


int main()
{
	int n; cin >> n;

	ull ans = 1;
	int twos = 0; int fives = 0;

	for(int i=2; i<=n; i++)
	{
		ans *= removeZeros(i);

		while(ans%2 == 0)
		{
			ans /= 2;
			twos++;
		}

		while(ans%5 == 0)
		{
			ans /= 5;
			fives++;
		}

		ans %= 10000;
	}

	twos -= fives;

	while(twos)
	{
		ans *= 2;
		ans %= 1000;
		twos--;
	}

	if (n>6 && ans < 100)
	{
		cout << '0';
		if(ans < 10)
			cout << '0';
	}

	ans %= 1000;



	cout << ans << endl;


	return 0;
}
