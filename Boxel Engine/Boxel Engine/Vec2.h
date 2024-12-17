#pragma once

class Vec2
{
public:
	float x;
	float y;

	Vec2();
	Vec2(float a, float b);

	Vec2 operator+ (Vec2 & v);
	Vec2 operator- (Vec2 & v);
	Vec2 operator* (float s);
	Vec2 operator/ (float s);
	bool operator== (Vec2 & v);
	bool operator!= (Vec2 & v);
	float length();
	float distance(Vec2 & v);
};