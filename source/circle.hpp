#ifndef circle_hpp
#define circle_hpp
#include "vec2.hpp"

class Circle
{
public:
	Circle();
	Circle(float a, Vec2 const& v);
	float circumference(float r);
private:
	float r; //Radius des Kreises
	Vec2 m; //Mittelpunkt des Kreises
};


#endif
