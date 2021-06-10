#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "Human was born!\n";
}

HumanA::~HumanA()
{
	std::cout << "Human was killed!\n";
}

void	HumanA::attack()
{
	std::cout << "Human " << this->_name << " attackes with " << this->_weapon.getType() << "\nBang!\n";
}