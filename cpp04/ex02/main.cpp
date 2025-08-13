/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:01:41 by erantala          #+#    #+#             */
/*   Updated: 2025/08/13 17:16:00 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* array[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal *wrong = new WrongCat();
	std::cout << std::endl;
	std::cout << wrong->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	wrong->makeSound();

	std::cout << std::endl;
	const Animal* clone(j);
	clone->makeSound();
	std::cout << std::endl;
	delete wrong;
	delete j;
	delete i;
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete array[i];
	return 0;
	}