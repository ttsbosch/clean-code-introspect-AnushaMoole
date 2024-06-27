#include "StringCalculator.h"
#include "string"

int StringCalculator::add(string input){
        if((input == "") || (input == "0"))
        return 0;
        else
                addNum(input);
}

int StringCalculator::addNum(string input){
    std::string delimiters = ",;\n*\t/";
    std::string token;
    size_t pos = 0;
    int sum = 0;
    int num = 0;
        
    while ((pos = input.find_first_of(delimiters, pos)) != std::string::npos) {
        token = input.substr(0, pos);
        num = std::stoi(token);
        sum += num;
        input.erase(0, pos + 1); // Remove the delimiter and the extracted token
        pos = 0; // Reset the position for the next search
    }
}
