#include <bits/stdc++.h>
using namespace std;

int V;

int minKey(int key[], bool mstSet[])
{
	int mn = INT_MAX, min_index;

	for(int v=0; v<V; v++)
		if(mstSet[v] == false && key[v] < mn)
			mn = key[v], min_index = v;

	return min_index;
}
void printMST(int parent[], int** graph)
{
	for(int i=1; i<V; i++)
		cout << parent[i]+1 << " " << i+1 << endl;
}


void primMST(int** graph)
{
	int parent[V];

	int key[V];

	bool mstSet[V];

	for(int i=0; i<V; i++)
		key[i] = INT_MAX, mstSet[i] = false;

	key[0] = 0;
	parent[0] = -1; //First node is always root of mst

	for(int cnt=0; cnt<V-1; cnt++)
	{
		int u = minKey(key, mstSet);

		mstSet[u] = true;

		for(int v=0; v<V; v++)
		{
			if(graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
				parent[v] = u, key[v] = graph[u][v];
		}
	}

	printMST(parent, graph);
}


int main()
{
	int** graph;

	cin >> V;

	graph = new int*[V];

	for (int i=0; i<V; i++)
		graph[i] = new int[V];

	for (int i=0; i<V; i++)
		for (int j=0; j<V; j++)
			cin >> graph[i][j];

	primMST(graph);

	delete[] graph;

	return 0;
}
