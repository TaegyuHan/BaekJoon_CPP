//
// Created by gksxo on 2023-12-03.
//

#include <iostream>
#include <string>

using namespace std;

class P1371 {

public:
    static void run() {
        int alpha[26];
        string str[50];
        int max=-1;


        for (int i = 0; i < 50; i++) {
            getline(cin, str[i]);

            for (int j = 0; j < str[i].size(); j++) {
                alpha[str[i][j]-97]++;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (max <= alpha[i]) {
                max = alpha[i];
            }
        }
        for (int i = 0; i < 26; i++) {
            if (alpha[i] ==max) {
                cout << (char)(i + 97);
            }
        }

    }
};
