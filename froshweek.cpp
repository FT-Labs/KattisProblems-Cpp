#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;


int main()
{
	long long t; cin >> t;

	indexed_set s;

	long long total = 0;
	for(long long i=0; i<t; i++)
	{
		long long n; cin >> n;
		total += (i - s.order_of_key(n));
		s.insert(n);
	}

	cout << total << endl;


	return 0;
}
