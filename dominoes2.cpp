#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> vec(10005, vector<int>{});
bool used[10005];

// Simple dfs to count connected nodes
void dfs(int nd)
{
	used[nd] = 1;
	for(int i=vec[nd].size()-1; i>=0; i--)
	{
		if(!used[vec[nd][i]])
			dfs(vec[nd][i]);
	}
}


int main()
{
	int t; cin >> t;


	while(t--)
	{
		fill(used, used+10005, 0);
		int n, m, l, x, y;
		cin >> n >> m >> l;

		while(m--)
		{
			cin >> x >> y;
			vec[x].push_back(y);
		}
		while(l--)
		{
			int st; cin >> st;
			dfs(st);
		}

		int cnt = count(used, used+n+1, true);

		cout << cnt << endl;

		vec = vector<vector<int>>(10005, vector<int>{});

	}

	return 0;
}
