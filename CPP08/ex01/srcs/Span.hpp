
#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <vector>
# include <iterator>

class	Span {

	public:

		Span(unsigned int N);
		~Span(void);
		Span(Span const& src);
		Span&	operator=(Span const& rhs);

		void	addNumber(int nextNum);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class EmptyException: public std::exception {

			public:
				virtual const char* what(void) const throw();
		};

		class FullException: public std::exception {

			public:
				virtual const char* what(void) const throw();
		};

	private:

		Span(void);
		std::vector<int>	_nums;
		unsigned int		_maxSize;

};

#endif