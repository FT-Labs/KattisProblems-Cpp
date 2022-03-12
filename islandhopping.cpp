#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int *rnk, *parent;

int find(int x)
{
	if (x != parent[x])
		parent[x] = find(parent[x]);
	return parent[x];
}

void union_set(int i, int j)
{
	if (rnk[i] > rnk[j])
		parent[j] = i;
	else
		parent[i] = j;

	if (rnk[i] == rnk[j])
		rnk[j]++;
}

double kruskal(vector<pair<double, pair<int, int>>>& edges, int n)
{
	double mst = 0.0;

	for (auto it : edges)
	{
		int setX = find(it.second.first), setY = find(it.second.second);

		if (setX != setY)
		{
			mst += it.first;
			union_set(setX, setY);
		}
	}
	return mst;
}

int main()
{
	int q; cin >> q;

	while (q--)
	{
		int n; cin >> n;
		vector<pair<double, double>> v;

		rnk = new int[n], parent = new int[n];

		for (int i=0; i<n; i++)
		{
			rnk[i] = 0;
			parent[i] = i;
		}

		double x, y;

		for (int i=0; i<n; i++)
		{
			cin >> x >> y;
			v.push_back({x, y});
		}

		vector<pair<double, pair<int, int>>> edges;

		for (int i=0; i<n; i++)
		{
			for (int j=i+1; j<n; j++)
			{
				edges.push_back({sqrt(pow(v[i].first - v[j].first, 2) + pow(v[i].second - v[j].second, 2)),{i, j}});
			}
		}

		sort(edges.begin(), edges.end());

		double ans = kruskal(edges, n);
		cout.precision(2);

		cout <<  fixed << ans << endl << endl;

		delete[] rnk, parent;
	}

	return 0;
}
