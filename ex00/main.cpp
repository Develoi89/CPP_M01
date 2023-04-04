#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie  *zombie1 = newZombie("Heap zombie");
    zombie1->announce();
    randomChump("Stack zombie");
    delete (zombie1);
    return (0);
}