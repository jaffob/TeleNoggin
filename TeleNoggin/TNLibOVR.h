#pragma once
#include "LibOVR\OVR_CAPI.h"

class TNLibOVR
{

public:

	ovrSession hmd;

	ovrResult err;
	ovrErrorInfo errinf;

public:

	TNLibOVR();
	~TNLibOVR();

	bool init();
	void shutdown();

	char * getLastErrorString();

};
