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