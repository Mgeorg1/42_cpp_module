#include "Pony.hpp"

void	 ponyOnTheStack()
{
	Pony	pony;

	pony.setData(3, "Flattershy", "Yellow");
	std::cout << "H..Hello! My name is " << pony.getName() << ". And I'm " << pony.getAge() << " years old.\n";
	std::cout << "My color is " << pony.getColor() << ".\n";
}

void	 ponyOnTheHeap()
{
	Pony	*pony;

	pony = new Pony();
	pony->setData(4, "Pinky Pie", "Pink");
	std::cout << "Hi! Nice to meet you! My name is " << pony->getName() << ". I'm " << pony->getAge() << " years old.\n";
	std::cout << "As you can see, my color is " << pony->getColor() << ".\n";
	delete (pony);
}

int 	main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}