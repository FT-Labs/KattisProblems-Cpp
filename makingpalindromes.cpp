#include <bits/stdc++.h>
#include <iostream>

using namespace std;

const int N=202;
const int mod=1e9+7;

void sum(int &x,int y)
{
	x += y;
	if(x>=mod)
		x -=mod;
}


int main()
{
	ios::sync_with_stdio(false);
	int memo[2][N][N];
	char ch[N];
	int n;
	string s;
	cin >> n >> s;

	//Memset for fast initilization
	memset(memo,0,sizeof(memo));
	int x=0,y=1;

	//Set memo n to 1
	memo[x][0][n] = 1;

	for(int p=0;p<n;++p)
	{
		swap(x,y);
		memset(memo[x],0,sizeof(memo[x]));
		for(int i=0;i<n;++i)
		{
			sum(memo[x][i][i],1LL*memo[y][i][i] * 26 % mod);

			for(int j=i;j<n;++j)
			{
				int curr = memo[y][i][j+1];
				if(curr==0)
					continue;
				for(char c='A';c<='Z';++c)
				{
					int ii=i;int jj=j+1;
					if(s[j]==c)
						--jj;
					if(s[i]==c && ii<jj)
						++ii;
					sum(memo[x][ii][jj],curr);

				}
			}


		}

	}
	int tot = 0;

	for(int i=0;i<=n;++i)
		sum(tot,memo[x][i][i]);

	tot %= mod;

	if(tot<0)
		tot += mod;

	cout << tot << endl;
	return 0;
}






