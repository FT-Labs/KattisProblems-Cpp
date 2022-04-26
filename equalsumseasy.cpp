#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main ()
{
	int c; cin >> c;

	for (int cse = 1; cse <= c; cse++)
	{
		int n; cin >> n;
		int arr[n];

		for (int i = 0; i < n; i++)
			cin >> arr[i];

		unordered_map<int, vector<int>>mp;

		for (int i = 1; i < (1 << n); i++)
		{
			int tot = 0, j = i;
			int bitmask = 0;
			vector<int> cur;

			do {
				if (j & 1)
				{
					cur.push_back(arr[bitmask]);
					tot += arr[bitmask];
				}
				bitmask++;
				j >>= 1;
			} while (j);

			if (mp.count(tot))
			{
				cout << "Case #" << cse << ":\n";
				for (auto var : cur)
					cout << var << ' ';
				cout << endl;
				for (auto var : mp[tot])
					cout << var << ' ';
				cout << endl;
				arr[0] = -1;
				break;
			}
			else
				mp[tot] = cur;
		}

		if (arr[0] != -1)
			cout << "Case #" << cse << ":\nImpossible\n";
	}


	return 0;
}
