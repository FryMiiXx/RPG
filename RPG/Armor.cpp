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