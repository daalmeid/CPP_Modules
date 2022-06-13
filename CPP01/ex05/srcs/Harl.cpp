
#include "Harl.hpp"

Harl::Harl( void ) {
	
	this->test[0].name = "DEBUG";
	this->test[0].fun = &Harl::debug;
	this->test[1].name = "INFO";
	this->test[1].fun = &Harl::info;
	this->test[2].name = "WARNING";
	this->test[2].fun = &Harl::warning;
	this->test[3].name = "ERROR";
	this->test[3].fun = &Harl::error;
	return ;
}

Harl::~Harl( void ) {

}

void	Harl::complain( std::string level ) {

	int			i = 0;
	
	while (i < 4)
	{
		if (this->test[i].name == level)
		{
			(this->*test[i].fun)();
			return ;
		}
		i++;
	}
	std::cout << "No complaints registered" << std::endl;
	return ;
}

void	Harl::debug( void ) const {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info( void ) const {

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning( void ) const {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error( void ) const {

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}
