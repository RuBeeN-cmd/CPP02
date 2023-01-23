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
		Fixed(const int value);
		Fixed(const float value);
		Fixed	&operator=(const Fixed &copy);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed);
int				ft_pow(int val, int pow);

#endif
