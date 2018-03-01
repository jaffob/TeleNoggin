#pragma once
#include "openvr\openvr.h"

using namespace vr;

class TNOpenVR
{

public:

	IVRSystem * api;
	HmdError err;

public:

	TNOpenVR();
	~TNOpenVR();

	void init();
	void shutdown();

};