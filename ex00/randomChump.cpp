#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie szombie(name);
    szombie.announce();
}