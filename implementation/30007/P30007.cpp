//
// Created by gksxo on 2023-11-23.
//

#include <iostream>
using namespace std;

class P30007 {
public:
    static void run() {

        int N;
        cin >> N;

        for (int i = 0; i < N; i++) {
            int A, B, X;
            cin >> A >> B >> X;

            int W = A * (X - 1) + B;
            cout << W << endl;
        }
    }
};