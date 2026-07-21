#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>

int main()
{
	const Animal* i[10];

	for (int k = 0; k < 5; k++)
		i[k] = new Dog();
	for (int k = 5; k < 10; k++)
		i[k] = new Cat();

	for (int k = 0; k < 10; k++)
	{
		std::cout << i[k]->getType() << " " << std::endl;
		i[k]->makeSound();
	}

	for (int k = 0; k < 10; k++)
		delete i[k];

	Dog dog1;
	dog1.getBrain().setIdea(0, "Play fetch");
	dog1.getBrain().setIdea(1, "Chase squirrels");
	dog1.getBrain().setIdea(2, "Eat food");

	Dog dog2;
	dog2.getBrain().setIdea(0, "Dig hole");
	dog2 = dog1;
	dog2.getBrain().setIdea(0, "Modified idea");

	std::cout << "Dog1 Idea 0: " << dog1.getBrain().getIdea(0) << std::endl;
	std::cout << "Dog2 Idea 0: " << dog2.getBrain().getIdea(0) << std::endl;

	Dog dog3(dog1);
	std::cout << "Dog3 Idea 0: " << dog3.getBrain().getIdea(0) << std::endl;
	std::cout << "Dog3 Idea 1: " << dog3.getBrain().getIdea(1) << std::endl;

	dog3.getBrain().setIdea(0, "Another modification");
	std::cout << "Dog1 Idea 0: " << dog1.getBrain().getIdea(0) << std::endl;
	std::cout << "Dog3 Idea 0: " << dog3.getBrain().getIdea(0) << std::endl;

	Cat cat1;
	cat1.getBrain().setIdea(0, "Nap");
	cat1.getBrain().setIdea(1, "Hunt mice");

	std::cout << "Cat1 ideas:" << std::endl;
	std::cout << "  Idea 0: " << cat1.getBrain().getIdea(0) << std::endl;
	std::cout << "  Idea 1: " << cat1.getBrain().getIdea(1) << std::endl;

	Animal* animals[10];

	for (int k = 0; k < 5; k++)
		animals[k] = new Dog();
	for (int k = 5; k < 10; k++)
		animals[k] = new Cat();

	for (int k = 0; k < 10; k++)
	{
		std::cout << animals[k]->getType() << ": ";
		animals[k]->makeSound();
	}

	for (int k = 0; k < 10; k++)
		delete animals[k];

	return 0;
}