#include "easyfind.hpp"

int main(int ac, char **av){
	if (ac != 2)
	{
		std::cout << "Usage: ./easyfind [number]" << std::endl;
		return (1);
	}
	std::vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	try
	{
		std::cout << easyfind(v, std::stoi(av[1])) << std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}
