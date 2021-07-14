#include <iostream>
#include <vector>
#include <list>
#define mp make_pair
using namespace std;


int main()
{
	int vertices, edges, queries, start;
	cin >> vertices >> edges >> queries >> start;


	while(vertices && edges && queries && start)
	{
		vector<list<pair<int, int>>> adj(vertices+1);

		for(int i=0;i<vertices;i++)
		{
			int v1,v2,w; cin >> v1 >> v2 >> w;
			adj[v1].push_back(mp(v2,w));
		}


		for(int i=0;i<queries;i++)
		{
			int dest; cin >> dest;
			if(dest == start)
			{
				cout << 0 << endl;
				break;
			}

			auto it = adj[start].begin();
			int tot = 0;
			int tmp = start;
			while(start != dest || it !=adj[start].end())
			{
				int mn = 30001;
				while(it != adj[start].end())
				{
					if(it->first == dest)
					{
						tot += it->second;

					}

					if(it->second < mn)
					{
						tmp = it->first;
						mn = it->second;
					}
					it++;
				}
			}

			if(start != dest)
				cout << "Impossible" << endl;
			else
				cout <<

		}

	}


}
