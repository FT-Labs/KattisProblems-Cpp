#include <iostream>
using namespace std;



string solve(int n)
{
	int tot = 0;

	for(int i=2; i*i<=n; i++)
	{
		if(i*i == n)
			tot += i;
		else if(n%i == 0)
			tot += i + (n/i);
	}
	++tot;

	if(tot == n)
		return "perfect";
	else if(abs(tot - n) <= 2)
		return "almost perfect";
	else
		return "not perfect";
}


int main()
{

	int n;
	while(cin >> n)
	{

		cout << n << ' ' << solve(n) << endl;
	}


	return 0;
}
