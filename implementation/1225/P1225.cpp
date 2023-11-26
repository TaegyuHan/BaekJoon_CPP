//
// Created by gksxo on 2023-11-26.
//

#include <string>
#include <iostream>

using namespace std;

class P1225 {

public:
    static int run() {
        string numbers1, numbers2;
        cin >> numbers1 >> numbers2;

        int check1 = numbers1.compare("0");
        int check2 = numbers2.compare("0");

        if (check1 == 0
            || check2 == 0) {
            cout << 0;
            return 0;
        }

        long long answer = 0;
        for (int i = 0; i < numbers1.size(); ++i) {
            for (int j = 0; j < numbers2.size(); ++j) {
                answer += charToInt(numbers1[i])
                        * charToInt(numbers2[j]);
            }
        }
        cout << answer;
        return 0;
    }

    static int charToInt(char data) {
        return data - 48;
    }
};