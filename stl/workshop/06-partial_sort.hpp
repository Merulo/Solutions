#pragma once
#include <cassert>

namespace
{
	const auto sorter = [](const auto& lhs, const auto& rhs)
		{
			return lhs.thisIsImportant < rhs.thisIsImportant;
		};
}

template <typename T>
void myPartialSort(T& container, std::size_t n)
{
	std::sort(container.begin(), std::next(container.begin(), n), sorter);
}

template <typename T>
void myPartialSort(std::list<T>& container, std::size_t n)
{
	std::list<T> tmp;
	tmp.splice(tmp.begin(), container, container.begin(),  std::next(container.begin(), n));
	tmp.sort(sorter);
	container.splice(container.begin(), tmp);
}