#include <iostream>
#include <cmath>
#include <unordered_set>
using namespace std;

int main()
{
	int n; cin >> n;

	int end = pow(n, 1.0/3);

	if(pow(end,3) > n)
		end = -1;

	unordered_set<int> s;
	int mx = -1;

	for(int i=1; i<=end; i++)
	{
		for(int j=i; j<=end; j++)
		{
			int cubeSum = pow(i,3) + pow(j,3);

			if(cubeSum <= n)
			{
				if(s.count(cubeSum) && cubeSum > mx)
					mx = cubeSum;
				else
					s.insert(cubeSum);
			}
			else
				break;
		}
	}

	cout << (mx == -1 ? "none" : to_string( mx )) << endl;


	return 0;
}
