#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"

class	Phonebook
{
	private:
		Contact contacts[8];
		int count;
	public:
		Phonebook();
		void	search();
		void	addContact();

};

#endif