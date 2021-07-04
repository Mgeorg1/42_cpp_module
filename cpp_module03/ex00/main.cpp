#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Default");
	ClapTrap b("Fury");
	a = b;
	ClapTrap c("Valkyrie");
	ClapTrap d(c);

	a.attack("Valkyrie");
	d.takeDamage(5);
	d.attack("Fury");
	d.attack("Fury");
	d.attack("Fury");
	d.attack("Fury");
	d.attack("Fury");
	d.attack("Fury");
	d.attack("Fury");
	d.attack("Fury");
	d.attack("Fury");
	d.attack("Fury");
	d.attack("Fury");
	a.takeDamage(8);
	d.takeDamage(3);
	d.beRepaired(10);
	d.attack("Fury");
	a.takeDamage(3);
}