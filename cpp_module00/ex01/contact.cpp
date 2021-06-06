#include "contact.hpp"

void	Contact::setContactData()
{
	std::string line;
	std::cout << "Please, input a first name" << std::endl;
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->firstName = line;
	std::cout << "Please, input a last name" << std::endl;
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->lastName = line;
	std::cout << "Please, input a nickname" << std::endl;
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->nickname = line;
	std::cout << "Please, input a login" << std::endl;
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->login = line;
	std::cout << "Please, input a postal address" << std::endl;
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->postalAddress = line;
	std::cout << "Please, input a email address" << std::endl;
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->emailAdress = line;
	std::cout << "Please, input a phone number" << std::endl;
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->phoneNumber = line;
	std::cout << "Please, input a birthday date" << std::endl;
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->bithdayDate = line;
	std::cout << "Please, input a favorite meal" << std::endl;
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->favoriteMeal = line;
	std::cout << "Please, input a underwear color" << std::endl;
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->underwearColor = line;
	std::cout << "Please, input a darkest secret" << std::endl;
	getline(std::cin, line);
	if (!std::cin)
		exit(0);
	this->darkestSecret = line;
}