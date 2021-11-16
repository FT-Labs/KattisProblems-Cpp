#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int BFS(vector<vector<int>>& grid, vector<vector<bool>>& visited, int n, int m)
{
	queue<pair<int, int>> q;
	q.push({0, 0});
	int cnt = 0, curNodes = 1, nextNodes = 0;

	while (!q.empty())
	{
		int x = q.front().first, y = q.front().second; q.pop(); curNodes--;
		int val = grid[x][y];
		vector<int> dir = {x + val, y, x - val, y, x, y + val, x, y- val};


		for (int i=0; i<dir.size(); i+=2)
		{
			if (dir[i] >= 0 && dir[i] < n && dir[i+1] >= 0 && dir[i+1] < m && !visited[dir[i]][dir[i+1]])
			{
				q.push({dir[i], dir[i+1]});
				visited[dir[i]][dir[i+1]] = true;
				nextNodes++;
			}
		}

		if (curNodes == 0 || visited[n-1][m-1])
		{
			cnt++;
			curNodes = nextNodes;
			nextNodes = 0;
		}

		if (visited[n-1][m-1])
			return cnt;
	}

	return -1;
}

int main()
{
	int n, m; cin >> n >> m;

	vector<vector<int>> grid(n, vector<int>(m));

	char ch;

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cin >> ch;
			grid[i][j] = ch - '0';
		}
	}

	vector<vector<bool>> visited(n, vector<bool> (m, false));

	cout << BFS(grid, visited, n, m) << endl;

	return 0;
}
