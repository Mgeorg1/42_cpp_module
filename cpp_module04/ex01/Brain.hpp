#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
private:
	std::string *ideas;
public:
	Brain();
	Brain &operator=(Brain const &copy);
	Brain(Brain const &copy);
	~Brain();
	std::string *getIdeas();
	void	setIdea(int id, std::string const &idea);
};

#endif