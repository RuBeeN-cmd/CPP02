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

		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;

		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		static const Fixed	&min(const Fixed &f1, const Fixed &f2);
		static const Fixed	&max(const Fixed &f1, const Fixed &f2);
		
		friend std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed);
};

int				ft_pow(int val, int pow);

#endif
