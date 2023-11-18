//
// Created by gksxo on 2023-11-18.
//

#include <string>
#include <iostream>

using namespace std;

class P11816 {
public:
    static void run() {
        std::string X;
        std::cin >> X;

        int base = 10;
        if (X[0] == '0') {
            if (X.size() > 1 && (X[1] == 'x' || X[1] == 'X')) {
                base = 16; // 16진수
                X = X.substr(2); // '0x' 제거
            } else {
                base = 8; // 8진수
                X = X.substr(1); // 맨 앞의 '0' 제거
            }
        }

        int result = std::stoi(X, nullptr, base);
        std::cout << result << std::endl;
    }
};
