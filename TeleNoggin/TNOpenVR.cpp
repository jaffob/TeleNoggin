#include "TNOpenVR.h"

TNOpenVR::TNOpenVR()
{
}

TNOpenVR::~TNOpenVR()
{
}

void TNOpenVR::init()
{
	api = VR_Init(&err, VRApplication_Overlay);
}

void TNOpenVR::shutdown()
{
}
