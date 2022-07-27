
#include "Span.hpp"

Span::Span(void): _maxSize(0) {

}

Span::Span(unsigned int N): _maxSize(N) {

}

Span::~Span(void) {

}

Span::Span(Span const& src): _maxSize(src._maxSize) {

	*this = src;
	return ;
}

Span&	Span::operator=(Span const& rhs) {

	if (this != &rhs)
		this->_nums = rhs._nums;
	return *this;
}

void	Span::addNumber(int nextNum) {

	if (this->_nums.size() < this->_maxSize)
		this->_nums.push_back(nextNum);
	else
		throw Span::FullException();
}

unsigned int	Span::shortestSpan(void) {

	std::vector<int>	cpyNums(this->_nums);

	if(this->_nums.size() <= 1)
		throw Span::EmptyException();	
	else
	{
		std::vector<int>::iterator itEnd = cpyNums.end();

		std::stable_sort(cpyNums.begin(),itEnd);
		// for (std::vector<int>::iterator it = cpyNums.begin(); it != cpyNums.end(); it++)
		// {
		// 	std::cout << *it << " ";
		// }
		//std::cout << std::endl;
		
		unsigned int	minSpan = 4294967295;
		
		for (std::vector<int>::iterator it = cpyNums.begin(); it + 1 != itEnd; it++)
		{
			unsigned int tmpSpan = static_cast< unsigned int> (*(it + 1) - *it);
			if (tmpSpan < minSpan)
				minSpan = tmpSpan;
		}
		return minSpan;
	}
}

unsigned int	Span::longestSpan(void) {

	if(this->_nums.size() <= 1)
		throw Span::EmptyException();	
	else
	{
		std::vector<int>::iterator min = std::min_element(this->_nums.begin(),this->_nums.end());
		std::vector<int>::iterator max = std::max_element(this->_nums.begin(),this->_nums.end());
		return (*max - *min);
	}
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

	if(this->_nums.size() + std::distance(begin, end) > this->_maxSize)
		throw FullException();
	this->_nums.insert(this->_nums.end(), begin, end);
}

void	Span::printRange(void) {

	for (std::vector<int>::iterator it = this->_nums.begin(); it != this->_nums.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

const char*	Span::EmptyException::what(void) const  throw() {

	return ("Empty or only one element in vector, operation impossible.");
}

const char*	Span::FullException::what(void) const  throw() {

	return ("Not enough space to add more numbers.");
}