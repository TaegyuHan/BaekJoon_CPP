//
// Created by gksxo on 2023-12-01.
//

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class P30087 {
public:
    static void run() {
        unordered_map<string, string> seminarToClass = {
                {"Algorithm", "204"},
                {"DataAnalysis", "207"},
                {"ArtificialIntelligence", "302"},
                {"CyberSecurity", "B101"},
                {"Network", "303"},
                {"Startup", "501"},
                {"TestStrategy", "105"}
        };

        int N;
        cin >> N;
        cin.ignore(); // Consume the newline character after reading N.

        for (int i = 0; i < N; ++i) {
            string seminar;
            getline(cin, seminar);

            // Look up the classroom for the given seminar.
            if (seminarToClass.find(seminar) != seminarToClass.end()) {
                cout << seminarToClass[seminar] << endl;
            }
        }
    }
};
