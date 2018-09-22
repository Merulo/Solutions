#pragma once

#include <iostream>
#include <stack>

namespace Solution
{

namespace
{
    bool isOpeningBracket(const char& c)
    {
        if (c == '('
            or c == '{'
            or c == '[')
        {
            return true;
        }
        return false;
    }
    bool isClosingBracket(const char& c)
    {
        if (c == ')'
            or c == '}'
            or c == ']')
        {
            return true;
        }
        return false;
    }
    bool doBracketsMatch(const char& c1, const char& c2)
    {
        return (c1 == '(' and c2 == ')')
                or (c1 == '[' and c2 == ']')
                or (c1 == '{' and c2 == '}');
    }
}

bool checkBrackets(const std::string& input)
{
    std::stack<char> bracketsFound;
    for (const auto& character : input)
    {
        if (isOpeningBracket(character))
        {
            bracketsFound.push(character);
        }
        else if (isClosingBracket(character))
        {
            if (bracketsFound.empty())
            {
                return false;
            }
            auto lastBracket = bracketsFound.top();
            bracketsFound.pop();
            if(not doBracketsMatch(lastBracket, character))
            {
                return false;
            }

        }
    }
    return bracketsFound.empty();
}


} //namespace Solution