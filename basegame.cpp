#include "basegame.h"


#include "string"
#include "vector"

#include "processhandler.h"
ProcessHandler process;

// Game World: very basic atm
World world;

// Wrapper for platform specific stuff
SystemHandler system;

double msPerUpdate = 1.0/60.0;

void handleStartUpArgs(int argc, char** argv)
{
	// setup the arguements into a dynamic array of strings
	std::vector<std::string> args = std::vector<std::string>();
	for(int i = 0; i < argc; i++)
	{
		args.push_back(std::string(argv[i]));
	}
	
	
}

BaseGame::BaseGame(int argc, char** argv)
	: runGame(true)
{
	handleStartUpArgs(argc, argv);
}

BaseGame::~BaseGame()
{
	
}

bool BaseGame::Init()
{
	process.Initialize();
	OnInit();
}

void BaseGame::Load()
{
	OnLoad();
}

void BaseGame::Run()
{
	double current = 0.0;
	double elapsed = 0.0;
	unsigned int updateIterations = 0;
	const unsigned int maxUpdateIterations = 5;
	double lag = 0.0;
	double previous = process.GetCurrentTime();
	while(runGame && !process.ShouldExit())
	{
		current = process.GetCurrentTime();
		elapsed = current - previous;
		previous = current;
		lag += elapsed;
		
		process.ProcessEvents();
		
		updateIterations = 0;
		while(lag >= msPerUpdate && updateIterations < maxUpdateInterations)
		{
			Update();
			lag -= msPerUpdate;
			updateIterations++;
		}
		Render(lag / msPerUpdate);
	}
}

void BaseGame::UnLoad()
{
	OnUnLoad();
}

void BaseGame::DeInit()
{
	OnDeInit();
	process.Terminate();
}

int BaseGame::Exit()
{
	return 0;
}

void BaseGame::PreUpdate()
{
	
}

void BaseGame::Update()
{
	PreUpdate();
	OnUpdate(msPerUpdate);
	PostUpdate();
}

void BaseGame::PostUpdate()
{
	
}

void BaseGame::PreRender()
{
	
}

void BaseGame::Render()
{
	PreRender();
	OnRender();
	PostRender();
}

void BaseGame::PostRender()
{
	
}