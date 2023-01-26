#define CATCH_CONFIG_MAIN
#include "catch2.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ( "Sums are computed", "[Sum]") {
    std::vector<double> testNums = {2.5, 2.5, 5.5};
    REQUIRE (Sum(testNums) == 10.5);
    //require will stop the tests
    //check will return pass/fail but continue with the other tests
    // ./test -s to expand results .... [testname] to view specific tests

}
TEST_CASE ( "Products are computed", "[Product]"){
    std::vector<double> testN = {8.5, 10, 3, 5};
    std::vector<double> testN2 = {3.4, 11, 2.2, 5.6};
    double result = Product(testN);
    double result2 = Product(testN2);
    REQUIRE ( result == 1275);
    REQUIRE ( result2 == 460.768);
}
TEST_CASE ( "Add n to all elements in the vector", "[AddN]"){
    std::vector<int> testAdd = {5, 8, 2, 6};
    int n = 4; 
    //int x = 3;
    //int p = 5;
    std::vector<int> newV = AddN(testAdd, n);
    REQUIRE(newV[0] == 9);
    REQUIRE(newV[1] == 12);
    REQUIRE(newV[2] == 6);
    REQUIRE(newV[3] == 10);
}