#include <iostream>
#include <vector>
using namespace std;


int main ()
{
	while(!cin.eof())
	{
		vector<int> cur;
		int tot = 0;

		int tmp;
		while (cin.peek() != '\n' && cin >> tmp)
		{
			tot += tmp;
			cur.push_back(tmp);
		}
		cin.get();

		for (int i = 0; i < cur.size(); i++)
		{
			if ((tot-cur[i]) == cur[i])
			{
				cout << cur[i] << endl;
				break;
			}
		}
	}

	return 0;
}
