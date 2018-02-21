#pragma once
#include "handler.h"

class SystemHandler : public Handler<SystemHandler>
{
public:
	SystemHandler();
	~SystemHandler();
	
	bool OnInitialize();
	void OnDeInitialize();
	
	bool ShouldExit();
	double GetCurrentTime();
	void ProcessEvents();
};