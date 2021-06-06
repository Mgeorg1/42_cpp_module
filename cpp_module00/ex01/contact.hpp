#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <iomanip>

class	Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string nickname;
		std::string	login;
		std::string	postalAddress;
		std::string	emailAdress;
		std::string	phoneNumber;
		std::string	bithdayDate;
		std::string favoriteMeal;
		std::string	underwearColor;
		std::string	darkestSecret;
	public:
		void	setContactData();
};

#endif