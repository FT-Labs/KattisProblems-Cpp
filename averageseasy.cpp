#include <iostream>
#include <vector>
#include <queue>
using namespace std;



int main()
{
	int t; cin >> t;


	while(t--)
	{
		int cs, e; cin >> cs >> e;
		priority_queue<int, vector<int>, greater<int>> pq;
		int tmp;

		long csTot = 0;
		long eTot = 0;


		for(int i=0; i<cs; i++)
		{
			cin >> tmp;
			pq.push(tmp);
			csTot += tmp;
		}
		for(int i=0; i<e; i++)
		{
			cin >> tmp;
			eTot += tmp;
		}

		int cnt = 0;

		double csAve = (double)csTot/cs;
		double eAve = (double)eTot/e;

		while(!pq.empty())
		{
			double cur = pq.top(); pq.pop();

			if((csTot-cur)/(cs-1.0) > csAve && (eTot+cur)/(e+1.0) > eAve)
				cnt++;
			else if((csTot-cur)/(cs-1.0) < csAve)
				break;
		}

		cout << cnt << endl;


	}


	return 0;
}
