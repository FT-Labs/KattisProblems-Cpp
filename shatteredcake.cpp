#include <iostream>
using namespace std;

int main()
{
	int w; cin >> w;
	int area = 0;

	int t; cin >> t;

	while(t--)
	{
		int width,len;
		cin >> width >> len;
		area += len*width;
	}

	cout << area/w << endl;

	return 0;
}
