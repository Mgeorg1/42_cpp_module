#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::Character(std::string const &name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	this->_name = name;
}

Character::Character(Character const &copy)
{
	this->_name = copy.getName();
	for (int i = 0; i < 4; i++)
	{
		if (copy._materia[i])
			this->_materia[i] = copy._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
}

Character& Character::operator=(Character const &copy)
{
	this->_name = copy.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
		{
			delete this->_materia[i];
			if (copy._materia[i])
				this->_materia[i] = copy._materia[i]->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return (*this);
}

void	Character::equip(AMateria *m)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			break ;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
		this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 4 && idx >= 0)
	{
		if (this->_materia[idx])
			this->_materia[idx]->use(target);
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

std::string const &Character::getName() const
{
	return (_name);
}
