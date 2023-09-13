#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

template <typename T>
int easyfind(T cont, int n){
	typename T::iterator ret = find(cont.begin(), cont.end(), n);
	if (ret == cont.end())
		throw std::invalid_argument("Not found");
	return (*ret);
}

#endif