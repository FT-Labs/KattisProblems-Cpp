#include <iostream>
#include <numeric>
#include <vector>
using namespace std;


int main()
{
	int n;

	while(cin >> n && n != -1)
	{

		int tmp;
		vector<vector<int>> arr(n, vector<int>{});

		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin >> tmp;
				arr[i].push_back(tmp);
			}
		}

		for(int i=0; i<n; i++)
		{
			bool flag = false;
			if(accumulate(arr[i].begin(), arr[i].end(), 0) < 2)
				cout << i << ' ';
			else
			{
				for(int j=0; j<n; j++)
				{
					if(arr[i][j] == 0 && i == j)
						continue;

					int tmp = j;

					for(int k=0; k<n; k++)
					{
						if(arr[tmp][k] == 0)
							continue;

						if(arr[i][k] == 1 && arr[i][tmp] == 1 && arr[tmp][k] == 1 && i != k && i != tmp && tmp != k)
						{
							flag = true;
							break;
						}
					}
				}
				if(!flag)
					cout << i << ' ';
			}
		}
		cout << endl;
	}

	return 0;
}
