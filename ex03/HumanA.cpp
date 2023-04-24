#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &wpn) : weapon(wpn)
{
    name = str;
    return;
}
HumanA::~HumanA()
{
    return;
}
void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
void HumanA::setWeapon(Weapon &wpn)
{
    weapon = wpn;
    return;
}