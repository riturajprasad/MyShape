#pragma once
#include "Shape.h"

class Box : public Shape
{
private:
	Point bottom_p1;
	Point bottom_p3;
	Point bottom_p2;
	Point bottom_p4;
	Point top_p1;
	Point top_p2;
	Point top_p3;
	Point top_p4;
public:
	Box(const Point&, const Point&, const double&);
	~Box();

	std::vector<std::pair<Point, Point>> getCoordinates() const override;
	friend std::ostream& operator<<(std::ostream& out, const Box& b);
};