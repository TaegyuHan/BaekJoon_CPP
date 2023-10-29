//
// Created by gksxo on 2023-10-29.
//
#include <iostream>
#define N_MAX 100

class Basket
{
private:
    int m_array[N_MAX]{};
    int m_maxIndex;

public:
    explicit Basket(int size)
    {
        m_maxIndex = size + 1;
        for (int i = 1; i < m_maxIndex; i++)
        {
            m_array[i] = i;
        }
    };

    void change(int idx1, int idx2)
    {
        int tmp;
        tmp = m_array[idx2];
        m_array[idx2] = m_array[idx1];
        m_array[idx1] = tmp;
    };

    void answer()
    {
        for (int i = 1; i < m_maxIndex; i++)
        {
            printf("%d ", m_array[i]);
        }
    };
};

class P10813
{
public:
    static void run()
    {
        int size, m;
        std::cin >> size; std::cin >> m;

        Basket* basket;
        basket = new Basket(size);

        int idx1, idx2;
        for (int i=0; i < m; i++)
        {
            std::cin >> idx1; std::cin >> idx2;
            basket->change(idx1, idx2);
        }
        basket->answer();
        delete basket;
    }
};