#pragma once

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

namespace Solution
{

namespace
{   
    using Decomposition = std::map<int, int>;
    void calculate(int currentlyChecked, std::map<int, Decomposition>& divisions)
    {
        for(auto i = 2; i < currentlyChecked; i++)
        {
            if(currentlyChecked % i == 0)
            {
                divisions[currentlyChecked] = divisions[currentlyChecked / i];
                divisions[currentlyChecked][i]++;
                return;
            }
        }
        divisions[currentlyChecked] = {{currentlyChecked, 1}};
    }

    Decomposition gather(std::map<int, Decomposition>& divisions)
    {
        Decomposition decomposition;
        for(const auto& division : divisions)
        {
            for(const auto& values : division.second)
            {
                if(decomposition.find(values.first) == decomposition.end())
                {
                    decomposition[values.first] = values.second;
                }
                else
                {
                    decomposition[values.first] += values.second;
                }
            }
        }
        return decomposition;
    }

    std::string convert(std::map<int, Decomposition>& divisions){
        std::string result;
        Decomposition decomposition = gather(divisions);

        for(const auto& d : decomposition)
        {
            if(d.second != 1)
            {
                result+= std::to_string(d.first)+"^"+std::to_string(d.second) + " * ";
            }
            else
            {
                result+= std::to_string(d.first) + " * ";
            }
        }
        result.pop_back();
        result.pop_back();
        result.pop_back();
        return result;
    }
}



std::string decomp(int n) {
    std::map<int, Decomposition> divisions;

    for(auto i = 2; i <= n; i++)
    {
        calculate(i, divisions);
    }
    return convert(divisions);
}

} //namespace Solution