#pragma once

template <typename T>
auto getOddNumbers(const T& input)
	-> std::vector<typename T::value_type>
{
	std::vector<typename T::value_type> retval;
	std::copy_if(input.begin(), input.end(), std::back_inserter(retval), 
		[](const auto& value){
			return (0 == value % 2);
		});

	return retval;
}
