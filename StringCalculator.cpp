#include "StringCalculator.h"
#include "sstream"
#include "string"

int StringCalculator::add(string input){
        if((input == "") || (input == "0"))
        return 0;
        else
        return addNum(input);
}

int StringCalculator::addNum(string input){     
    std::string delimiters = ",;\n*\t/";
    int sum = 0;
    std::string numberStr = 0;
    size_t startPos = 0;
    size_t endPos = 0;

    while (endPos != std::string::npos) {
        endPos = input.find_first_of(delimiters, startPos);
        numberStr = input.substr(startPos, endPos - startPos);
        sum += std::stoi(numberStr);
        startPos = endPos + 1;
    }
    return sum;
}
