#include <iostream>
#include <sstream>
using namespace std;


int main()
{
	string s;
	int idx = 1;

	while (cin >> s && s != "END")
	{
		s = s.substr(1);
		stringstream ss(s);
		string tmp;
		int cur = -1;
		bool flag = true;

		while (getline(ss, tmp, '*'))
		{
			if (cur == -1)
				cur = tmp.size();
			else
			{
				if (cur != tmp.size())
				{
					flag = false;
					break;
				}
			}
		}

		cout << idx << " " << (flag ? "EVEN" : "NOT EVEN") << endl;
		++idx;
	}

	return 0;
}
