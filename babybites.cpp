#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;

	int arr[n];

	string tmp;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;

		if (tmp == "mumble")
			arr[i] = i > 0 ? arr[i-1] + 1 : 1;
		else
			arr[i] = stoi(tmp);

		if ((i == 0 && arr[i] != 1) || i > 0 && arr[i-1] + 1 != arr[i])
		{
			cout << "something is fishy" << endl;
			return 0;
		}
	}

	cout << "makes sense" << endl;

	return 0;
}
