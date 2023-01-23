#ifndef FIXED_HPP
#define FIXED_HPP

#include <iomanip>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	frac_nb = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &copy);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
