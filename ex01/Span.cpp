#include "Span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &copy){
	*this = copy;
}

Span::~Span() {}

Span &Span::operator=(const Span &copy){
	if (this != &copy)
	{
		this->_n = copy._n;
		this->_v = copy._v;
	}
	return (*this);
}

void Span::addNumber(int n){
	if (this->_v.size() < this->_n)
		this->_v.push_back(n);
	else
		throw Span::FullException();
}

int Span::shortestSpan(){
	if (this->_v.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size(); i++)
	{
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return (min);
}

int Span::longestSpan(){
	if (this->_v.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

const char *Span::FullException::what() const throw(){
	return ("Span is full");
}

const char *Span::NoSpanException::what() const throw(){
	return ("No span to find");
}