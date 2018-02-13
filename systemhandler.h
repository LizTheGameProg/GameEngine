#pragma once

class SystemHandler
{
public:
	SystemHandler();
	~SystemHandler();
	
	bool Initialize();
	void DeInitialize();
	
	bool ShouldExit();
	double GetCurrentTime();
	void ProcessEvents();
};