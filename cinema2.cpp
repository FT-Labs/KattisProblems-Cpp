#include <iostream>
using namespace std;

int main()
{
	int tot, groups; cin >> tot >> groups;

	int curTot = 0;
	int cnt = 0;

	int cur;
	for(int i=0; i<groups; i++)
	{
		cin >> cur;
		curTot += cur;

		if(curTot > tot)
			break;
		cnt++;
	}


	cout << groups-cnt << endl;

	return 0;
}
