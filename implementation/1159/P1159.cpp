//
// Created by gksxo on 2023-11-24.
//

#include <iostream>

using namespace std;

class P1159 {
public:
    static void run() {
        int inputCount;
        cin >> inputCount;
        int alphas[26] = {};

        string name;
        for (int i = 0; i < inputCount; ++i) {
            cin >> name;
            char alpha = name[0];
            alphas[alpha % 'a'] += 1;
        }

        bool printCheck = true;
        for (int i = 0; i < 26; ++i) {
            if (alphas[i] < 5) { continue; }
            printf("%c", i + 'a');
            printCheck = false;
        }

        if (printCheck) {
            printf("%s", "PREDAJA");
        }
    }
};