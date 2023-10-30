//
// Created by gksxo on 2023-10-30.
//
#include <iostream>
#include <string>
#define MAX_SIZE 50

class Command
{
private:
    std::string m_str;
    bool check[MAX_SIZE]{};

public:
    explicit Command(std::string init_string)
    {
        m_str = std::move(init_string);
        for (size_t i = 0; i < m_str.size(); ++i)
        {
            check[i] = false;
        }
    }

    void show()
    {
        std::cout << m_str << std::endl;
    }

    void push(std::string other)
    {
        for (size_t i = 0; i < m_str.size(); ++i)
        {
            if (m_str[i] != other[i])
            {
                check[i] = true;
            }
        }
    }

    void answer()
    {
        for (size_t i = 0; i < m_str.size(); ++i)
        {
            if (check[i])
            {
                printf("?");
            }
            else
            {
                printf("%c", m_str[i]);
            }
        }
    }
};

class P1032
{
public:
    static void run()
    {
        int N;
        std::cin >> N;

        std::string input;
        std::cin >> input;

        Command* cmd;
        cmd = new Command(input);

        for (int i = 0; i < N - 1; i++)
        {
            std::cin >> input;
            cmd->push(input);
        }

        cmd->answer();
    }
};