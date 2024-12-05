/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:14:03 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/21 12:46:29 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	{
		Dog dog;
		Cat cat;

		std::cout << std::endl << "Assignement operator" << std::endl;
		Dog & dog_ref = dog;
		Cat & cat_ref = cat;

		std::cout << std::endl << "Copy assignement" << std::endl;
		Dog dog_copy(dog_ref);
		Cat cat_copy(cat_ref);

		std::cout << std::endl << "Assignement operator of copy" << std::endl;
		Dog &dog_copy_ref = dog_copy;
		Cat &cat_copy_ref = cat_copy;
		(void)dog_copy_ref;
		(void)cat_copy_ref;
	}
	std::cout << std::endl << std::endl;
	
	Animal *(animals[4]);

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		animals[i]->makeSound();
		std::cout << std::endl;
		if (Dog *dog = dynamic_cast<Dog*>(animals[i]))
		{
			Brain *brain = dog->getBrain();
			std::string *array_thoughts = brain->getIdeas();
			for (int y = 0; y < 100; y++)
				std::cout << array_thoughts[y] << "   ";
		}
		else if (Cat *cat = dynamic_cast<Cat*>(animals[i]))
		{
			Brain *brain = cat->getBrain();
			std::string *array_thoughts = brain->getIdeas();
			for (int y = 0; y < 100; y++)
				std::cout << array_thoughts[y] << "   ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	
	
	std::cout << std::endl << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
	return (0);	
}