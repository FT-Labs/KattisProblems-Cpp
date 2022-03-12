#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int* parent, *rnk;

struct Circle
{
	int x, y, r;
};

struct Edge
{
	double dist;
	int x, y;
};


bool cmp(const Edge& e1, const Edge& e2)
{
	return e1.dist < e2.dist;
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

double dist(const Circle& e1, const Circle& e2)
{
	double ans = sqrt( pow(e1.x - e2.x, 2) + pow(e1.y - e2.y, 2) ) - e1.r - e2.r;

	return (ans < 0 ? 0 : ans);
}

int find(int x)
{
	if (x != parent[x])
		parent[x] = find(parent[x]);
	return parent[x];
}

double kruskal(vector<Edge>& edges)
{
	double mst = 0;

	sort(edges.begin(), edges.end(), cmp);

	for (int i=0; i<edges.size(); i++)
	{
		int setX = find(edges[i].x);
		int setY = find(edges[i].y);

		if (setX != setY)
		{
			union_set(setX, setY);
			mst += edges[i].dist;
		}
	}
	return mst;
}


int main()
{
	int n; cin >> n;


	parent = new int[n];
	rnk = new int[n];
	vector<Circle> c(n);

	for (int i=0; i<n; i++)
	{
		parent[i] = i;
		rnk[i] = 0;

		cin >> c[i].x >> c[i].y >> c[i].r;
	}


	vector<Edge> edges;

	for (int i=0; i<n; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			double dis = dist(c[i], c[j]);
			edges.push_back({dis, i, j});
		}
	}

	cout.precision(6);

	cout << fixed << kruskal(edges) << endl;

	delete[] parent, delete[] rnk;

	return 0;
}
