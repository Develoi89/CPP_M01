#include "Harl.hpp"

int	main(int argc, char **argv)
{
	int			i;
	Harl		harl;

	if(argc == 1)
	{
		harl.complain("jopelines");
		exit(0);
	}

	std::string tmp = argv[1];
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(i = 0; i < 4; i++)
        if(tmp.compare(str[i]) == 0)
			break;
	if(argc < 2 || i == 4)
		harl.complain("jopelines");
	for(; i < 4; i++)
	{
		std::cout << "[" << str[i] << "]" << std::endl;
		harl.complain(str[i]);
		std::cout << std::endl;
	}
	return 0;
}