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
	// nom	d�gats	pourcentage de drops
	char armes[5][3] {
		{"b�ton", 1, 7} ,
		{"�p�e", 3, 5} ,
		{"lance", 4, 4} ,
		{"master sword", 100, 0.2} ,
		{"shit", 0, 4}

	}

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
Weapon::Player() 
{



}