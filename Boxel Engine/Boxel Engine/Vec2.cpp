#include "Vec2.h"
#include <math.h>

Vec2::Vec2()
{
	x = 0;
	y = 0;
}

Vec2::Vec2(float a, float b)
{
	x = a;
	y = b;
}

Vec2 Vec2::operator+ (Vec2& v)
{
	return Vec2(x + v.x, y + v.y);
}

Vec2 Vec2::operator- (Vec2& v)
{
	return Vec2(x - v.x, y - v.y);
}

Vec2 Vec2::operator* (float s)
{
	return Vec2(x*s, y*s);
}

Vec2 Vec2::operator/ (float s)
{
	return Vec2(x/s, y/s);
}

bool Vec2::operator== (Vec2& v)
{
	return ((x == v.x) + (y == v.y));
}

bool Vec2::operator!= (Vec2& v)
{
	return ((x != v.x) + (y != v.y));
}

float Vec2::length()
{
	return sqrtf((x * x) + (y * y));
}

float Vec2::distance(Vec2 & v)
{
	float dx = x - v.x;
	float dy = y - v.y;
	return sqrtf((dx * dx) + (dy * dy));
}