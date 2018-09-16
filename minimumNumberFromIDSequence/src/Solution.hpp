#pragma once

#include <iostream>
#include <stack>

namespace Solution
{

namespace
{
    void addToResult(std::string& result, std::stack<char>& stack)
    {
        while(!stack.empty())
        {
            result+= stack.top();
            stack.pop();
        }
    }
}

std::string convert(const std::string& input)
{
    std::string result;
    std::stack<char> possibleCharacters;
    char starting = '1';

    // for(int i = 0; i <= input.length(); i++)
    // {
    //     possibleCharacters.push(starting);
    //     starting++;
    //     if(i == input.length() || input[i] == 'I')
    //     {
    //         std::cout<<"starting "<< starting<<std::endl;
    //         std::cout<<"result "<< result<<std::endl;

    //         addToResult(result, possibleCharacters);
    //     }
    // }

    for (const auto& character : input)
    {
        possibleCharacters.push(starting);
        starting++;
        if(character == 'I')
        {
            addToResult(result, possibleCharacters);
        }
    }
    possibleCharacters.push(starting);
    addToResult(result, possibleCharacters);
    return result;
}


} //namespace Solution