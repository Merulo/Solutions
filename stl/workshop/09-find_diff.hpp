#pragma once
#include <cassert>
#include <stdexcept>

template <typename T>
auto findFirstDifference(const T& first, const T& second)
	-> std::pair<typename T::value_type, typename T::value_type>
{
	const auto pair = std::mismatch(first.begin(), first.end(), second.begin());

	if(pair.first == first.end() or pair.second == second.end())
	{
		throw std::range_error("both containers are equal");
	}
	
	return std::make_pair(*pair.first, *pair.second);
}
