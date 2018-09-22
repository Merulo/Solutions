#pragma once

#include <limits>
#include <algorithm>
#include <numeric>

template <typename T>
auto myPartial(T& container) -> T
{
	T retval(container);
	std::partial_sum(retval.begin(), retval.end(), retval.begin(), std::multiplies<int>());
	return retval;
}
