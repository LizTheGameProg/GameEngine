#pragma once

class ProcessHandler
{
public:
	ProcessHandler();
	~ProcessHandler();
	
	bool Initialize();
	void DeInitialize();
	
	bool ShouldExit();
	
	void ProcessEvents();
	double GetCurrentTime();
	
private:
	bool shouldExit;
};