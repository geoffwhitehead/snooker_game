#pragma once
#include "Shape.h"
#include "../engine-base/PhysicsObject.h"

class Circle : public Shape
{
public:
	Circle(PhysicsObject* obj, float* radius);
	~Circle();
	float* getRadius() const{ return this->radius; };
	PhysicsObject* getPhysicsObject() const { return this->physicsObject; };
private:
	float* radius;
	PhysicsObject* physicsObject;
};

