#include <iostream>
#include <set>
using namespace std;

int main()
{
	unsigned long n;
	cin >> n;

	set<unsigned long> s;

	unsigned long i;

	for (i=1; i*i <= n; i++)
	{
		if (n%i == 0)
		{
			s.insert(i-1);
			s.insert((n/i)-1);
		}
	}

	for (auto it : s)
	{
		cout << it << ' ';
	}

	return 0;
}
