#pragma once

template<class T>
class Handler
{
public:
	constexpr Handler(){}
	
	bool Initialize();
	void DeInitialize();
	
	virtual bool OnInitialize() = 0;
	virtual void OnDeInitialize() = 0;
	
	static T const & Get();
	static T & Access();

private:
	static constexpr T * instance = new T();
	bool isInitialized = false;
};

#include "handler.hpp"