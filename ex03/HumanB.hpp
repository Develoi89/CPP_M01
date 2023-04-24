#ifndef HUMANB_HPP
# define HUMANAB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB(std::string);
        ~HumanB();
        void attack();
        void setWeapon(Weapon);
};

# endif