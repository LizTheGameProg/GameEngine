#pragma once
#include "basegame.h"

class MyGame : public BaseGame
{
public:
	MyGame(int argc, char** argv);
	virtual ~MyGame();
	
	void OnInit();
	void OnLoad();
	void OnUpdate(const double deltaTime);
	void OnRender();
	void OnUnLoad();
	void OnDeInit();
};