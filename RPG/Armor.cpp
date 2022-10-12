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
std::string Armor::toString()
{
	std::string str = std::to_string(this->damageMin) + " " + std::to_string(this->damageMax);

	return str;
}