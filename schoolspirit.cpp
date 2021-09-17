#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;




int main()
{
	int t; cin >> t;

	vector<int> students(t, 0);

	for(auto& it : students)
		cin >> it;

	double ans = 0.0;
	double frst = 0.0;

	int j = -1;

	while(j<t)
	{
		double res = 0.0;
		bool flag = false;

		for(int i=0; i<students.size(); i++)
		{
			if(i == j)
				flag = true;
			else if(flag)
				res += students[i]*pow(4.0/5, i-1);
			else
				res += students[i]*pow(4.0/5, i);

		}

		res /= 5;

		if(j == -1)
		{
			frst = res;
			res = 0.0;
		}


		ans += res;

		j++;
	}

	cout.precision(6);

	cout << fixed << frst << endl << ans/t << endl;






	return 0;
}
