#include <iostream>
using namespace std;


int main (int argc, char *argv[])
{
	int n; cin >> n;

	string me, him;
	cin >> me >> him;

	int same = 0;
	int diff = 0;

	for (int i = 0; i < me.size(); i++)
	{
		if (me[i] != him[i])
		{
			diff++;
		}
		else if (me[i] == him[i])
			same++;
	}
	same = same > n ? n : same;
	diff = diff > (me.size() - n) ? me.size() - n : diff;

	cout << diff + same << endl;

	return 0;
}
