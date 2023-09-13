#include "Span.hpp"

// int main(){
// 	Span sp = Span(5);
// 	sp.addNumber(5);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return (0);
// }

int main(){
	Span sp = Span(100000);
	std::vector<int> vec;
	for (int i = 0; i < 100000; i++)
		vec.push_back(i);
	sp.addRange(vec);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}

