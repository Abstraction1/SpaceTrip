//
//	default
//	2017/11/08
//

#include "Objects.h"

#pragma once

/*!
* \file Ship.h
*
* \author default
*
*
*	Ship class
*	inherited Objects
*/

class Enemy: public Objects
{
public:
	Enemy(const int& xCoord, const int& yCoord);
	~Enemy();
};