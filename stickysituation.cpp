#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef long long ll;


int main()
{
	priority_queue<ll, vector<ll>, greater<ll>> minq;

	int n; cin >> n;

	ll cur;
	while (n--)
	{
		cin >> cur;
		minq.push(cur);
	}

	ll x1 = minq.top(); minq.pop();
	ll x2 = minq.top(); minq.pop();

	bool flag = false;

	while (!minq.empty())
	{
		if (x1 + x2 > minq.top())
		{
			flag = true;
			break;
		}

		x1 = x2;
		x2 = minq.top();
		minq.pop();
	}


	cout << (flag ? "possible" : "impossible") << endl;


	return 0;
}
