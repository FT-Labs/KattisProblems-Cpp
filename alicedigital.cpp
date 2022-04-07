#include <iostream>
#include <vector>
using namespace std;

int main (int argc, char *argv[])
{
	int d; cin >> d;

	while (d--)
	{
		int n, m; cin >> n >> m;
		int arr[n];
		vector<int> idx;

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] == m) idx.push_back(i);
		}

		int best = -1;

		for (auto i : idx)
		{
			int tot = m;
			for (int j = i-1; j >= 0 && arr[j] > m; j--)
			{
				tot += arr[j];
			}
			best = max(best, tot);

			for (int j = i+1; j < n && arr[j] > m; j++)
			{
				tot += arr[j];
			}
			best = max(best, tot);
		}

		cout << best << endl;
	}

	return 0;
}
