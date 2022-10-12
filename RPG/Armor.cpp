#include "Armor.h"
#include "Player.h"
Armor::Armor(int type, int defense, std::string name, int level, int buyValue, int sellValue, int rarity)
	: Player(name, level, buyValue, sellValue)
{
	this->type = type;
	this->defense = defense;
}
Armor::~Armor()
{
		// nom	défense	pourcentage de drops
		char armure[6][3] = {
			{"blastron", 1, 7} ,
			{"casque", 3, 5} ,
			{"bouclier", 4, 4} ,
			{"bûche", 100, 0.2} ,
			{"shit", 0, 4} ,
			{"gantelet", 2, 6}

		}	
}
Armor* Armor::clone(const)
{
	return new Armor(*this);
}
std::string Armor::toString()
{
	std::string str = std::to_string(this->type) + " " + std::to_string(this->defense);

	return str;
}