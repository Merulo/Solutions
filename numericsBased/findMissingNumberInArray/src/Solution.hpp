#pragma once

#include <numeric>
#include <array>

#include <iostream>


namespace Solution
{

namespace
{   
    //binary search
    template <typename T, std::size_t size>
    T findInSorted(std::array<T, size> input, int start, int end)
    {
        if(start + 1 == end)
        {
            return input[start];
        }
        const auto middle = (start + end) / 2;
        if(middle + 1 == input[middle])
        {
            return findInSorted(input, middle, end);
        }
        return findInSorted(input, start, middle);
    }
}

template <typename T, std::size_t size>
T findInUnsorted(std::array<T, size> input)
{  
    T sum = std::accumulate(std::begin(input), std::end(input), 0);
    return ((size + 1) * (size + 2) / 2) - sum;
}


template <typename T, std::size_t size>
T findInSorted(std::array<T, size> input)
{
    return findInSorted(input, 0, size) + 1;
}



} //namespace Solution