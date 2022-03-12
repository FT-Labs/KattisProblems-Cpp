#include <iostream>
using namespace std;


int main()
{
	int w, h; cin >> w >> h;

	char grid[w][h];

	for (int i=0; i<w; i++)
		for (int j=0; j<h; j++)
			cin >> grid[i][j];

	int cnt = 0;
	int i = 0, j = 0;
	bool flag = true;

	while (cnt < w*h)
	{
		if (grid[i][j] == 'N')
		{
			i--;
			cnt++;

			if (i < 0)
			{
				cout << "Out" << endl;
				return 0;
			}
		}
		else if (grid[i][j] == 'S')
		{
			i++;
			cnt++;

			if (i >= w)
			{
				cout << "Out" << endl;
				return 0;
			}
		}
		else if (grid[i][j] == 'W')
		{
			j--;
			cnt++;


			if (j < 0)
			{
				cout << "Out" << endl;
				return 0;
			}
		}
		else if (grid[i][j] == 'E')
		{
			j++;
			cnt++;

			if (j >= h)
			{
				cout << "Out" << endl;
				return 0;
			}
		}
		else
		{
			break;
		}
	}


	cout << (cnt < w*h ? to_string(cnt) : "Lost") << endl;



	return 0;
}
