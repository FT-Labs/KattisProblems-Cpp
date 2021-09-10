#include <iostream>
using namespace std;


int main()
{
	int n;


	while(cin >> n)
	{
		int cnt = 1;
		long tmp = 1;

		while(tmp%n != 0)
		{
			cnt++;
			tmp = tmp*10+1;
			tmp %= n;
		}

		cout << cnt << endl;
	}

	return 0;
}
