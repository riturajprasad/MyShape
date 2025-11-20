#pragma once
#include <string>

class Object_3D
{
protected:
	std::string name;

public:
	Object_3D(const std::string&);
	virtual ~Object_3D();

	virtual std::string getName() const = 0;
};