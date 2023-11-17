//
// Created by gksxo on 2023-11-17.
//

#include <string>
#include <iostream>

class P11655 {
private:
    static std::string rot13(const std::string& input) {
        std::string output;
        for (char c : input) {
            if (c >= 'a' && c <= 'z') {
                output += (c - 'a' + 13) % 26 + 'a';
            } else if (c >= 'A' && c <= 'Z') {
                output += (c - 'A' + 13) % 26 + 'A';
            } else {
                output += c;
            }
        }
        return output;
    }

public:
    static void run() {
        std::string input;
        std::getline(std::cin, input);
        std::string encrypted = rot13(input);
        std::cout << encrypted << std::endl;
    }
};