#pragma once

template<class T>
class Handler
{
public:
	static bool Create();
	static void Destroy();
	
	static T const & const Get();
	static T & const Access();

private:
	static T * instance = nullptr;
};

#include "handler.hpp"