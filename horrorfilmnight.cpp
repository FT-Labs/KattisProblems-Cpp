#include <iostream>
#include <unordered_set>
using namespace std;


int main()
{
	bool p1[1000000]{false}, p2[1000000]{false};

	int n; cin >> n;

	for (int i=0; i<n; i++)
	{
		int x; cin >> x; p1[x] = true;
	}


	int m; cin >> m;

	for (int i=0; i<m; i++)
	{
		int x; cin >> x; p2[x] = true;
	}

	int cnt = 0;

	bool p1b = true, p2b = true;


	for (int i=0; i<1000000; i++)
	{
		if (p1[i] && p2[i])
		{
			p1b = true, p2b = true;
			cnt++;
		}
		else if (p1[i] && p2b)
		{
			p1b = true; p2b = false;
			cnt++;
		}
		else if (p2[i] && p1b)
		{
			p1b = false, p2b = true;
			cnt++;
		}
	}

	cout << cnt << endl;



	return 0;
}
