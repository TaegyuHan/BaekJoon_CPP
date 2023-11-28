//
// Created by gksxo on 2023-11-28.
//

#include <iostream>

class P30030 {

public:
    static void run() {
        int B;
        std::cin >> B;

        // 부가가치세를 제외한 가격 A 계산
        int A = B * 10 / 11;

        std::cout << A << std::endl;
    }
};
