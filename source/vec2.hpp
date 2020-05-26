#ifndef vec2_hpp
#define vec2_hpp

struct Vec2
{
	float x = 0.0f;
	float y = 0.0f;
	Vec2& operator+=(Vec2 const& v);
	Vec2& operator-=(Vec2 const& v);
	Vec2& operator*=(float s);
	Vec2& operator/=(float s);
};
Vec2 operator+(Vec2 const& u, Vec2 const& v);
Vec2 operator-(Vec2 const& u, Vec2 const& v);
Vec2 operator*(Vec2 const& v, float s);
Vec2 operator/(Vec2 const& v, float s);
Vec2 operator*(float s, Vec2 const& v);


#endif