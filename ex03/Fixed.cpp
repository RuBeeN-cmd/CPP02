#include "Fixed.hpp"

Fixed::Fixed(void): value(0)
{
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::Fixed(const int value)
{
	this->value = value << this->frac_nb;
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * ft_pow(2, this->frac_nb));
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	this->value = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->frac_nb);
}

float	Fixed::toFloat(void) const
{
	return (this->value / (float) ft_pow(2, this->frac_nb));
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (this->getRawBits() != fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (this->getRawBits() >= fixed.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed&   Fixed::operator++(void) {
    this->value++;
    return (*this);
}

Fixed   Fixed::operator++(int) {
    Fixed	tmp;
	tmp.value = this->value++;
    return (tmp);
}

Fixed&   Fixed::operator--(void) {
    this->value--;
    return (*this);
}

Fixed   Fixed::operator--(int) {
    Fixed	tmp;
	tmp.value = this->value--;
    return (tmp);
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2) {
	if (f2 > f1)
		return (f2);
    return (f1);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2) {
	if (f2 < f1)
		return (f2);
    return (f1);
}

std::ostream &operator<<(std::ostream &ostream, const Fixed &fixed)
{
	ostream << fixed.toFloat();
	return (ostream);
}

int		ft_pow(int val, int pow)
{
	int		result;

	result = 1;
	while (pow--)
		result *= val;
	return (result);
}