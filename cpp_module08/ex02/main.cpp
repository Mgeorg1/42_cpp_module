#include "MutantStack.hpp"
#include <iostream>
int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << "\n\n";
	mstack.pop();
	std::cout << mstack.size() <<  "\n\n";
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::const_iterator const_ite = mstack.end();
	++it;
	--it;
	while (it != const_ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "################################\n";
	MutantStack<int>::const_reverse_iterator const_rev_it = mstack.rbegin();
	MutantStack<int>::reverse_iterator rev_ite = mstack.rend(); 
	while (rev_ite != const_rev_it)
	{
		std::cout << *rev_ite << std::endl;
		--rev_ite;
	}
	return 0;
}