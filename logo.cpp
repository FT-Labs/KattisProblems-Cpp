#include <iostream>
#include <math.h>
using namespace std;

#define PI M_PI


int main()
{
	int t; cin >> t;

	while(t--)
	{
		int n; cin >> n;

		double x = 0.0, y = 0.0;
		int curAngle = 0;

		while(n--)
		{
			string s; cin >> s;
			int d; cin >> d;

			if(s == "fd")
			{
				x += cos(curAngle*(PI/180.0))*d;
				y += sin(curAngle*(PI/180.0))*d;
			}
			else if(s == "bk")
			{
				x -= cos(curAngle*(PI/180.0))*d;
				y -= sin(curAngle*(PI/180.0))*d;
			}
			else if(s == "lt")
				curAngle += d;
			else
				curAngle -= d;

			curAngle %= 360;

		}

		cout << (int)round(sqrt(x*x + y*y)) << endl;
	}


	return 0;
}
