#pragma once
#include "handler.h"

class InputHandler : public Handler<InputHandler>
{
public:
	InputHandler();
	~InputHandler();
	
	bool OnInitialize();
	void OnDeInitialize();

};