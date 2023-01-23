#include "Point.hpp"

int main(void)
{
	Point	a(-0.5, 0.5);
	Point	b(-0.5, 0);
	Point	c(-0.5, -0.5);
	Point	point(0, 0);
	std::cout << bsp(a, b, c, point) <<std::endl;
	return 0;
}
