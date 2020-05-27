#include "circle.hpp"
#include <cmath>

Circle::Circle()
{
	r = 42.0f;
	m{ 1.0f,1.0f };
}

Circle::Circle(float a, Vec2 v)
{
	r = a;
	m = v;
}

float circle::circumference(float r)
{
	return { 2 * M_PI * r };
}