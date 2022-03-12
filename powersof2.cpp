#include <bits/stdc++.h>
#include <math.h>
using namespace std;


//Really really bad solution but passes
int numberOf2sinRange(int n, unsigned long start)
{
    // Initialize result
    int count = 0 ;

    // Count 2's in every number
    // from 2 to n
    for (int i = start; i <= n; i++)
	{
		auto tmp = to_string(i).find(to_string(start));

		if(tmp != string::npos)
			count++;
	}

    return count;
}

int main()
{
	unsigned long pw;
	int n, tmp;

	cin >> n >> tmp;

	pw = pow(2, tmp);


	cout << numberOf2sinRange(n, pw) << endl;



    return 0;
}
