/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:48 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 21:20:39 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class	Animal
{
	public:
		// CONSTRUCTORS - DESTRUCTOR
		Animal(); // Default constructor
		Animal(const Animal& other); // Default copy constructor
		virtual ~Animal(); // Destructor
		
		// OVERLOAD OPERATOR
		Animal&	operator=(const Animal& src); // Copy assignment operator called
		
		// GETTERS - SETTERS
		std::string		getType(void) const;

		// MEMBER FUNCTIONS
		virtual void	makeSound(void) const = 0; // pure virtual function : cannot be instantiated
		virtual void	setIdea(int index, std::string idea) const = 0; // pure virtual function : cannot be instantiated
		virtual void	printIdea(int index) const = 0; // pure virtual function : cannot be instantiated

	protected:
		std::string		_type;
};

#endif