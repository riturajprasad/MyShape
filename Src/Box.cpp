#include "Box.h"

Box::Box(const Point& p1, const Point& p3, const double& height) : Shape("Box"), bottom_p1(p1), bottom_p3(p3),
	bottom_p2(p1.x, p3.y, p1.z), bottom_p4(p3.x, p1.y, p1.z),
	top_p1(p1.x, p1.y, height), top_p2(p1.x, p3.y, height),
	top_p3(p3.x, p3.y, height), top_p4(p3.x, p1.y, height) {}

Box::~Box() {}

std::vector<std::pair<Point, Point>> Box::getCoordinates() const
{
	std::vector<std::pair<Point, Point>> cord;
	cord.push_back({ bottom_p1, bottom_p4 });
	cord.push_back({ bottom_p4, bottom_p3 });
	cord.push_back({ bottom_p3, bottom_p2 });
	cord.push_back({ bottom_p2, bottom_p1 });
	cord.push_back({ top_p1, top_p4 });
	cord.push_back({ top_p4, top_p3 });
	cord.push_back({ top_p3, top_p2 });
	cord.push_back({ top_p2, top_p1 });
	cord.push_back({ bottom_p1, top_p1 });
	cord.push_back({ bottom_p4, top_p4 });
	cord.push_back({ bottom_p3, top_p3 });
	cord.push_back({ bottom_p2, top_p2 });
	return cord;
}

std::ostream& operator<<(std::ostream& out, const Box& b)
{
	//out << b.getName() << "\n";
	for (auto cord : b.getCoordinates())
	{
		out << cord.first.x << " " << cord.first.y << " " << cord.first.z << "\n";
		out << cord.second.x << " " << cord.second.y << " " << cord.second.z << "\n\n\n";
	}
	return out;
}