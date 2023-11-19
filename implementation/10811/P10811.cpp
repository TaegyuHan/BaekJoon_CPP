//
// Created by gksxo on 2023-11-19.
//

#include <iostream>
#include <vector>
#include <algorithm>

class P10811 {

public:
    static void run() {
        int N, M;
        std::cin >> N >> M;

        std::vector<int> baskets(N);
        for (int i = 0; i < N; ++i) {
            baskets[i] = i + 1;
        }

        for (int i = 0; i < M; ++i) {
            int start, end;
            std::cin >> start >> end;
            std::reverse(baskets.begin() + start - 1, baskets.begin() + end);
        }

        for (int i = 0; i < N; ++i) {
            std::cout << baskets[i] << " ";
        }
    }
};