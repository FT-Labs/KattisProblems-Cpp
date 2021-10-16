#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
	int n; cin >> n;
	int arr[n];

	for(int i=0; i<n; i++)
		cin >> arr[i];

	sort(arr, arr+n);

	float ans = 1.1;

	for(int i=0; i<n; i++)
	{
		if(arr[i] > i+1)
		{
			cout << "impossible" << endl;
			goto end;
		}
		else
		{
			float perc = (float)arr[i]/(i+1);
			ans = min(perc, ans);
		}
	}

	cout << ans << endl;


end:
	return 0;
}
