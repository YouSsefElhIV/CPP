#include "MutantStack.hpp"

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << "size = " << mstack.size() << std::endl;
		mstack.pop();
		std::cout << "size = " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		mstack.push(100);
		MutantStack<int>::iterator it =  mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << "MyStack: ";
		while (it != ite)
		{
			std::cout << *it  << " ";
			it++;
		}
		std::cout << "\n";
		std::list<int> l;
		l.push_back(5);
		l.push_back(3);
		l.push_back(5);
		l.push_back(737);
		l.push_back(0);
		l.push_back(100);
		std::list<int>::iterator c = l.begin();
		std::cout << "List:   ";
		while (c != l.end())
		{
			std::cout << *c  << " ";
			c++;
		}
		MutantStack<int>::reverse_iterator rev_it = mstack.rbegin();
		MutantStack<int>::reverse_iterator rev_ite = mstack.rend();
		std::cout << "\nMyStack(with reverse_iter): ";
		while (rev_it != rev_ite)
		{
			std::cout << *rev_it  << " ";
			rev_it++;
		}

		std::list<int>::reverse_iterator rev_c = l.rbegin();
		std::cout << "\nList(with rever_iter):   ";
		while (rev_c != l.rend())
		{
			std::cout << *rev_c  << " ";
			rev_c++;
		}
	}
	return (0);
}
