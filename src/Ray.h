#ifndef RAY_H
#define RAY_H

#include "Vec3.h"

class Ray
{
public:
	Ray();
	Ray(const Point3&, const Vec3&);

	Point3 origin() const;
    Vec3 direction() const;
    Point3 at(double t) const;

public:
	Point3 _origin;
	Vec3 _direction;

};
#endif