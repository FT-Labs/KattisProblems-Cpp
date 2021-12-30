#include <iostream>
using namespace std;


int primeFact(int n)
{
	int ans = 0;

	while (n%2 == 0)
	{
		ans++;
		n /= 2;
	}

	for (int i=3; i*i <= n; i+=2)
	{
		if (n%i == 0)
		{
			ans++;
			n /= i;
		}
	}

	return (n != 1 ? ans+1 : ans);
}


int main()
{
	int n; cin >> n;

	cout << primeFact(n) << endl;


	return 0;
}
