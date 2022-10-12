#include "Weapon.h"
#include "Player.h"
Weapon::Weapon(int damageMin, int damageMax, std::string name, int level, int buyValue, int sellValue, int rarity)
	: Player (name, level, buyValue, sellValue)
{
	this->damageMin = damageMin;
	this->damageMax = damageMax;
}
Weapon::~Weapon()
{


}
Weapon* Weapon::clone() const
{
	return new Weapon(*this);
}
std::string Weapon::toString()
{
	std::string str = std::to_string(this->damageMin) + " " + std::to_string(this->damageMax);

	return str;
} 