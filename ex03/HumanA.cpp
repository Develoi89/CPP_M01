#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon) : weapon(weapon)
{
    name = str;
    return;
}
HumanA::~HumanA()
{
    return;
}
void attack();
void setWeapon(Weapon);