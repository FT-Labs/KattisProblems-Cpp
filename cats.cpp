#include <bits/stdc++.h>
using namespace std;


struct Edge
{
	int n1, n2, w;
};


bool cmp(Edge& e1, Edge& e2)
{
	return e1.w < e2.w;
}


int find(vector<int>& d, int a)
{
	if(d[a] == -1)
		return a;

	return d[a] = find(d, d[a]);
}

void join(vector<int>& d, int a, int b)
{
	a = find(d, a);
	b = find(d, b);

	if(a == b)
		return;

	d[a] = b;
}


int main()
{
	int t; cin >> t;

	while(t--)
	{
		int m, c; cin >> m >> c;
		vector<Edge> v((c*(c-1))/2);

		for(auto& edge : v)
			cin >> edge.n1 >> edge.n2 >> edge.w;

		sort(v.begin(), v.end(), cmp);

		vector<int> d(c, -1);

		int w = 0;

		for(auto edge : v)
		{
			if(find(d, edge.n1) != find(d, edge.n2))
			{
				join(d, edge.n1, edge.n2);
				w += edge.w;
			}
		}



		if(m-w >= c)
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}


	return 0;
}
