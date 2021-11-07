#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;


// pq solution, faster and beautiful

int main()
{

	int t; cin >> t; int cs = 1;

	while (t--)
	{
		priority_queue<int> pq1;
		priority_queue<int, vector<int>, greater<int>> pq2;

		int n; cin >> n; int tmp;

		for (int i=0; i<2*n; i++)
		{
			cin >> tmp;
			(i<n ? pq1.push(tmp) : pq2.push(tmp));
		}

		long long vecProduct = 0;


		while (!pq1.empty())
		{
			vecProduct += (long long)pq1.top() * (long long) pq2.top();
			pq1.pop(); pq2.pop();
		}

		cout << "Case #" << cs << ": " << vecProduct << endl;
		cs++;
	}
	return 0;
}


/*int main()
{
	int n; cin >> n;
	int cs = 1;

	while (n--)
	{
		int n; cin >> n;
		int v1[n], v2[n];

		for (int i=0; i<n; i++)
			cin >> v1[i];

		for (int i=0; i<n; i++)
			cin >> v2[i];

		sort(v1, v1+n); sort(v2, v2+n);

		long long vecProduct = 0;

		for (int i=0; i<n; i++)
		{
			vecProduct += (long long)v1[i] * (long long)v2[n-i-1];
		}

		cout << "Case #" << cs << ": " << vecProduct << endl;
		cs++;
	}
	return 0;
}*/
