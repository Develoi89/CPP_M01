#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie *Horde = zombieHorde(4, "Horde");
    delete[] Horde;
    return (0);
}