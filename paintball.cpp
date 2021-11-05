#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;


int main()
{
	int n, m; cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));

	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
		{
			int x, y; cin >> x >> y;
			v[x-1][y-1] = 1;
		}


	return 0;
}
