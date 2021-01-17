#include <iostream>

#include "strategy.h"
using namespace std;


class Customer
{
public:
	Customer(StrategyWeapon *weapon_type) :weapon(weapon_type)
	{}

	void changeWeapon(StrategyWeapon *weapon_NewType)
	{
		weapon = weapon_NewType;
	}

	void fighting()
	{
		weapon->use();
	}


private:
	StrategyWeapon *weapon;

};

