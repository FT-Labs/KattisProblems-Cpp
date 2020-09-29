/*
Author: Arda
Company: PhysTech
Date: 9/29/20
*/
#include  <iostream>

int main() {

    int n;
    std::cin >> n;
    for(int i=0;i<n;++i)
    {
        double m = 0.0;
        int q;
        std::cin >> q;
        for(int j=0;j<q;++j)
            m = (m+0.5)*2;
        std::cout << (int)m << std::endl;
    }





    return 0;
}