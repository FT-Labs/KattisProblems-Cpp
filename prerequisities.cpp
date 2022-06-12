#include <bits/stdc++.h>
#include <iostream>

int main ()
{
    int k, m;

    while (std::cin >> k >> m) {
        std::set<std::string> taken;
        for (int i = 0; i < k; i++) {
            std::string tmp;
            std::cin >> tmp;
            taken.insert(tmp);
        }
        bool flag = true;
        for (int i = 0; i < m; i++) {
            int tot, needed;
            std::cin >> tot >> needed;
            int cnt = 0;
            for (int j = 0; j < tot; j++) {
                std::string tmp;
                std::cin >> tmp;
                if (taken.count(tmp))
                    cnt++;
            }
            if (cnt < needed)
                flag = false;
        }

        std::cout << (flag ? "yes" : "no") << std::endl;
    }

    return 0;
}
