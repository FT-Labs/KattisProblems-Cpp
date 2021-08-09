#include <iostream>
using namespace std;


int rec(int l, int r)
{
	if(l == 1 && r == 1)
		return 1;

	if(l > r)
		return 2*rec(l-r, r)+1;
	else
		return 2*rec(l, r-l);
}



int main()
{
	int t; cin >> t;

	while(t--)
	{
		int num; cin >> num;
		string s; cin >> s;

		int l,r;

		string tmp = "";

		for(auto ch : s)
		{
			if(ch == '/')
			{
				l = stoi(tmp);
				tmp.clear();
			}
			else
				tmp += ch;
		}
		r = stoi(tmp);

		cout << num << ' ' << rec(l, r) << endl;
	}

	return 0;
}
