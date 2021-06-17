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
		std::cout << "\x1b[31mERROR:\x1b[0m Phonebook is full!" << std::endl;
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
		std::cout << "\x1b[31mERROR:\x1b[0m Phonebook is empty!" << std::endl;
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
		std::cout << "Please enter \x1b[32mindex\x1b[0m to display the contact's data or \x1b[32m0\x1b[0m to go back:\n> ";
		getline(std::cin, tmp);
		if (!std::cin)
			exit(0);
		for (i = 0; i < tmp.length(); i++)
		{
			if (std::isdigit(tmp[i]) == false)
			{
				std::cout << "\x1b[31mERROR:\x1b[0m Please enter NUMERIC value!" << std::endl;
				success = NOT_NUMERIC;
				break ;
			}
		}
		if (success == NOT_NUMERIC)
		{
			success = 0;
			continue ;
		}
		i = atoi(tmp.c_str());
		if (i == 0)
			return ;
		i -= 1;
		if (i >= this->count || i < 0)
		{
			std::cout << "\x1b[31mERROR:\x1b[0m Wrong index!" << std::endl;
			continue ;
		}
		success = 1;
	}
	std::cout << std::endl;
	std::cout << "\x1b[37;1mFirst name:\x1b[0m      " << this->contacts[i].getFirstName() << std::endl;
	std::cout << "\x1b[37;1mLast name:\x1b[0m       " << this->contacts[i].getLastName() << std::endl;
	std::cout << "\x1b[37;1mNickname:\x1b[0m        " << this->contacts[i].getNickname() << std::endl;
	std::cout << "\x1b[37;1mLogin:\x1b[0m           " << this->contacts[i].getLogin() << std::endl;
	std::cout << "\x1b[37;1mPostal address:\x1b[0m  " << this->contacts[i].getPostalAddress() << std::endl;
	std::cout << "\x1b[37;1mEmail address:\x1b[0m   " << this->contacts[i].getEmail() << std::endl;
	std::cout << "\x1b[37;1mPhone number: \x1b[0m   " << this->contacts[i].getPhone() << std::endl;
	std::cout << "\x1b[37;1mBithday date: \x1b[0m   " << this->contacts[i].getBirthdayDate() << std::endl;
	std::cout << "\x1b[37;1mFavorite meal: \x1b[0m  " << this->contacts[i].getFavoriteMeal() << std::endl;
	std::cout << "\x1b[37;1mUnderwear color: \x1b[0m" << this->contacts[i].getUnderwearColor() << std::endl;
	std::cout << "\x1b[37;1mDarkest secret: \x1b[0m " << this->contacts[i].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}