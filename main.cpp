#include <iostream>
#include <vector>
#include "functions_to_implement.cpp"

int main(){

    //Sum()
    std::vector<double> testNums = {2.5, 2.5, 5.5};
    std::cout << "Total should be 10.5" << std::endl;
    std::cout << Sum(testNums) << std::endl;

    //Product()
    std::vector<double> testN = {8.5, 10, 3, 5};
    std::cout << "Total should be 1275" << std::endl;
    std::cout << "Actual: " << Product(testN) << std::endl;

    //AddN()
    std::vector<int> testAdd = {5, 8, 2, 6};
    std::cout << "Before" << std::endl;
    for(long long unsigned int i = 0; i < testAdd.size(); i++){
        std::cout << testAdd[i] << std::endl;
    }
    std::cout << "After, n = 4" << std::endl;
    std::vector<int> newV = AddN(testAdd, 4);
    for(long long unsigned int i = 0; i < testAdd.size(); i++){
        std::cout << newV[i] << std::endl;
    }
}