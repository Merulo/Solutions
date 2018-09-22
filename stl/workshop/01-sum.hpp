#pragma once

#include <limits>
#include <algorithm>
#include <numeric>

template <typename T>
auto mysum(const T& container) -> typename T::value_type
{
	return std::accumulate(container.begin(), container.end(), 0);
}