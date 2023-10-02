#include "Ray.h"

Ray::Ray()
{

}
Ray::Ray(const Point3& origin, const Vec3 &direction) : _origin(origin), _direction(direction)
{

}

Point3 Ray::origin() const
{
	return _origin;
}

Vec3 Ray::direction() const
{
	return _direction;
}

Point3 Ray::at(double t) const
{
	return _origin + t*_direction;
}

