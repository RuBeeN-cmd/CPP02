#include "Point.hpp"

static Fixed	abs(Fixed x)
{
	if (x < 0)
		return x * -1;
	return x;
}

static Fixed	area(Point const a, Point const b, Point const c)
{
	return (((a.get_x() * (b.get_y() - c.get_y())) +
			(b.get_x() * (c.get_y() - a.get_y())) +
			(c.get_x() * (a.get_y() - b.get_y()))) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed areas[] = {
		abs(area(a, b, c)),
		abs(area(b, c, point)),
		abs(area(a, c, point)),
		abs(area(a, b, point)),
	};
	return (areas[1] + areas[2] + areas[3] == areas[0]);
}