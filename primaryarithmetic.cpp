#include <iostream>
using namespace std;


int main()
{
	string x,y;
	int cnt;
	bool carry;

	while(cin >> x >> y && (x != "0" || y != "0"))
	{
		if(x.size() > y.size())
			swap(x, y);

		carry = false;
		int yStart = y.size() - 1;
		cnt = 0;

		for(auto it=x.rbegin(); it != x.rend(); it++)
		{
			int sum = *it + y[yStart] - 2*'0' + (carry ? 1 : 0);

			if(sum >= 10)
			{
				cnt++;
				carry = true;
			}
			else
				carry = false;

			yStart--;
		}

		if(y.size() > x.size() && y[yStart] == '9' && carry)
		{
			while(y[yStart] == '9')
			{
				cnt++;
				yStart--;
			}
		}

		if(cnt)
			cout << cnt << (cnt == 1 ? " carry operation." : " carry operations.") << endl;
		else
			cout << "No carry operation." << endl;

	}



	return 0;
}
