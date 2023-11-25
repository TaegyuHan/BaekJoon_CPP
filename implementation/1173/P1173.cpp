//
// Created by gksxo on 2023-11-25.
//

#include <iostream>

using namespace std;

class P1173 {
public:
    static void run() {
        int count, pulse, minPulse, maxPulse, exercise, rest;
        int time = 0, breakCount = 0;
        cin >> count >> minPulse >> maxPulse >> exercise >> rest;
        pulse = minPulse;

        while (breakCount < count) {
            if ((breakCount == 0) && maxPulse < (pulse + exercise)) {
                cout << -1 << endl;
                break;
            }

            ++time;
            if ((pulse + exercise) <= maxPulse) {
                pulse += exercise;
                ++breakCount;
                continue;
            }
            pulse -= rest;
            if (pulse < minPulse) {
                pulse = minPulse;
            }
        }

        if (breakCount != 0) {
            cout << time << endl;
        }
    }
};