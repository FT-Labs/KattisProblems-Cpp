#include <bitset>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long bitCalc(long long num)
{
long long ones = 0;
while(num>0)
		{
			if(num%2!=0)
				++ones;
			else if(num == 1)
			{
				++ones;
				num -=1;
			}
			num /= 2;
		}
	return ones;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long num;
	int n;
	cin >> n;

	int ones = 0;

	for(int i=0;i<n;++i)
	{
		cin >> num;
		if(num == 0)
		{
			cout << '0' << endl << flush;

		}
		else
		{
			long long tot = 0;
			while(num>0)
			{
				tot = max(tot,bitCalc(num));
				num /= 10;
			}
			cout << tot << endl << flush;
		}
	}
	return 0;
}
