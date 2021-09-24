#include <algorithm>
#include <iostream>
using namespace std;


int main()
{
	string s; cin >> s;

	int length[s.size()];


	int mx = 1;
	for(int k=0; k<s.size(); k++)
	{
		length[k] = 1;
		for(int i=0; i<k; i++)
		{
			if(s[i] < s[k])
			{
				length[k] = max(length[k], length[i]+1);
				mx = max(mx, length[k]);
			}
		}
	}


	cout << 26-mx << endl;



	return 0;
}
