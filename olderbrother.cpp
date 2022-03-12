#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int n)
{
	if(n == 1)
		return false;
	else if(n == 2)
		return true;
	else
	{
		for(int i=2; i*i<=n+1; i++)
		{
			if(n%i == 0)
				return false;
		}
	}
	return true;
}



int main()
{
	int q; cin >> q;
	bool flag = false;


	if(isPrime(q))
	{
		flag = true;
		cout << "yes";
	}
	else
	{
		for(int i=2; i*i<=q; i++)
		{
			if(isPrime(i))
			{
				unsigned long long cur = i;

				while(cur < q)
				{
					cur *= i;
				}

				if(cur == q)
				{
					flag = true;
					cout << "yes";
					break;
				}
			}
		}
	}

	if(!flag)
		cout << "no";



	return 0;
}
