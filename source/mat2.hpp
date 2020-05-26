#ifndef mat2_hpp
#define mat2_hpp
#include <array>
#include "vec2.hpp"

struct Mat2 {
	// matrix layout: 
	// e_00 e_10 
	// e_01 e_11
	float e_00 = 1.0f; 
	float e_10 = 0.0f; 
	float e_01 = 0.0f; 
	float e_11 = 1.0f;
	//TODO (in mat2.cpp) Definition v. operator*= 
	Mat2& operator *=(Mat2 const& m);
	float det() const;
};
// TODO (in mat2.cpp) Definition v. operator* 
Mat2 operator*(Mat2 const& m1, Mat2 const& m2);
Vec2 operator*(Mat2 const& m, Vec2 const& v);
Mat2 inverse(Mat2 const& m);
Mat2 transpose(Mat2 const& m);
Mat2 make_rotation_mat2(float phi);

#endif