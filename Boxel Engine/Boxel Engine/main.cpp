#include "Vec2.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	Vec2 v1 = Vec2(10, 50);
	Vec2 v2 = Vec2(100, 100);
	Vec2 v3;

	cout << "v1: " << v1.x << " " << v1.y << endl;
	cout << "v2: " << v2.x << " " << v2.y << endl;
	
	v3 = v1 + v2;
	cout << "v1+v2: " << (v1 + v2).x << " " << (v1 + v2).y << endl;

	v3 = v1 - v2; 
	cout << "v1-v2: " << v3.x << " " << v3.y << endl;

	v3 = v2*3;
	cout << "v2*3: " << v3.x << " " << v3.y << endl;

	v3 = v2/5;
	cout << "v2/5: " << v3.x << " " << v3.y << endl;

	cout << "v1 == v2: " << (v1 == v2) << endl;
	cout << "v1 != v2: " << (v1 != v2) << endl;
	
	cout << "length v1: " << v1.length() << endl;
	cout << "length v2: " << v2.length() << endl;

	cout << "distance v1 -> v2: " << v1.distance(v2) << endl;
	cout << "distance v2 -> v1: " << v2.distance(v1) << endl;

	v1.normalize();
	cout << "normalized v1: " << v1.x << " " << v1.y << endl;
	cout << "length v1: " << v1.length() << endl;

	v2.normalize();
	cout << "normalized v2: " << v2.x << " " << v2.y << endl;
	cout << "length v2: " << v2.length() << endl;

	return 0;
}