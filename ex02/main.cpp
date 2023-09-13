#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(6);
	mstack.push(17);
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "______________________________" << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "______________________________" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	++it;
	std::cout << "Begin: " << *it << std::endl;
	MutantStack<int>::iterator ite = mstack.end();
	--ite;
	std::cout << "End: " << *ite << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}