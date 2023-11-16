//
// Created by gksxo on 2023-11-16.
//


#include <cstdio>

#define TEXT_MAX_SIZE 1000

class P9093 {
public:
    static void run() {
        int number;
        char ch;
        char string[TEXT_MAX_SIZE];
        int index = 0;

        scanf("%d", &number);
        scanf("%c", &ch);

        for (int i = 0; i < number; ++i) {
            while (scanf("%c", &ch)) {
                if (ch == '\n') {
                    string[index] = '\0';
                    for (int j = --index; -1 < j; --j) {
                        printf("%c", string[j]);
                    }
                    printf("%c", '\n');
                    index = 0;
                    break;
                }
                if (ch == ' ') {
                    string[index] = '\0';
                    for (int j = --index; -1 < j; --j) {
                        printf("%c", string[j]);
                    }
                    printf("%c", ' ');
                    index = 0;
                    continue;
                }
                string[index++] = ch;
            }
        }
    }
};