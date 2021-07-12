#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "\n###################################\n\n";
	Cat k;
	Cat k1(k);
	Dog l;
	Dog l1(l);
	std::cout << "\n###################################\n\n";
	k1 = k;
	l1 = l;
	std::cout << "\n###################################\n\n";
	const WrongAnimal *meta1 = new WrongAnimal();
	const WrongAnimal *i1 = new WrongCat();
	std::cout << i1->getType() << " " << std::endl;
	i1->makeSound();
	meta1->makeSound();
	std::cout << "\n###################################\n\n";
	delete (meta);
	delete (j);
	delete (i);
	delete (meta1);
	delete (i1);
}