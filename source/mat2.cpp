#include "mat2.hpp"
#include <cmath>

Mat2& Mat2::operator*=(Mat2 const& m)
{
	const Mat2 mk(*this);
	float a = mk.e_00 * m.e_00 + mk.e_10 * m.e_01;
	float b = mk.e_00 * m.e_10 + mk.e_10 * m.e_11;
	float c = mk.e_01 * m.e_00 + mk.e_11 * m.e_01;
	float d = mk.e_01 * m.e_10 + mk.e_11 * m.e_11;
	e_00 = a;
	e_10 = b;
	e_01 = c;
	e_11 = d;
	return *this;
}

float Mat2::det() const
{
	float d = e_00 * e_11 - e_10 * e_01;
	return d;
}

Mat2 operator*(Mat2 const& m1, Mat2 const& m2)
{
	Mat2 mk{ m1 };
	mk *= m2;
	return mk;
}

Vec2 operator*(Mat2 const& m, Vec2 const& v)
{
	float a = v.x * m.e_00 + v.x * m.e_01;
	float b = v.y * m.e_10 + v.y * m.e_11;
	return { a, b };
}

Mat2 inverse(Mat2 const& m)
{
	float d = m.det();
	Mat2 inv{ m.e_11 / d, -m.e_10 / d, -m.e_01 / d, m.e_00 / d };
	return inv;
 }
Mat2 transpose(Mat2 const& m)
{
	Mat2 trans{ m.e_00,m.e_01,m.e_10,m.e_11 };
	return trans;
}

Mat2 make_rotation_mat2(float phi)
{
	Mat2 rot{ std::cos(phi),-std::sin(phi),std::sin(phi),std::cos(phi) };
	return rot;
}