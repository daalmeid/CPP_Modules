
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>
# include <deque>
# include <vector>
# include <list>

template <class T, class Ctnr = std::deque<T> >
class	MutantStack: public std::stack< T, Ctnr > {

	public:

		MutantStack(void);
		MutantStack(Ctnr const& cToCpy);
		MutantStack(unsigned int nbElements, T content);
		MutantStack(MutantStack const& src);
		~MutantStack(void);
		MutantStack&	operator=(MutantStack const& rhs);

		typedef typename	MutantStack<T,Ctnr>::container_type::iterator iterator;
		typedef typename	MutantStack<T,Ctnr>::container_type::reverse_iterator reverse_iterator;
		typedef typename	MutantStack<T,Ctnr>::container_type::const_iterator const_iterator;
		typedef typename	MutantStack<T,Ctnr>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin(void);
		iterator end(void);
		const_iterator cbegin(void);
		const_iterator cend(void);
		reverse_iterator rbegin(void);
		reverse_iterator rend(void);
		const_reverse_iterator crbegin(void);
		const_reverse_iterator crend(void);


	private:

};

template <class T, class Ctnr>
MutantStack<T, Ctnr>::MutantStack(void) : std::stack<T, Ctnr>() {

	std::cout << "Default constructor" << std::endl;
}

template <class T, class Ctnr>
MutantStack<T, Ctnr>::MutantStack(Ctnr const& cToCpy) : std::stack<T, Ctnr>(cToCpy) {

	std::cout << "Container type copy constructor" << std::endl;
}

template <class T, class Ctnr>
MutantStack<T, Ctnr>::~MutantStack(void) {

	std::cout << "Destructor" << std::endl;
}

template <class T, class Ctnr>
MutantStack<T, Ctnr>::MutantStack(unsigned int nbElements, T content): std::stack<T, Ctnr>(nbElements, content) {

	std::cout << "Content defined by constructor" << std::endl;
}

template <class T, class Ctnr>
MutantStack<T, Ctnr>::MutantStack(MutantStack const& src): std::stack<T, Ctnr>(src) {

	// *this = src;
	std::cout << "Copy constructor" << std::endl;
}

template <class T, class Ctnr>
MutantStack<T, Ctnr>&	MutantStack<T, Ctnr>::operator=(MutantStack const& rhs) {

	(void)rhs;
	return *this;
}

template <class T, class Ctnr>
typename MutantStack<T, Ctnr>::iterator MutantStack<T, Ctnr>::begin(void) {

	return this->std::stack<T, Ctnr>::c.begin();
}

template <class T, class Ctnr>
typename MutantStack<T, Ctnr>::iterator MutantStack<T, Ctnr>::end(void) {

	return this->std::stack<T, Ctnr>::c.end();
}

template <class T, class Ctnr>
typename MutantStack<T, Ctnr>::const_iterator MutantStack<T, Ctnr>::cbegin(void) {

	return this->std::stack<T, Ctnr>::c.cbegin();
}

template <class T, class Ctnr>
typename MutantStack<T, Ctnr>::const_iterator MutantStack<T, Ctnr>::cend(void) {

	return this->std::stack<T, Ctnr>::c.cend();
}

template <class T, class Ctnr>
typename MutantStack<T, Ctnr>::reverse_iterator MutantStack<T, Ctnr>::rbegin(void) {

	return this->std::stack<T, Ctnr>::c.rbegin();
}

template <class T, class Ctnr>
typename MutantStack<T, Ctnr>::reverse_iterator MutantStack<T, Ctnr>::rend(void) {

	return this->std::stack<T, Ctnr>::c.rend();
}

template <class T, class Ctnr>
typename MutantStack<T, Ctnr>::const_reverse_iterator MutantStack<T, Ctnr>::crbegin(void) {

	return this->std::stack<T, Ctnr>::c.crbegin();
}

template <class T, class Ctnr>
typename MutantStack<T, Ctnr>::const_reverse_iterator MutantStack<T, Ctnr>::crend(void) {

	return this->std::stack<T, Ctnr>::c.crend();
}

#endif