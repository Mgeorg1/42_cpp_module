#include "contact.hpp"

void	Contact::setContactData()
{
	std::string line;
	std::cout << "Please, input a first name:\n> ";
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->firstName = line;
	std::cout << "Please, input a last name:\n> ";
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->lastName = line;
	std::cout << "Please, input a nickname:\n> ";
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->nickname = line;
	std::cout << "Please, input a login:\n> ";
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->login = line;
	std::cout << "Please, input a postal address:\n> ";
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->postalAddress = line;
	std::cout << "Please, input a email address:\n> ";
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->emailAdress = line;
	std::cout << "Please, input a phone number:\n> ";
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->phoneNumber = line;
	std::cout << "Please, input a birthday date:\n> ";
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->bithdayDate = line;
	std::cout << "Please, input a favorite meal:\n> ";
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->favoriteMeal = line;
	std::cout << "Please, input a underwear color:\n> ";
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->underwearColor = line;
	std::cout << "Please, input a darkest secret:\n> ";
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->darkestSecret = line;
}

std::string	Contact::getBirthdayDate()
{
	return (this->bithdayDate);
}

std::string	Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}

std::string	Contact::getEmail()
{
	return (this->emailAdress);
}

std::string	Contact::getFavoriteMeal()
{
	return (this->favoriteMeal);
}

std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getLogin()
{
	return (this->lastName);
}

std::string	Contact::getNickname()
{
	return (this->nickname);
}

std::string	Contact::getPhone()
{
	return (this->phoneNumber);
}

std::string	Contact::getPostalAddress()
{
	return (this->postalAddress);
}

std::string	Contact::getUnderwearColor()
{
	return (this->underwearColor);
}