#include "StringCalculator.h"
#include "iostream"
#include "sstream"
#include "string"
#include "vector"

int StringCalculator::add(string input){
        if((input == "") || (input == "0"))
        return 0;

    // return sum;
            std::vector<int> nums;
    std::stringstream ss(input);
    std::string token;

    while (std::getline(ss, token, ',')) {
        nums.push_back(std::stoi(token));
    }

    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

}

// int StringCalculator::addNum(string input){     
//     std::string delimiters = ",";
//     int sum = 0;
//     std::string numberStr = 0;
//     size_t startPos = 0;
//     size_t endPos = 0;

//     while (endPos != std::string::npos) {
//         endPos = input.find_first_of(delimiters, startPos);
//         numberStr = input.substr(startPos, endPos - startPos);
//         sum += std::stoi(numberStr);
//         startPos = endPos + 1;
//     }
//     return sum;
//}
