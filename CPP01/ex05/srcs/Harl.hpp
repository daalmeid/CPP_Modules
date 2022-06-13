
#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class	Harl;

typedef struct	s_funTable {

	std::string	name;
	void		(Harl::*fun)(void) const;
}t_funTable;

class	Harl {

	public:

		Harl( void );
		~Harl( void );

		void	complain( std::string level );
	private:

		void	debug( void ) const;
		void	info( void ) const;
		void	warning( void ) const;
		void	error( void ) const;

		t_funTable	test[4];

};

#endif