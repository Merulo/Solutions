#pragma once
#include <cassert>
#include <stdexcept>

template <typename T>
void sumTwoContainers(T& first, const T& second)
{
	std::transform(second.begin(), second.end(), first.begin(), first.begin(), std::plus<int>());
}
