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