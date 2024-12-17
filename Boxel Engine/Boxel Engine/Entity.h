#pragma once
#include <memory>

enum TAG {
	DEFAULT = 0,
	PLAYER = 100,
	TERRAIN = 200,
	ENEMY = 300,
	PICKUP = 400,
	EVENT_TRIGGER = 500
};

class Entity
{
	const size_t id = 0;
	const TAG tag = DEFAULT;
	bool isAlive = true;
public:
	Entity(const TAG t, const size_t id);
};