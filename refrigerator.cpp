#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int pa, ka, pb, kb, n; cin >> pa >> ka >> pb >> kb >> n;

	double paunit = pa/(double)ka;
	double pbunit = pb/(double)kb;

	bool flag = false;

	if (paunit > pbunit)
	{
		swap(pa, pb);
		swap(ka, kb);
		flag = true;
	}

	int curA = ceil((double)n/ka);
	int finA = curA, finB = 0;
	int curCost = curA * pa;
	int cost = curCost;

	int curFridge = curA * ka;

	while (curFridge > 0)
	{
		curFridge -= ka;
		cost -= pa;
		curA--;

		int m = ceil((double)(n-curFridge)/kb);

		if (cost + m * pb < curCost)
		{
			curCost = cost + m * pb;
			finA = curA, finB = m;
		}
	}

	if (flag)
		swap(finA, finB);


	cout << finA << ' ' << finB << ' ' << curCost << endl;



	return 0;
}
