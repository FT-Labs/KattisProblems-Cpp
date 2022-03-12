#include <iostream>
using namespace std;


int solve(int n)
{
	int p = 11;
	int tmp = n;
	int nSum = 0, totSum = 0;

	while(tmp)
	{
		nSum += tmp%10;
		tmp /= 10;
	}

	while(1)
	{
		tmp = p*n;
		totSum = 0;

		while(tmp)
		{
			totSum += tmp%10;
			tmp /= 10;
		}

		if(totSum == nSum)
			return p;

		p++;
	}
}


int main()
{
	int n;

	while(cin >> n && n)
	{
		cout << solve(n) << endl;
	}


	return 0;
}
