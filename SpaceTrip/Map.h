//
//	default
//	2017/11/08
//

#pragma once

#include <vector>

#include "Objects.h"

/*!
 * \file Map.h
 *
 * \author default
 * 
 *
 *	Map Class
 */

class Map
{
public:

	Map();
	void createWorld();
private:

	std::vector<std::vector <char> > world_;

};