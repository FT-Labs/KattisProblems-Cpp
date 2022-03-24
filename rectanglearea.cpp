#include <iostream>
using namespace std;

int main()
{
	float x1, y1, x2, y2;

	cin >> x1 >> y1 >> x2 >> y2;

	float ans = abs(x2 - x1) * abs(y2 - y1);

	cout.precision(3);

	cout << fixed << ans << endl;


	return 0;
}
