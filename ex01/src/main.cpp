/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:28:53 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 21:02:15 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

#define SIZE 6

int main()
{
	const Animal* animals_list[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		if (i < SIZE / 2)
			animals_list[i] = new Cat;
		else
			animals_list[i] = new Dog;
	}
	
	std::cout << PU << "\n----- INITIALIZATION OF IDEAS BEFORE THINKING ------" << D << "\n";

	animals_list[2]->printIdea(0);
	animals_list[2]->printIdea(49);
	animals_list[2]->printIdea(99);
	
	animals_list[4]->printIdea(0);
	animals_list[4]->printIdea(49);
	animals_list[4]->printIdea(99);
	
	std::cout << PU << "\n----- ANIMALS THINKING... ------" << D << "\n";
	std::cout << PU << "\n----- IDEAS OF ANIMALS AFTER THINKING ------" << D << "\n";
	animals_list[2]->setIdea(0, "I am hungry, I want my Sheba!");
	animals_list[2]->setIdea(49, "I will clean my paws!");
	animals_list[2]->setIdea(99, "hmm I want to jump on this desk!");
	
	animals_list[4]->setIdea(0, "I am hungry, I want my Frolics!");
	animals_list[4]->setIdea(49, "woof woof!");
	animals_list[4]->setIdea(99, "hmm I want to go outside and play with other dogs!");
	
	animals_list[2]->printIdea(0);
	animals_list[2]->printIdea(49);
	animals_list[2]->printIdea(99);
	
	animals_list[4]->printIdea(0);
	animals_list[4]->printIdea(49);
	animals_list[4]->printIdea(99);
	
	std::cout << "\n";
	
	std::cout << PU << "\n----- TEST OF COPY ------" << D << "\n";
	Cat c1;
	Cat c2;
	std::cout << BLA << "\nBefore copy" << D << "\n";
	c1.setIdea(97, "Hello I am a furry cat");
	c1.printIdea(97);
	c2.printIdea(97);
	std::cout << BLA << "\nAfter copy" << D << "\n";
	c2 = c1;
	c1.printIdea(97);
	c2.printIdea(97);
	std::cout << "\n";

	for (int j = 0; j < SIZE; j++)
		delete(animals_list[j]);
	std::cout << "\n";
	return 0;
}