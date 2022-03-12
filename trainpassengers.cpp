#include <iostream>
using namespace std;


int main()
{
	int cap, n;
	cin >> cap >> n;
	int tmp = n-1;

	int trainSize = 0;

	int left, entered, waiting;
	bool flag = true;

	while(n--)
	{
		cin >> left >> entered >> waiting;


		trainSize -= left;

		if(trainSize < 0)
		{
			flag = false;
			break;
		}

		trainSize += entered;

		if(trainSize>cap)
		{
			flag = false;
			break;
		}


		if(trainSize<cap && waiting>0)
		{
			flag = false;
			break;
		}
	}

	if(trainSize>0 || waiting>0)
		flag = false;

	if(flag)
		cout << "possible" << endl;
	else
		cout << "impossible" << endl;

	return 0;
}
