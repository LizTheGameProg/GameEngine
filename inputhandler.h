#pragma once
#include "handler.h"

class InputHandler : public Handler<InputHandler>
{
public:
	constexpr InputHandler();
	
	bool OnInitialize();
	void OnDeInitialize();

};