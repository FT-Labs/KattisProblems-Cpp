#include <iostream>
#include <cmath>
using namespace std;

char** mat;

void rotate(char** mat, int n)
{
	for (int i=0; i<n; i++)
		for (int j=i; j<n; j++)
			swap(mat[i][j], mat[j][i]);
}


int main()
{
	int q; cin >> q;

	while (q--)
	{
		string s; cin >> s;
		int sz = ceil(sqrt(s.size()));

		mat = new char*[sz];

		for (int i=0; i<sz; i++)
			mat[i] = new char[sz];

		int k = 0;

		for (int i=0; i<sz; i++)
		{
			for (int j=0; j<sz; j++)
			{
				if (k < s.size())
					mat[i][j] = s[k];
				else
					mat[i][j] = '*';
				k++;
			}
		}

		rotate(mat, sz);

		string ans = "";

		for (int i=0; i<sz; i++)
		{
			for (int j=sz-1; j>=0; j--)
			{
				if (mat[i][j] != '*')
					ans += mat[i][j];
			}
		}

		cout << ans << endl;
	}




	return 0;
}
