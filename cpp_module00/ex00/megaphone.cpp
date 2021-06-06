#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int i;
	int j;
	char c;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 0;
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
			{
				c = std::toupper(argv[i][j]);
				std::cout << c;
			}
		}
	}
	std::cout << std::endl;
	return (0);
}
