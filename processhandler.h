#pragma once

class ProcessHandler
{
public:
	ProcessHandler();
	~ProcessHandler();
	
	bool Initialize();
	void Terminate();
	
	bool ShouldExit();
	
	void ProcessEvents();
	double GetCurrentTime();
	
private:
	bool shouldExit;
};