#include "Object_3D.h"
#include "Box.h"
#include "File.h"
using namespace std;

int main()
{
	Point p1(0, 0, 0);
	Point p3(1, 1, 0);
	vector<unique_ptr<Object_3D>> myShape;
	/*myShape.push_back(make_unique<Point>(0, 0, 0));*/
	myShape.push_back(make_unique<Box>(p1, p3, 1));
	myShape.push_back(make_unique<Box>(p1, p3, 2));
	myShape.push_back(make_unique<Box>(p1, p3, 3));

	File file;
	file.write(myShape);
	return 0;
}