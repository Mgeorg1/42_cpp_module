#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_materia[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	MateriaSource &operator=(MateriaSource const &copy);
	~MateriaSource();
	
	void learnMateria(AMateria *m);
	AMateria *createMateria(std::string const &type);
};

#endif