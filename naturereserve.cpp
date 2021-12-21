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

int kruskal(vector<pair<int, pair<int, int>>>& edges, int n)
{
	int mst = 0;

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

void reset(int n)
{
	for (int i=0; i<n; i++)
	{
		rnk[i] = 0;
		parent[i] = i;
	}
}

int main()
{
	int q; cin >> q;

	while (q--)
	{
		int n, m, l, s; cin >> n >> m >> l >> s;
		int st; cin >> st;

		rnk = new int[n+1], parent = new int[n+1];

		reset(n+1);


		vector<vector<pair<int, pair<int, int>>>> edges;

		for (int i=0; i<st; i++)
		{
			int w, x, y; cin >>  x >> y >> w;
			edges.push_back({{w, {x, y}}});
		}

		for (int i=0; i<m-st; i++)
		{
			int w, x, y; cin >> x >> y >> w;

			edges[0].push_back({w, {x,y}});
		}

		int ans = 0;

		auto swp = edges[0][0];
		for (int i=0; i<edges.size(); i++)
		{
			swap(edges[i][0], *find(edges[0].begin(), edges[0].end(), swp));
			swp = edges[0][0];
			sort(edges[0].begin(), edges[0].end());
			ans += kruskal(edges[0], n+1) ;//+ l;
			reset(n+1);
		}


		cout <<  fixed << ans-n+1 << endl;

//		delete[] rnk, parent;
	}
	return 0;
}
