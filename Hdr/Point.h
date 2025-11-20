#pragma once
#include <iostream>
#include "Object_3D.h"

class Point : public Object_3D
{
public:
	double x;
	double y;
	double z;
public:
	Point(const double&, const double&, const double&);
	~Point();

	std::string getName() const override;
	bool operator==(const Point&) const;
	friend std::ostream& operator<<(std::ostream& out, const Point& p);
};