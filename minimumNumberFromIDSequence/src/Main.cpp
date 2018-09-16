#include "Solution.hpp"
#include <assert.h>

int main()
{
    std::cout<<Solution::convert("")<<std::endl;
    std::cout<<Solution::convert("I")<<std::endl;
    std::cout<<Solution::convert("D")<<std::endl;
    std::cout<<Solution::convert("ID")<<std::endl;
    std::cout<<Solution::convert("II")<<std::endl;
    std::cout<<Solution::convert("DD")<<std::endl;
    std::cout<<Solution::convert("DI")<<std::endl;
    std::cout<<Solution::convert("IIDDII")<<std::endl;
    std::cout<<Solution::convert("DDIIDD")<<std::endl;
    std::cout<<Solution::convert("DIDDIDD")<<std::endl;


    return 0;
}