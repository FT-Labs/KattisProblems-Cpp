#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isPrime(int n)
{
	if(n == 2)
		return true;
	else
	{
		for(int i=2;i<n;++i)
		{
			if(n%i==0)
				return false;
		}
	}
	return true;
}

int primeFactors(int n)
{
	int sum = 0;
	while(n%2==0)
	{
		sum += 2;
		n /= 2;
	}

	for(int i=3;i<=sqrt(n);i=i+2)
	{
		while(n%i==0)
		{
			sum += i;
			n /= i;
		}

	}

	if(n>2)
		sum += n;
	return sum;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	while(n!=4)
	{
		int cnt = 0;

		int ans;
		ans = primeFactors(n);

		if(ans != n)
		{
			cnt += 2;
			int memo = ans;
			while(true)
			{
				ans = primeFactors(ans);
				if(ans == memo)
					break;
				++cnt;
				memo = ans;
			}
			cout << ans << ' ' << cnt << endl << flush;
		}
		else{
			cout << n << ' ' << 1 << endl << flush;
		}
		cin >> n;
	}
	return 0;
}
