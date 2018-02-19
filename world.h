#pragma once

#include "entity.h"
//#include "vector"
using namespace std;
template<typename T>
class vector;
class World
{
public:
	World();
	~World();
	
	void AddEntity(Entity * entity);
	
	// Array of constant pointers to modifiable Entities
	std::vector<Entity *> entities;
};