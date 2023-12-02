//
// Created by gksxo on 2023-12-02.
//

#include <iostream>

using namespace std;

class P1362 {
public:
    static void run() {
        float originalWeight, currentWeight, weightChange;
        char event;
        int isDead;

        for(int patientNumber = 1; ; patientNumber++) {
            isDead = 0;
            scanf("%f %f", &originalWeight, &currentWeight);

            // 종료 조건 검사
            if (originalWeight == 0 && currentWeight == 0) {
                return;
            }

            while(1) {
                scanf(" %c %f", &event, &weightChange);

                // 이벤트 처리 완료
                if(event == '#' && weightChange == 0) {
                    printf("%d ", patientNumber);
                    if (isDead) {
                        printf("RIP\n");
                    }
                    else if (currentWeight > 0.5 * originalWeight && currentWeight < 2 * originalWeight) {
                        printf(":-)\n");
                    }
                    else {
                        printf(":-(\n");
                    }
                    break;
                }
                else if(event == 'E') {
                    if(currentWeight - weightChange <= 0) {
                        isDead = 1;
                    }
                    currentWeight -= weightChange;
                }
                else if(event == 'F') {
                    currentWeight += weightChange;
                }
            }
        }
    }
};
