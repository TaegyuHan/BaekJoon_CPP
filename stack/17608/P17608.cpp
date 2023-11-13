//
// Created by gksxo on 2023-11-13.
//

#include <iostream>
#define MAX_SIZE 100000

/*
 * 풀이
 * 1. 새로운 막대기가 들어옴
 *      1.1 자신보다 작은 막대기가 있는지 확인
 *          > 있으면 자신보다 큰 것이 나올때 까지 빼기
 *          > 없으면 넣기
 * */

class Stack
{
private:
    int list[MAX_SIZE]{};
    int index;

public:
    explicit Stack()
    {
        this->index = -1;
    }

    void add(int height)
    {
        this->list[++this->index] = height;
    }

    int pop()
    {
        return list[this->index--];
    }

    void answer()
    {
        printf("%d", this->index + 1);
    }

    void autoAdd(int height)
    {
        for (int i = this->index; -1 <= i; i--)
        {
            if (this->index == -1)
            {
                this->add(height);
                return;
            }

            if (height < this->list[i])
            {
                this->add(height);
                break;
            }
            this->pop();
        }
    }
};

class P17608 {
public:
    static void run()
    {
        int N;
        std::cin >> N;

        int tmp;
        Stack stack = *new Stack();
        for(int i = 0; i < N; i++)
        {
            std::cin >> tmp;
            stack.autoAdd(tmp);
        }
        stack.answer();
    }
};