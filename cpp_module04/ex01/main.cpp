#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
	std::cout << "\n###############Test array of animals##################\n\n";
	Animal *animals[100];
	int i = 0;
	while (i < 50)
	{
		animals[i] = new Cat();
		std::cout << "--------------------------------------------------------\n";
		i++;
	}
	while (i < 100)
	{
		animals[i] = new Dog();
		std::cout << "--------------------------------------------------------\n";
		i++;
	}
	std::cout << "\n###############Delete array of animals################\n\n";
	for (i = 0; i < 100; i++)
	{
		delete (animals[i]);
		std::cout << "--------------------------------------------------------\n";
	}
	std::cout << "\n###############Test deep copies#######################\n\n";
	Cat cat0;
	Cat cat1 = cat0;
	Cat cat2(cat0);
	std::cout << "Cat0 brain addr: " << cat0.getBrain() << std::endl;
	std::cout << "Cat1 brain addr: " << cat1.getBrain() << std::endl;
	std::cout << "Cat2 brain addr: " << cat2.getBrain() << std::endl;
	std::cout << std::endl;
	Dog dog0;
	Dog dog1 = dog0;
	Dog dog2(dog0);
	std::cout << "Dog0 brain addr: " << dog0.getBrain() << std::endl;
	std::cout << "Dog1 brain addr: " << dog1.getBrain() << std::endl;
	std::cout << "Dog2 brain addr: " << dog2.getBrain() << std::endl;
	while(1);
}