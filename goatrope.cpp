#include <iostream>
#include <cmath>
#define sqr(x) ((x) * (x))
#define HYPOT(x, y) sqrt(sqr(x) + sqr(y))
using namespace std;


double distanceBoxParticle2D(double x, double y, double x_min, double y_min,
        double x_max, double y_max)
{
    if (x < x_min) {
        if (y <  y_min) return HYPOT(x_min-x, y_min-y);
        if (y <= y_max) return x_min - x;
                        return HYPOT(x_min-x, y_max-y);
    } else if (x <= x_max) {
        if (y <  y_min) return y_min - y;
        if (y <= y_max) return 0;
                        return y - y_max;
    } else {
        if (y <  y_min) return HYPOT(x_max-x, y_min-y);
        if (y <= y_max) return x - x_max;
                        return HYPOT(x_max-x, y_max-y);
    }
}


int main()
{
	int x, y, x1, y1, x2, y2;	cin >> x >> y >> x1 >> y1 >> x2 >> y2;

	int xMin = min(x1, x2);
	int xMax = max(x1, x2);
	int yMin = min(y1, y2);
	int yMax = max(y1, y2);

	double mn = distanceBoxParticle2D(x, y, xMin, yMin, xMax, yMax);


	cout.precision(4);

	cout << mn << endl;




	return 0;
}
