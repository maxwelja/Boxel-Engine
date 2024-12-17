#pragma once
#include <vector>
#include <map>
#include <memory>
#include "Entity.h"

using namespace std;

typedef vector<shared_ptr<Entity>> EntityVec;
typedef map<TAG, EntityVec> EntityMap;

class EntityManager
{
	EntityVec entities;
	EntityMap entityMap;
	size_t totalEntities = 0;
public:
	EntityManager();
	shared_ptr<Entity> addEntity(const TAG& t);
	EntityVec& getEntities();
	EntityVec& getEntities(const TAG& t);
};