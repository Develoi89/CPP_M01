#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    name = str;
    return;
}
HumanB::~HumanB()
{
    return;
}
void HumanB::attack()
{
    if(weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " attacks without weapon." << std::endl;
}
void HumanB::setWeapon(Weapon &wpn)
{
    weapon = &wpn;
    return;
}