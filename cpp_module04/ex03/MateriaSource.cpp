#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._materia[i])
			this->_materia[i] = copy._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &copy)
{
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

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
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

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
		{
			if (this->_materia[i]->getType() == type)
				return (this->_materia[i]->clone());
		}
	}
	return (NULL);
}
