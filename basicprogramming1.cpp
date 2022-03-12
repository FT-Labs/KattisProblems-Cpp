#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <numeric>
using namespace std;


int main()
{
	int n, op; cin >> n >> op;

	int arr[n];
	long tot = 0;

	for (int i=0; i<n; i++)
	{
		cin >> arr[i];
		tot += arr[i];
	}

	if (op == 1)
		cout << 7 << endl;
	else if (op == 2)
	{
		if (arr[0] > arr[1])
			cout << "Bigger" << endl;
		else if (arr[0] == arr[1])
			cout << "Equal" << endl;
		else
			cout << "Smaller" << endl;
	}
	else if (op == 3)
	{
		int a1[3] = {arr[0],arr[1],arr[2]};
		sort(a1, a1+3);
		cout << a1[1] << endl;
	}
	else if (op == 4)
	{
		cout << tot << endl;
	}
	else if (op == 5)
	{
		long evenTot = 0;

		for (int i=0; i<n; i++)
		{
			if (arr[i]%2 == 0)
				evenTot += arr[i];
		}

		cout << evenTot << endl;
	}
	else if (op == 6)
	{
		for (int i=0; i<n; i++)
		{
			cout << (char) (arr[i]%26+'a');
		}
		cout << endl;
	}
	else
	{
		int i = 0;
		int curIndex = arr[i];
		vector<int> v; v.push_back(i);

		while (true)
		{
			if (curIndex == n-1)
			{
				cout << "Done" << endl; break;
			}
			else if (curIndex >= n)
			{
				cout << "Out" << endl; break;
			}
			else if (v.size() > n)
			{
				cout << "Cyclic" << endl; break;
			}
			i = curIndex;
			curIndex = arr[i];
			v.push_back(i);
		}
	}


	return 0;
}
