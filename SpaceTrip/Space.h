//
//	default
//	2017/11/08
//

#pragma once

#include "Objects.h"

/*!
* \file Cash.h
*
* \author default
*
*
*	Space class
*	inherited Objects
*/

class Space : public Objects
{
public:
	Space(const int& xCoord, const int& yCoord);
	~Space();
};
