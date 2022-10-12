#pragma once
#include "Player.h"
class Armor :

{
	private
		int type;
	int defense;

public:
	Armor(int damageMin = 0, int damageMax = 0,
		std::string name = "NONE", int level = 0, int buyValue = 0,
		int sellValue = 0);
	virtual ~Armor();

	//Functions
	std::string toString();


};

#pragma once
