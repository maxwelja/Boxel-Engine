#include "EntityManager.h"

EntityManager::EntityManager()
{

}

shared_ptr<Entity> EntityManager::addEntity(const TAG& tag)
{
	auto e = make_shared<Entity>(tag, totalEntities++);
	entities.push_back(e);
	entityMap[tag].push_back(e);
	return e;
}

EntityVec& EntityManager::getEntities()
{

}

EntityVec& EntityManager::getEntities(const TAG& t)
{

}