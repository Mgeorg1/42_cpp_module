#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain &operator=(Brain const &copy);
	Brain(Brain const &copy);
	~Brain();
};

#endif