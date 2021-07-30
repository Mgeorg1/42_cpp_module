#include "ScalarConversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Only one argument expected!\n";
		return (1);
	}
	ScalarConversion scalarConversion(argv[1]);
	scalarConversion.printConversions();
}