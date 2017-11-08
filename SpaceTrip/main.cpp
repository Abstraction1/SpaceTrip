//
//	default
//	2017/11/08
//

#include <iostream>
#include <vector>
#include <conio.h>

#include "Objects.h"
#include "Space.h"
#include "Ship.h"
#include "Cash.h"
#include "Enemy.h"
#include "Map.h"
#include "constants.h"

int main()
{
	Objects* space_;
	Objects* ship_;
	Objects* cash_;
	Objects* enemy_;

	std::vector <Objects* > world;

	Space space = Space(SPACE_CONST::__WIDTH, SPACE_CONST::__HEIGHT);
	Ship ship = Ship(SHIP_CONST::__X_START, SHIP_CONST::__Y_START);
	Cash cash = Cash(CASH_CONST::__X_START, CASH_CONST::__Y_START);
	Enemy enemy = Enemy(ENEMY_CONST::__X_START, ENEMY_CONST::__Y_START);

	space_ = &space;
	ship_ = &ship;
	cash_ = &cash;
	enemy_ = &enemy;
	
	world.push_back(space_);
	world.push_back(ship_);
	world.push_back(cash_);
	world.push_back(enemy_);

	return EXIT_SUCCESS;;
}