#include <iostream>
using namespace std;

int main()
{
	int n,p,s;
	cin >> n >> p >> s;

	for(int i=0;i<s;i++)
	{
		bool flag = false;
		int tmp; cin >> tmp;

		while(tmp--)
		{
			int x; cin >> x;
			if (x == p)
				flag = true;
		}

		if(flag)
			cout << "KEEP" << endl;
		else
			cout << "REMOVE" << endl;
	}

	return 0;
}
