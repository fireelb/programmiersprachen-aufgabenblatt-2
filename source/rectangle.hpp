#ifndef rectangle_hpp
#define rectangle_hpp
#include "vec2.hpp"

class Rect
{
public:
	Rect();
	Rect(Vec2 const& u, Vec2 const& v);
	float circumference(Vec2 const& u, Vec2 const& v);

private:
	Vec2 min_;
	Vec2 max_;

};

#endif