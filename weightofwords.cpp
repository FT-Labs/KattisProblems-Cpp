#include <iostream>
using namespace std;


int main()
{
	int cnt, total; cin >> cnt >> total;

	if(cnt*26 < total || total<cnt || (!cnt && !total))
		cout << "impossible" << endl;
	else
	{
		int dv = total/cnt;
		string ans;

		//if adding 'z' is greater than total
		if(dv*(cnt-1)+26>=total)
		{
			for(int i=0; i<cnt-1; i++)
				ans += (char)('a'+dv-1);

			ans += (char)('a'+total-(cnt-1)*dv-1);
			cout << ans << endl;
		}
		else
		{
			for(int i=0; i<cnt-2; i++)
				ans += (char)('a'+dv);

			int add = (total-(cnt-2)*(dv+1))-2;


			//corner cases
			if(!(add&1))
			{
				ans = ans+(char)('a'+add/2)+(char)('a'+add/2);
			}
			else
			{
				ans = ans+(char)('a'+add/2)+(char)('a'+add/2+1);
			}

			cout << ans << endl;

		}


	}


	return 0;
}
