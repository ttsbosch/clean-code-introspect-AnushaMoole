#include "StringCalculator.h"
#include "iostream"
#include "sstream"
#include "string"
#include "vector"

int StringCalculator::add(string input){
        if((input == "") || (input == "0"))
        return 0;
        std::vector<int> nums = getNum(input);

        checkNegaiveNumber(nums);
        
        int sum = accumulate(nums);
        return sum;
}

std::vector<int> StringCalculator::getNum(string input){
    std::vector<int> nums;
    std::stringstream ss(input);
    std::string token;
        
    while ((std::getline(ss, token, ',')) || (std::getline(ss, token, '\n'))) {
              nums.push_back(std::stoi(token));
    }
    return nums;
}

int StringCalculator::accumulate(std::vector<int> nums){
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        return sum;
}

void StringCalculator::checkNegaiveNumber(std::vector<int> nums){
        for (int num : nums) {
            if(num < 0)
                    throw std::runtime_error("No negative numbers");
        }
}
