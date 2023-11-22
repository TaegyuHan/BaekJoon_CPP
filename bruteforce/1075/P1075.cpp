//
// Created by gksxo on 2023-11-22.
//

#include <iostream>
#include <iomanip>

using namespace std;

class P1075 {
public:
    static void run() {
        long N;
        int F;
        cin >> N >> F;

        N -= N % 100;

        while (N % F != 0) {
            N++;
        }

        cout << setw(2) << setfill('0') << N % 100 << endl;
    }
};