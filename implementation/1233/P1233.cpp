//
// Created by gksxo on 2023-11-27.
//

#include "iostream"

#define ARRAY_LIST (20 + 20 + 40)

using namespace std;

class P1233 {
public:
    static void run() {
        int S1, S2, S3;
        int result[ARRAY_LIST] = {};
        cin >> S1 >> S2 >> S3;

        for (int i = 1; i <= S1; ++i) {
            for (int j = 1; j <= S2; ++j) {
                for (int k = 1; k <= S3; ++k) {
                    result[i + j + k] += 1;
                }
            }
        }

        int forMaxLoop = (S1 + S2 + S3);
        int maxSize = 0, answer = 0;
        for (int i = 3; i < forMaxLoop; ++i) {
            if (maxSize < result[i]) {
                maxSize = result[i];
                answer = i;
            }
        }
        cout << answer << endl;
    }
};