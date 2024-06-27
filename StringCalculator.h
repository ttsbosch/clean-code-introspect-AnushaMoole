#include<iostream>
#include<string>
#include<vector>

using namespace std;

class StringCalculator{
    public:
    int add(string input);
    std::vector<int> getNum(string input);
    //std::vector<int> removeNegative(std::vector<int> nums);
    void checkNegaiveNumber(std::vector<int> nums);
    int accumulate(std::vector<int> vectors);
};
