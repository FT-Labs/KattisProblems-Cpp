#include <iostream>
#include <vector>
using namespace std;


bool visited[101][101];
char arr[101][101];


void dfs(int i, int j, int m, int n)
{
	if(!(i < 0 || j < 0 || i>=m || j >= n || arr[i][j] == 'W' || visited[i][j]))
	{
		visited[i][j] = true;

		dfs(i+1, j, m, n);
		dfs(i-1, j, m, n);
		dfs(i, j+1, m, n);
		dfs(i, j-1, m, n);
	}
}




int main()
{
	bool flag = true;

	int row, col; cin >> row >> col;


	int minIsland = 0;


	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
			cin >> arr[i][j];

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(arr[i][j] == 'L' && !visited[i][j])
			{
				minIsland++;
				dfs(i, j, row, col);
			}
		}
	}

	cout << minIsland << endl;


	return 0;
}
