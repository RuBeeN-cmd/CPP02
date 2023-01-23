#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}

Point::Point(const float x, const float y): x(x), y(y)
{
}

Point::Point(const Point &copy): x(copy.x), y(copy.y)
{
}

Point	&Point::operator=(const Point &copy)
{
	(Fixed) this->x = copy.x;
	(Fixed) this->y = copy.y;
	return (*this);
}

Point::~Point()
{
}

Fixed	Point::get_x(void) const
{
	return (this->x);
}

Fixed	Point::get_y(void) const
{
	return (this->y);
}