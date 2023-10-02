#ifndef VEC3_H
#define VEC3_H

#include <cmath>
#include <iostream>

using std::sqrt;


inline std::ostream& operator<<(std::ostream& out, const Vec3& v);
inline Vec3 operator+(const Vec3 &u, const Vec3 &v);
inline Vec3 operator-(const Vec3& u, const Vec3 &v);
inline Vec3 operator*(const Vec3& u, const Vec3& v);
inline Vec3 operator*(double t, const Vec3 &v);
inline Vec3 operator*(const Vec3& v, double t);
inline Vec3 operator/(const Vec3& v, double t);
inline double dot(const Vec3& u, const Vec3& v);
inline Vec3 cross(const Vec3& u, const Vec3& v);
inline Vec3 unit_vector(const Vec3 &v);


class Vec3 {
public:
	Vec3();
	Vec3(double e0, double e1, double e2);

	double x() const;
	double y() const;
	double z() const;

	Vec3 operator-() const;
	double operator[](int i) const;
	double& operator[](int i);
	Vec3& operator+=(const Vec3& v);
	Vec3& operator*=(const double t);
	Vec3& operator/=(const double t);


	double length() const;
	double length_squared() const;

	double e[3];
};




using Point3 = Vec3; // 3D point
using Color = Vec3; // RGB Color

#endif