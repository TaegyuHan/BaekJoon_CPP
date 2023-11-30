//
// Created by gksxo on 2023-11-30.
//

#include <iostream>

#define MAX_SIZE 250

using namespace std;

class P2386 {
public:
    static void run() {
        char alpha, tmp;

        while (scanf(" %c", &alpha)) {
            if (alpha == '#') break;

            int count = 0;
            while (scanf("%c", &tmp) && tmp != '\n') {
                if (tolower(tmp) == tolower(alpha)) {
                    ++count;
                }
            }
            printf("%c %d\n", alpha, count);
        }
    }
};