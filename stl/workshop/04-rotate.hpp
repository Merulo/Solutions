#pragma once

#include <limits>
#include <algorithm>
#include <numeric>

template <typename T>
void myRotate(T& container, std::size_t n)
{
	std::rotate(container.rbegin(), std::next(container.rbegin(), n), container.rend());
}
