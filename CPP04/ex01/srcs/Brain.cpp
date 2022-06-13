
#include "Brain.hpp"

Brain::Brain(void) {
	
	std::cout << "Brain constructor called" << std::endl;
	std::ifstream	thoughts("Thoughts.txt");

	if (thoughts.is_open())
	{
		for (size_t i = 0; i < 100; i++)
		{
			getline(thoughts, this->ideas[i]);
		}
		thoughts.close();
	}
	else
		std::cout << "Unable to open file" << std::endl;
}

Brain::~Brain(void) {

	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const& src) {

	*this = src;
	return ;
}

Brain&	Brain::operator=(Brain const& rhs) {

	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];

	return *this;
}
