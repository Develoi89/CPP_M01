#include "Harl.hpp"

Harl::Harl(void)
{
    return;
}

Harl::~Harl(void)
{
    return;
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain( std::string level )
{
    int         i;
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for(i = 0; i < 4; i++)
        if(level.compare(str[i]) == 0)
        {
            (this->*f[i])();
            break;
        }
    if(i == 4)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}