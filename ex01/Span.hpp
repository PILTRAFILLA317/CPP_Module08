#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
	private:
		unsigned int _n;
		std::vector<int> _v;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		~Span();
		Span &operator=(const Span &copy);

		void addNumber(int n);
		void addRange(std::vector<int> vec);
		int shortestSpan();
		int longestSpan();

		class FullException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class NoSpanException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

#endif