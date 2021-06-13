#include <iostream>
#include <unordered_map>
#include <string>
#include <iomanip>
#include <time.h>


//This question is unsolved. Cant get past time limit.

typedef std::tuple<int,int,int> nkey;

class CustomHash
{
public:
// Implement a hash function
    std::size_t operator()(const nkey& k) const
    {
        // This could be a bad hash function anyway
        std::size_t h1 = std::hash<int>{}(std::get<0>(k));
        std::size_t h2 = std::hash<int>{}(std::get<1>(k));
        std::size_t h3 = std::hash<int>{}(std::get<2>(k));
        return h1 ^ h2 ^ h3;
    }
};

std::unordered_map<nkey ,float,CustomHash> probs;


double socks(int k,int m,int n)
{
    int total = k+m+n;

    if (total<2)
    {
        return 0;
    }


    nkey key(k,m,n);


    if(probs.find(key) != probs.end())
    {
        return probs[key];
    }

    double prob = 0.0;

    if (n>=2)
    {
        prob += n*(n-1);
    }

    if(m>=2)
    {
        prob += m;
    }
    if(m>=4)
    {
        prob += m*(m-2)*socks(k+2,m-4,n);
    }

    if (m>=2 && n>=1)
    {
        prob += socks(k+1,m-2,n-1)*m*n*2;
    }

    if(k>=2)
    {
        prob += socks(k-2,m,n) * k * (k-1);
    }
    if(k>=1 && m>=1)
    {
        prob += socks(k,m-2,n)*k*m*2;
    }
    if(k>=1 && n>=1)
    {
        prob += socks(k-1,m,n-1)*k*n*2;
    }

    prob /= total*(total-1.0);
    probs[key] = prob;

    return prob;

}

int main(){
    uint_fast64_t m,n;

    std::cin >> m >> n;

	clock_t start = clock();

    if(n>=2*m+2)
    {
        std::cout<<"1.0";
    }
    else
    {
        std::cout << std::setprecision(15);
        std::cout << (1.0-socks(0,m*2,n));
    }

	std::cout.precision(4);
	std::cout << std::endl << (double) (clock()-start)/CLOCKS_PER_SEC << std::endl;


	return 0;
}
