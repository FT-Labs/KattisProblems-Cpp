#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	int arr[5];
	map<int, string> mp = {{0, "E"},{1, "D"}, {2, "C"}, {3, "B"}, {4, "A"}};

	for (int i=0; i<5; i++)
		cin >> arr[i];
	sort(arr, arr+5);

	int cur; cin >> cur;

	for (int i=0; i<4; i++)
	{
		if (cur<arr[i] && !i)
		{
			cout << "F" << endl;
			return 0;
		}
		else if (cur>=arr[i] && cur<arr[i+1])
		{
			cout << mp[i] << endl;
			return 0;
		}
	}

	cout << "A" << endl;


	return 0;
}
