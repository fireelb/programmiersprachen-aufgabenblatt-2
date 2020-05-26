#include "vec2.hpp"
#include <iostream>

Vec2& Vec2::operator+=(Vec2 const& v)
{
	x += v.x;
	y += v.y;
	return *this;
}

Vec2& Vec2::operator-=(Vec2 const& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}

Vec2& Vec2::operator*=(float s)
{
	x *= s;
	y *= s;
	return *this;
}

Vec2& Vec2::operator/=(float s)
{
	if (s != 0)
	{
		x /= s;
		y /= s;
		return *this;
	}
	else
	{
		std::cout << "Division durch Null nicht m�glich!\n";
	}
}

Vec2 operator+(Vec2 const& u, Vec2 const& v)
{
	Vec2 uk{ u };
	uk += v;
	return uk;
}

Vec2 operator-(Vec2 const& u, Vec2 const& v)
{
	Vec2 uk{ u };
	uk -= v;
	return uk;
}

Vec2 operator*(Vec2 const& v, float s)
{
	Vec2 vk{ v };
	vk *= s;
	return vk;
}

Vec2 operator/(Vec2 const& v, float s)
{
	Vec2 vk{ v };
	vk /= s;
	return vk;
}

Vec2 operator*(float s, Vec2 const& v)
{
	Vec2 vk{ v };
	vk *= s;
	return vk;
}