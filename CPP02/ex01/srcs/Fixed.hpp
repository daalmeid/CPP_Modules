
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class	Fixed {

	public:

		Fixed(void);
		Fixed(int const intNum);
		Fixed(float const floatNum);
		~Fixed(void);
		Fixed(Fixed const& src);
		Fixed&	operator=(Fixed const& rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:

		int					_fixPtNum;
		static const int	_fractBits;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif