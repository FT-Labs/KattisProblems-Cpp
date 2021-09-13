#include <iostream>
#include <math.h>
#include <map>
#include <algorithm>
#define HYPOT3D(x, y, z) sqrt(pow(x,2) + pow(y,2) + pow(z,2))
#define eps 1e-6
using namespace std;

const double R = 6378;
const double PI = acos(-1);

double convertRadian(double n)
{
	return n*PI/180.0;
}

int main()
{
	int n;
	double w, theta;
	double x[1003], y[1003], z[1003];
	double W[1003], THETA[1003];


	while(cin >> n)
	{
		for(int i=0; i<n; i++)
		{
			cin >> W[i] >> THETA[i];
			w = convertRadian(W[i]), theta = convertRadian(THETA[i]);
			x[i] = R * cos(w) * sin(theta);
			y[i] = R * cos(w) * cos(theta);
			z[i] = R * sin(w);
		}

		double mx, mn = 1e20, rx = W[0], ry = THETA[0];

		for(int i=0; i<n; i++)
		{
			mx = 0;
			for(int j=0; j<n; j++)
			{
				if(i == j)
					continue;
				double ab = HYPOT3D(x[i] - x[j], y[i] - y[j], z[i] - z[j]);
				double oa = R, ob = R;
				theta = acos((oa*oa + ob*ob - ab*ab)/(2*oa*ob));
				mx = max(mx, R*theta);
				if(mx > mn+eps)
					break;
			}

			if(mn >= mx - eps)
			{
				mn = mx;
				rx = W[i];
				ry = THETA[i];
			}
		}

		cout.precision(2);

		cout << fixed << rx << ' ' << ry << endl;
	}

	return 0;

}
