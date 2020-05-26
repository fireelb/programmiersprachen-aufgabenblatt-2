#include "mat2.hpp"

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

Mat2 operator*(Mat2 const& m1, Mat2 const& m2)
{
	Mat2 mk{ m1 };
	mk *= m2;
	return mk;
}

