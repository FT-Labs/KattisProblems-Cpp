#include <iostream>


int main()  {
    int k,m,n;
    std::cin >> k >> m >> n;

    std::string ans = k%(m+n) < m ? "Barb\n" : "Alex\n";
    std::cout << ans;
}
