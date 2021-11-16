#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int q; cin >> q;

	while (q--)
	{
		priority_queue<int, vector<int>, greater<int>> cs;
		int ncs, ne; cin >> ncs >> ne;
		unsigned long csTot = 0, eTop = 0;

		int tmp;
		for (int i=0; i<ncs; i++)
		{
			cin >> tmp; cs.push(tmp);
			csTot += tmp;
		}

		int mn = 100001;

		for (int i=0; i<ne; i++)
		{
			cin >> tmp; mn = min(mn, tmp);
			eTop += tmp;
		}

		long double csAve = csTot / (long double) ncs;
		long double eAve = eTop / (long double) ne;


		int tot = 0;

		while (!cs.empty() && cs.top() < csAve)
		{
			if (cs.top() > mn && cs.top() > eAve)
				tot++;
			cs.pop();
		}

		cout << tot << endl;
	}





	return 0;
}
