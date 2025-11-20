#pragma once
#include <vector>
#include "Point.h"

class Shape : public Object_3D
{
public:
	Shape(const std::string&);
	virtual ~Shape();

	std::string getName() const override;
	virtual std::vector<std::pair<Point, Point>> getCoordinates() const = 0;
};