/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:28:53 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 17:58:10 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << LIGRN << j->getType() << " " << D << std::endl;
	std::cout << GREEN << i->getType() << " " << D << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

	std::cout << RED << k->getType() << " " << D << std::endl;
	k->makeSound();
	wrongMeta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete k;
	return 0;
}