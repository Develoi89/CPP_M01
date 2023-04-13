#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie	*Horde = new Zombie[N];
    int     index;
    for(index = 0; index < N; index++ )
    {
        Horde[index] = Zombie(name);
        Horde[index].announce();
    }
    return (Horde);
}