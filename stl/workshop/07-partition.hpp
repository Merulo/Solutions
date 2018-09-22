#pragma once

template <typename T>
void moveOddToBeginning(T& container)
{
	std::partition(container.begin(), container.end(), [](const auto& value)
		{
			return value % 2 == 1;
		});
}
