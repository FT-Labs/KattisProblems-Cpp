#include <iostream>
using namespace std;

int main()
{
	int g1, g2, e1, e2;

	cin >> g1 >> g2 >> e1 >> e2;

	int g = (g1+g2+e1+e2);
	cin >> g1 >> g2 >> e1 >> e2;
	int e = (e1+e2+g1+g2);


	if(g > e)
		cout << "Gunnar" << endl;
	else if(g < e)
		cout << "Emma" << endl;
	else
		cout << "Tie" << endl;

	return 0;
}
