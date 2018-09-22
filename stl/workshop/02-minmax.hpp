#pragma once

#include <limits>
#include <algorithm>
#include <numeric>

template <typename T>
auto myminmax(const T& container) -> std::pair<typename T::value_type, typename T::value_type>
{
	const auto pair = std::minmax_element(container.begin(), container.end());
	return std::make_pair(*(pair.first), *(pair.second));
}