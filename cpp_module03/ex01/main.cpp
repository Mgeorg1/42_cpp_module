#include "ScavTrap.hpp"

int	main()
{
	ScavTrap a("Fury");

	a.attack("target");
	a.guardGate();
	ScavTrap b(a);
}