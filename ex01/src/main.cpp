/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:28:53 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 20:29:44 by mochan           ###   ########.fr       */
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
	
	animals_list[2]->printIdea(0);
	animals_list[2]->printIdea(49);
	animals_list[2]->printIdea(99);
	
	animals_list[4]->printIdea(0);
	animals_list[4]->printIdea(49);
	animals_list[4]->printIdea(99);
	
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
	
	for (int j = 0; j < SIZE; j++)
		delete(animals_list[j]);
	return 0;
}