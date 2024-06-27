#include "StringCalculator.h"
#include "iostream"
#include "sstream"
#include "string"
#include "vector"

int StringCalculator::add(string input){
        if((input == "") || (input == "0"))
        return 0;
        std::vector<int> nums = getNum(input);
        std::vector<int> vectors = removeNegative(nums);
        int sum = 0;
        
        for (int num : vectors) {
            sum += num;
    }
    return sum;
}

std::vector<int> StringCalculator::getNum(string input){
    std::vector<int> nums;
    std::stringstream ss(input);
    std::string token;
        
    while (std::getline(ss, token, ',')) {
              nums.push_back(std::stoi(token));
    }
    return nums;
}

std::vector<int> StringCalculator::removeNegative(std::vector<int> nums){
     std::vector<int> newArr;
     for (auto x : nums) {
        if (x >= 0) {
            newArr.push_back(x);
        }
    }
return newArr;
}
