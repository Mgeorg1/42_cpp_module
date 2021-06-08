#include "phonebook.hpp"
#define NOT_NUMERIC 2

Phonebook::Phonebook()
{
	this->count = 0;
}

void	Phonebook::addContact()
{
	if (this->count >= 8)
	{
		std::cout << "ERROR: Phonebook is full!" << std::endl;
		return ;
	}
	this->contacts[this->count].setContactData();
	this->count++;
}

void	Phonebook::search()
{
	int 		i;
	int			success;
	std::string	tmp;

	if (this->count == 0)
	{
		std::cout << "ERROR: Phonebook is empty!" << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	i = -1;
	while (++i < this->count)
	{
		std::cout << "---------------------------------------------"<< std::endl;
		std::cout << "|";
		tmp = std::to_string(i + 1);
		if (tmp.length() > 10)	
			std::cout << tmp.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << tmp;
		tmp = this->contacts[i].getFirstName();
		std::cout << "|";
		if (tmp.length() > 10)	
			std::cout << tmp.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << tmp;
		std::cout << "|";
		tmp = this->contacts[i].getLastName();
		if (tmp.length() > 10)	
			std::cout << tmp.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << tmp;
		std::cout << "|";
		tmp = this->contacts[i].getNickname();
		if (tmp.length() > 10)	
			std::cout << tmp.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << tmp;
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
	success = 0;
	while (!success)
	{
		std::cout << "Please enter index:\n> ";
		getline(std::cin, tmp);
		if (!std::cin)
			exit(0);
		for (i = 0; i < tmp.length(); i++)
		{
			if (std::isdigit(tmp[i]) == false)
			{
				std::cout << "ERROR: Please enter NUMERIC value!" << std::endl;
				success = NOT_NUMERIC;
				break ;
			}
		}
		if (success == NOT_NUMERIC)
		{
			success = 0;
			continue ;
		}
		i = atoi(tmp.c_str()) - 1;
		if (i >= this->count || i < 0)
		{
			std::cout << "ERROR: Wrong index!" << std::endl;
			continue ;
		}
		success = 1;
	}
	std::cout << std::endl;
	std::cout << "First name: " << this->contacts[i].getFirstName() << std::endl;
	std::cout << "Last name: " << this->contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[i].getNickname() << std::endl;
	std::cout << "Login: " << this->contacts[i].getLogin() << std::endl;
	std::cout << "Postal address: " << this->contacts[i].getPostalAddress() << std::endl;
	std::cout << "Email address: " << this->contacts[i].getEmail() << std::endl;
	std::cout << "Phone number: " << this->contacts[i].getPhone() << std::endl;
	std::cout << "Bithday date: " << this->contacts[i].getBirthdayDate() << std::endl;
	std::cout << "Favorite meal: " << this->contacts[i].getFavoriteMeal() << std::endl;
	std::cout << "Underwear color: " << this->contacts[i].getUnderwearColor() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[i].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}