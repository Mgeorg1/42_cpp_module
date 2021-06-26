#include "FragTrap.hpp"

int		main()
{
	FragTrap a("Valkyrie");
	FragTrap b(a);
	a.attack("Fury");
	b.highFivesGuys();
}