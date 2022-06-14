
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <fstream>

class	Brain {

	public:

		Brain(void);
		~Brain(void);
		Brain(Brain const& src);
		Brain&	operator=(Brain const& rhs);

		std::string	ideas[100];

};

#endif