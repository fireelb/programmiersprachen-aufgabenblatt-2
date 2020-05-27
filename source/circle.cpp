#include "circle.hpp"

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