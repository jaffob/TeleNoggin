// TeleNoggin.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "TNLibOVR.h"

int main()
{
	TNLibOVR * ovr = new TNLibOVR();
	ovr->init();
	printf("%s", ovr->getLastErrorString());

	return 0;
}

