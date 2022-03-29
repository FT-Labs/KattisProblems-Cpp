#include <iostream>
using namespace std;

int main()
{
	int n, d; cin >> n >> d;

	int cnt = 0;

	int curYear;

	for (int i = 0; cin >> curYear, i < n && curYear > d; i++) cnt++;

	if (cnt != n)
		cout << "It hadn't snowed this early in " << cnt << " years!" << endl;
	else
		cout << "It had never snowed this early!" << endl;

	return 0;
}
