#include <iostream>
using namespace std;

int main()
{
	string s;

	long double speed = 0.0;
	long double traveled = 0.0;
	double h = 0.0, m = 0.0, se = 0.0;
	while(getline(cin, s))
	{
		double hh = stod(s.substr(0, 2));
		double mm = stod(s.substr(3,2));
		double ss = stod(s.substr(6));
		traveled += (hh-h)*speed + (mm-m)*speed/60 + (ss-se)*speed/3600;
		if(s.find(" ") != string::npos)
			speed = stol(s.substr(s.find(" ")));
		else
		{
			cout.precision(2);
			cout << s << ' ' << fixed << traveled << " km" << endl;
		}

		h = hh, m = mm, se = ss;
	}


	return 0;
}
