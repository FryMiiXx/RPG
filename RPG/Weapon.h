#pragma once
#include "Player.h"
class Weapon :

{
	private
		int damageMin;
	int damageMax;

public:
	Weapon(int damageMin = 0, int damageMax = 0,
		std::string name = "NONE", int level = 0, int buyValue = 0,
		int sellValue = 0);
	virtual ~Weapon();

	//Functions
	std::string toString();


};

