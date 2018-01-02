#pragma once

class World;
class SystemHandler;

class BaseGame
{
	BaseGame() {}
public:
	BaseGame(int argc, char** argv);
	virtual ~BaseGame();
	
	bool Init();
	void Load();
	void Run();
	void UnLoad();
	void DeInit();
	int Exit();
	
protected:
	virtual void OnInit() = 0;
	virtual void OnLoad() = 0;
	virtual void OnUpdate(const double deltaTime) = 0;
	virtual void OnRender() = 0;
	virtual void OnUnLoad() = 0;
	virtual void OnDeInit() = 0;
	
	const World & GetWorld();
	World & AccessWorld();
	
	const SystemHandler & GetSystem();
	SystemHandler & AccessSystem();
	
private:
	void PreUpdate();
	void Update();
	void PostUpdate();
	
	void PreRender();
	void Render();
	void PostRender();
	
	bool runGame;
};