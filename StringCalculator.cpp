#include "StringCalculator.h"
#include "iostream"
#include "sstream"
#include "string"
#include "vector"

int StringCalculator::add(string input){
        if((input == "") || (input == "0"))
        return 0;
        std::vector<int> nums = getNum(input);
        int sum = 0;
        
        for (int num : nums) {
         if(num > 0)
            sum += num;
    }
    return sum;
}

std::vector StringCalculator::getNum(string input){
    std::vector<int> nums;
    std::stringstream ss(input);
    std::string token;
        
    while (std::getline(ss, token, ',')) {
        nums.push_back(std::stoi(token));
    }
    return nums;
}
