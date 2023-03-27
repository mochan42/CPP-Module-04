/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:33 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 17:38:37 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

//======== CONSTRUCTORS =========================================================================

Dog::Dog()
{
	std::cout << BLU << "Default constructor called from Dog" << D << "\n";
	this->_type = "Dog";
}

Dog::Dog(const Dog& src)
{
	std::cout << BLU << "Copy constructor called from Dog" << D << "\n";
	*this = src;
}

Dog&	Dog::operator=(const Dog& src)
{
	std::cout << BLU << "Copy assignment operator called from Dog" << D << "\n";
	this->_type = src._type;
	return (*this);
}

//======== DESTRUCTOR ===========================================================================
Dog::~Dog()
{
	std::cout << CY << "Destructor called from Dog" << D << "\n";
}


//==== GETTERS / SETTERS ========================================================================


//======== MEMBER FUNCTIONS =====================================================================
void	Dog::makeSound(void) const
{
	std::cout << BKLIGRN << this->_type << " barks! " << D << "\n";
}