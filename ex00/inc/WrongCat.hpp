/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:41:29 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 17:45:22 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>

class	WrongCat : public WrongAnimal
{
	public:
		// CONSTRUCTORS - DESTRUCTOR
		WrongCat(); // Default constructor
		WrongCat(const WrongCat& other); // Default copy constructor
		~WrongCat(); // Destructor
		
		// OVERLOAD OPERATOR
		WrongCat&	operator=(const WrongCat& src); // Copy assignment operator called

		// MEMBER FUNCTIONS
		void	makeSound(void) const;
};

#endif