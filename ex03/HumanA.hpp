#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon      &weapon;
    public:
        HumanA(std::string str, Weapon &wpn);
        ~HumanA();
        void attack();
        void setWeapon(Weapon &wpn);
};

# endif