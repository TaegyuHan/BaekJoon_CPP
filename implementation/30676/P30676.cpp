//
// Created by gksxo on 2023-11-29.
//

#include <iostream>

using namespace std;

class P30676 {
public:
    static void run() {
        int wavelength;
        cin >> wavelength;

        if (wavelength >= 620 && wavelength <= 780) {
            cout << "Red" << endl;
        } else if (wavelength >= 590 && wavelength < 620) {
            cout << "Orange" << endl;
        } else if (wavelength >= 570 && wavelength < 590) {
            cout << "Yellow" << endl;
        } else if (wavelength >= 495 && wavelength < 570) {
            cout << "Green" << endl;
        } else if (wavelength >= 450 && wavelength < 495) {
            cout << "Blue" << endl;
        } else if (wavelength >= 425 && wavelength < 450) {
            cout << "Indigo" << endl;
        } else if (wavelength >= 380 && wavelength < 425) {
            cout << "Violet" << endl;
        }
    }
};