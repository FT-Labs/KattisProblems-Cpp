#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;



int main()
{
	int c; cin >> c;

	for (int k=1; k<=c; k++)
	{
		int towns, dest; cin >> towns >> dest;

		int q; cin >> q;

		vector<int> arr(towns, 0);
		vector<priority_queue<int>> roads(towns);

		for (int i=0; i<q; i++)
		{
			int city, seats; cin >> city >> seats; city--;

			if (seats)
				roads[city].push(seats);

			if (city != dest-1)
				arr[city]++;
		}

		bool flag = true;

		for (int i=0; i<towns; i++)
		{
			if (i != dest-1)
			{
				int cur = 0;

				while (!roads[i].empty() && arr[i] > 0)
				{
					cur++;
					arr[i] -= roads[i].top(); roads[i].pop();
				}

				if (arr[i] > 0)
				{
					cout << "Case #" << k << ": IMPOSSIBLE" << endl;
					flag = false;
					break;
				}
				arr[i] = cur;
			}
		}

		if (flag)
		{
			cout << "Case #" << k << ": ";

			for (auto i : arr)
				cout << i << ' ';
			cout << endl;
		}
	}


	return 0;
}
