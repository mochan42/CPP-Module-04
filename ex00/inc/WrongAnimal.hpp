/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:49:28 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 15:49:33 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class	WrongAnimal
{
	public:
		// CONSTRUCTORS - DESTRUCTOR
		WrongAnimal(); // Default constructor
		WrongAnimal(const WrongAnimal& other); // Default copy constructor
		virtual ~WrongAnimal(); // Destructor
		
		// OVERLOAD OPERATOR
		WrongAnimal&	operator=(const WrongAnimal& src); // Copy assignment operator called
		
		// GETTERS - SETTERS
		std::string		getType(void) const;

		// MEMBER FUNCTIONS
		virtual void	makeSound(void) const;

	protected:
		std::string		_type;
};

#endif