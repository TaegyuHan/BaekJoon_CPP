//
// Created by gksxo on 2023-11-20.
//

#include <iostream>
using namespace std;

class Sort {
public:
    static void run(int *arr, int size) {
        int i, j, tmp, min_idx;

        for (i = 0; i < size - 1; i++) {
            // 최소 요소의 인덱스 찾기
            min_idx = i;
            for (j = i + 1; j < size; j++) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }
            // swap
            tmp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = tmp;
        }
    }
};

class P2587 {
public:
    static void run() {
        int N = 5;
        int sum = 0;
        int numbers[N];

        for (int i = 0; i < N; ++i) {
            std::cin >> numbers[i];
            sum += numbers[i];
        }
        Sort::run(numbers, N);

        printf("%d\n", sum / N);
        printf("%d", numbers[2]);
    }
};