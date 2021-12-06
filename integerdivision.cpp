#include <iostream>
#include <unordered_map>
using namespace std;


int main()
{
	long n, d; cin >> n >> d;
	unordered_map<long, long> mp;

	int tmp;

	for (long i=0; i<n; i++)
	{
		cin >> tmp;
		mp[tmp/d]++;
	}

	unsigned long long ans = 0;

	for (auto p : mp)
	{
		ans += (p.second * (p.second - 1)) / 2;
	}

	cout << ans << endl;


	return 0;
}
