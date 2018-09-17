#include "Solution.hpp"
#include <assert.h>

int main()
{
    std::cout<<Solution::checkBrackets("{{[]}}")<<std::endl;
    std::cout<<Solution::checkBrackets("()()()((()))")<<std::endl;
    std::cout<<Solution::checkBrackets("()(()){{[]}}")<<std::endl;

    std::cout<<Solution::checkBrackets("{{[]}}(")<<std::endl;
    std::cout<<Solution::checkBrackets("(()()()((()))")<<std::endl;
    std::cout<<Solution::checkBrackets("()())")<<std::endl;

    return 0;
}