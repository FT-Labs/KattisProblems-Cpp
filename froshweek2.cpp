#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n, m; cin >> n >> m;

	int duration[n], interval[m];

	for(int i=0; i<n; i++)
		cin >> duration[i];

	for(int i=0; i<m; i++)
		cin >> interval[i];

	sort(duration, duration+n);
	sort(interval, interval+m);

	int cnt = 0;
	int cmp = 0;

	for(int i=0; i<m; i++)
	{
		if(interval[i] >= duration[cmp])
		{
			cnt++;
			cmp++;
		}
	}

	cout << cnt << endl;



	return 0;
}
