#include "systemhandler.h"

#include "processhandler.h"
ProcessHandler processHandler;

SystemHandler::SystemHandler()
{
	
}

SystemHandler::~SystemHandler()
{
	
}

bool SystemHandler::Initialize()
{
	bool ret = false;
	ret = processHandler.Initialize();
	return ret;
}

void SystemHandler::DeInitialize()
{
	processHandler.DeInitialize();
}

bool SystemHandler::ShouldExit()
{
	return processHandler.ShouldExit();
}

double SystemHandler::GetCurrentTime()
{
	return processHandler.GetCurrentTime();
}

void SystemHandler::ProcessEvents()
{
	processHandler.ProcessEvents();
}