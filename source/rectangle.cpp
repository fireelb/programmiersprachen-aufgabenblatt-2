#include"rectangle.hpp"

Rect::Rect()
{
	min_{ 7.0f,4.0f };
	max_{ 14.0f,10.0f };
}

Rect::Rect(Vec2 u, Vec2 v)
{
	min_ = u;
	max_ = v;
}

float Rect::circumference(Vec2 u, Vec2 v)
{
	float a = max_.x - min_.x;
	float b = max_.y - min_.y;
	return{ 2 * a + 2 * b };
}