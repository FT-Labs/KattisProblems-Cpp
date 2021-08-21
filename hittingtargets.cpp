#include <iostream>
#include <vector>
#include <cmath>
#define sqr(x2, x1) (((x2) - (x1)) * ((x2) - (x1)))
using namespace std;


class Rect
{
public:
	int xMin, xMax, yMin, yMax;

	Rect(int x1, int y1, int x2, int y2)
	{
		xMin = min(x1, x2);
		xMax = max(x1, x2);
		yMin = min(y1, y2);
		yMax = max(y1, y2);
	}

	Rect()
	{}


	virtual int isIn(int x1, int y1)
	{
		if(x1 >= xMin && x1 <= xMax && y1 >= yMin && y1 <= yMax)
			return 1;
		return 0;
	}
};


class Circ: public Rect
{
public:
	int x1, y1, rad;

	Circ(int x1, int y1, int rad):x1(x1),y1(y1),rad(rad)
	{}

	int isIn(int x2, int y2)
	{
		float hypot = sqrt( sqr(x1, x2) + sqr(y1, y2) );


		if(hypot <= rad)
			return 1;
		else
			return 0;
	}

};



int main()
{
	int n; cin >> n;
	vector<Rect*> vec;

	while(n--)
	{
		string s; cin >> s;

		if(s == "rectangle")
		{
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			vec.push_back(new Rect(x1, y1, x2, y2));
		}
		else
		{
			int x1, y1, rad;
			cin >> x1 >> y1 >> rad;
			vec.push_back(new Circ(x1, y1, rad));
		}
	}

	cin >> n;
	int x1, y1;

	while(n--)
	{
		cin >> x1 >> y1;
		int tot = 0;
		for(auto& it : vec)
			tot += it->isIn(x1, y1);
		cout << tot << endl;
	}





	return 0;
}
