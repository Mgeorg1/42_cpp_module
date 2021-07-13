#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iomanip>
#include <unistd.h>

int main()
{
	std::cout << "\n###############Test array of animals##################\n\n";
	Animal *animals[100];
	int i = 0;
	while (i < 50)
	{
		animals[i] = new Cat();
		animals[i]->makeSound();
		std::cout << "--------------------------------------------------------\n";
		i++;
	}
	sleep(2);
	while (i < 100)
	{
		animals[i] = new Dog();
		animals[i]->makeSound();
		std::cout << "--------------------------------------------------------\n";
		i++;
	}
	sleep(3);
	std::cout << "\n###############Delete array of animals################\n\n";
	for (i = 0; i < 100; i++)
	{
		delete (animals[i]);
		std::cout << "--------------------------------------------------------\n";
	}
	sleep(3);
	std::cout << "\n###############Test deep copies#######################\n\n";
	Cat cat0;
	for (int i = 0; i < 100; i++)
		cat0.setIdea(i, "Example");
	Cat cat1 = cat0;
	Cat cat2(cat0);
	std::string *ideas0 = cat0.getIdeas();
	std::string *ideas1 = cat1.getIdeas();
	std::string *ideas2 = cat2.getIdeas();
	std::cout << std::endl;
	sleep(4);
	for (int i = 0; i < 100; i++)
	{
		std::cout << "i d_cat0: " << std::setw(3) << i << "| idea: ";
		if (ideas0[i].length() > 10)
			std::cout << ideas0[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << ideas0[i];
		std::cout << "| id_cat1: " << std::setw(3) << i << "| idea: ";
		if (ideas1[i].length() > 10)
			std::cout << ideas1[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << ideas1[i];
		std::cout << "| id_cat2: " << std::setw(3) << i << "| idea: ";
		if (ideas2[i].length() > 10)
			std::cout << ideas2[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << ideas2[i];
		std::cout << std::endl <<"-----------------------------------------------------------------------------------------------\n";
	}
	std::cout << "Cat0 brain addr: " << cat0.getBrainAddr() << std::endl;
	std::cout << "Cat1 brain addr: " << cat1.getBrainAddr() << std::endl;
	std::cout << "Cat2 brain addr: " << cat2.getBrainAddr() << std::endl;
	std::cout << std::endl;
	sleep(4);
	Dog dog0;
	for (int i = 0; i < 100; i++)
		dog0.setIdea(i, "Example");
	Dog dog1 = dog0;
	Dog dog2(dog0);
	ideas0 = dog0.getIdeas();
	ideas1 = dog1.getIdeas();
	ideas2 = dog2.getIdeas();
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << "id_dog0: " << std::setw(3) << i << "| idea: ";
		if (ideas0[i].length() > 10)
			std::cout << ideas0[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << ideas0[i];
		std::cout << "| id_dog1: " << std::setw(3) << i << "| idea: ";
		if (ideas1[i].length() > 10)
			std::cout << ideas1[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << ideas1[i];
		std::cout << "| id_dog2: " << std::setw(3) << i << "| idea: ";
		if (ideas2[i].length() > 10)
			std::cout << ideas2[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << ideas2[i];
		std::cout << std::endl <<"-----------------------------------------------------------------------------------------------\n";
	}
	std::cout << "Dog0 brain addr: " << dog0.getBrainAddr() << std::endl;
	std::cout << "Dog1 brain addr: " << dog1.getBrainAddr() << std::endl;
	std::cout << "Dog2 brain addr: " << dog2.getBrainAddr() << std::endl;
}