//
// Created by gksxo on 2023-11-21.
//

#include <iostream>

using namespace std;

class Sort {
public:
    static void selectionSort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            int maxIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[maxIndex] < arr[j]) {
                    maxIndex = j;
                }
            }
            if (maxIndex != i) {
                swap(arr[i], arr[maxIndex]);
            }
        }
    }
};

class P25305 {
public:
    static void run() {
        int studentsCount, prizeCount;
        cin >> studentsCount >> prizeCount;

        int studentPoints[studentsCount];

        for (int i = 0; i < studentsCount; ++i) {
            cin >> studentPoints[i];
        }

        Sort::selectionSort(studentPoints, studentsCount);
        cout << studentPoints[prizeCount - 1];
    }
};