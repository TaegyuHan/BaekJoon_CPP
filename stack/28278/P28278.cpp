//
// Created by gksxo on 2023-11-14.
//

#include <cstdio>
#define MAX_SIZE 1000001

enum {
    ADD = 1,
    POP = 2,
    SIZE = 3,
    EMPTY = 4,
    TOP = 5
};

class Stack {
private:
    int stack[MAX_SIZE]{};
    int index;

public:

    explicit Stack() { this->index = -1; }

    void add(int input_number) { this->stack[++this->index] = input_number; }

    [[nodiscard]] int size() const { return this->index + 1; }

    [[nodiscard]] int empty() const { return this->index == -1 ? 1 : 0; }

    int pop() {
        if (this->index == -1) { return -1; }
        return this->stack[this->index--];
    }

    int top() {
        if (this->index == -1) { return -1; }
        return this->stack[this->index];
    }
};

class P28278 {
public:
    static void run() {
        int N;
        scanf("%d", &N);
        Stack stack = *new Stack();

        int command, input_number;
        for (int i = 0; i < N; i++) {
            scanf("%d", &command);
            switch (command) {
                case ADD:
                    scanf("%d", &input_number);
                    stack.add(input_number);
                    break;
                case POP:
                    printf("%d\n", stack.pop());
                    break;
                case SIZE:
                    printf("%d\n", stack.size());
                    break;
                case EMPTY:
                    printf("%d\n", stack.empty());
                    break;
                case TOP:
                    printf("%d\n", stack.top());
                    break;
            }
        }
    }
};