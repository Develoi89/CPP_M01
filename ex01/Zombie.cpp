#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return;
}

Zombie::Zombie(std::string name)
{
    Name = name;
}

Zombie::~Zombie(void)
{
    std::cout << Name << ": deleted..." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}