#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int* parent, *rnk;

struct Coord
{
	int x, y;
};

double getDist(const Coord& c1, const Coord& c2)
{
    return sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
}

int find(int x)
{
	if (x != parent[x])
		parent[x] = find(parent[x]);
	return parent[x];
}

void union_set(int x, int y)
{
	if (rnk[x] > rnk[y])
		parent[y] = x;
	else
		parent[x] = y;

	if (rnk[x] == rnk[y])
		rnk[y]++;
}


double kruskal(vector<pair<double, pair<int, int>>>& edges, int n)
{
	double mst = 0.0;

	for (int i=0; i<n; i++)
	{
		int setX = find(edges[i].second.first);
		int setY = find(edges[i].second.second);

		if (setX != setY)
		{
			union_set(setX, setY);
			edges.push_back({edges[i].first, {0,0}});
		}
	}
	return mst;
}


int main()
{
	int c; cin >> c;

	while (c--)
	{
		int s, p; cin >> s >> p;
		vector<Coord> v(p);

		parent = new int[p+1];
		rnk = new int[p+1];

		int n = s+1;

		for (int i=0; i<p+1; i++)
		{
			parent[i] = i;
			rnk[i] = 0;
		}

		for (int i=0; i<p; i++)
			cin >> v[i].x >> v[i].y;

		vector<pair<double, pair<int, int>>> edges;

		for (int i=0; i<v.size()-1; i++)
		{
			for (int j=i+1; j<v.size(); j++)
			{
				edges.push_back({getDist(v[i], v[j]), {i, j}});
			}
		}

		sort(edges.begin(), edges.end());

		cout.precision(2);
		kruskal(edges, edges.size());

		cout <<fixed << edges[edges.size()-s].first << endl;
		delete[] rnk, parent;
	}




	return 0;
}
