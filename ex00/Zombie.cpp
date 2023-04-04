#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return;
}

Zombie::Zombie(std::string name)
{
    Name = name;
}

void Zombie::announce(void)
{
    std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}