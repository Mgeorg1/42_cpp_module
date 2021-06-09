#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class Pony
{
	private:
		int			age;
		std::string	color;
		std::string	name;
	public:
		Pony();
		~Pony();
		void		setData(int newAge, std::string newName, std::string newColor);
		int			getAge();
		std::string	getColor();
		std::string	getName();
};

#endif
