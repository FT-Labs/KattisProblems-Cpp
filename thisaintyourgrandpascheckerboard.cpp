#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;
	char arr[n][n];

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> arr[i][j];


	bool flag = false;
	int r, c;

	for(int i=0; i<n; i++)
	{
		int w=0, b=0, wj=0, bj=0;
		string tmp;
		string tmpj;
		for(int j=0; j<n; j++)
		{
			tmp += arr[i][j];
			tmpj += arr[j][i];

			if(arr[i][j] == 'W')
				w++;
			else
				b++;

			if(arr[j][i] == 'W')
				wj++;
			else
				bj++;
		}

		if(tmp.find("BBB") != string::npos || tmp.find("WWW") != string::npos || w != b || wj != bj || tmpj.find("BBB") != string::npos || tmpj.find("WWW") != string::npos)
		{
			flag = true;
			cout << 0 << endl;
			break;
		}

		if(!i)
		{
			r = w;
			c = w;
		}
		else
		{
			if(r != w || c != w)
			{
				flag = true;
				cout << 0 << endl;
				break;
			}
		}
	}




	if(!flag)
		cout << 1 << endl;


	return 0;
}
