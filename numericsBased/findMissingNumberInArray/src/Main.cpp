#include "Solution.hpp"

#include <array>
#include <iostream>

int main()
{
    std::cout<<Solution::findInUnsorted(std::array{1,4,3,2,10,9,8,7,6})<<std::endl;
    std::cout<<Solution::findInUnsorted(std::array{10,8,6,4,2,3,5,7,9})<<std::endl;
    std::cout<<Solution::findInUnsorted(std::array{1,6,2,8,9,7,3,4,5})<<std::endl;

    std::cout<<Solution::findInSorted(std::array{1,2,4,5,6})<<std::endl;
    std::cout<<Solution::findInSorted(std::array{1,2,3,4,6})<<std::endl;
    std::cout<<Solution::findInSorted(std::array{1,3,4,5,6,7,8,9})<<std::endl;

    return 0;
}