#include "StringCalculator.h"
#include "iostream"
#include "sstream"
#include "string"
#include "vector"

int StringCalculator::add(string input){
        if((input == "") || (input == "0"))
        return 0;
        return getNum(input);
}

int StringCalculator::getNum(string input){
    std::vector<int> nums;
    std::stringstream ss(input);
    std::string token;
    int sum = 0;
        
    while (std::getline(ss, token, ',')) {
        nums.push_back(std::stoi(token));
    }
    for (int num : nums) {
        sum += num;
    }
    return sum;
}
