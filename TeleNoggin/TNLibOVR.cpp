#include "TNLibOVR.h"

TNLibOVR::TNLibOVR()
{
}

TNLibOVR::~TNLibOVR()
{
}

bool TNLibOVR::init()
{
	ovrInitParams params = { 0 };
	err = ovr_Initialize(&params);

	if (OVR_SUCCESS(err))
	{
		err = ovr_Create(&hmd, nullptr);
		return OVR_SUCCESS(err);
	}

	return false;
}

void TNLibOVR::shutdown()
{
}

char * TNLibOVR::getLastErrorString()
{
	ovr_GetLastErrorInfo(&errinf);
	return errinf.ErrorString;
}
