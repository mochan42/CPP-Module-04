/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:48 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 18:50:37 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>

class	Dog : public Animal
{
	public:
		// CONSTRUCTORS - DESTRUCTOR
		Dog(); // Default constructor
		Dog(const Dog& other); // Default copy constructor
		~Dog(); // Destructor
		
		// OVERLOAD OPERATOR
		Dog&	operator=(const Dog& src); // Copy assignment operator called

		// MEMBER FUNCTIONS
		virtual void	makeSound(void) const;
	
	private:
		Brain*	_ptr;
};

#endif