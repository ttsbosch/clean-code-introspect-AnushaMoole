#include "StringCalculator.h"
#include "sstream"
#include "string"

int StringCalculator::add(string input){
        if((input == "") || (input == "0"))
        return 0;
        else
                addNum(input);
}

int StringCalculator::addNum(string input){     
    std::stringstream ss(input);
    std::string token;
    int sum = 0;

    while (std::getline(ss, token, ',;\n*\t/')) {
        sum += std::stoi(token);
    }
    return sum;
}
