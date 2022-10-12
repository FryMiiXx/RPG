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
	int head = 1;
	int body = 2;
	int leg = 3;
	int feet = 4;
		//type nom	défense	pourcentage de drops
		char armure[6][4] {
			{body, "blastron", 1, 7} ,
			{head, "casque", 3, 5} ,
			{feet, "bouclier", 4, 4} ,
			{body, "bûche", 1, 5} ,
			{leg, "shit", 0, 4} ,
			{feet, "gantelet", 2, 6}

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
Armor::Player()
{

}