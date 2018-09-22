#pragma once

#include <limits>
#include <algorithm>
#include <numeric>

template <typename T>
auto findDivisableByFour(const T& container) -> typename T::const_iterator
{
	return std::find_if(container.begin(), container.end(), [](const auto& t)
		{
			return t % 4 == 0;
		});
}
