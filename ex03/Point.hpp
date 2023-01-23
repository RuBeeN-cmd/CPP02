#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		Point	&operator=(const Point &copy);
		~Point();

		Fixed	get_x(void) const;
		Fixed	get_y(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif