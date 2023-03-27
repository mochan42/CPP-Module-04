/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:49:56 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 17:39:28 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

//======== CONSTRUCTORS =========================================================================

WrongAnimal::WrongAnimal()
{
	std::cout << BLU << "Default constructor called from WrongAnimal" << D << "\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << BLU << "Copy constructor called from WrongAnimal" << D << "\n";
	*this = src;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << BLU << "Copy assignment operator called from WrongAnimal" << D << "\n";
	this->_type = src._type;
	return (*this);
}

//======== DESTRUCTOR ===========================================================================
WrongAnimal::~WrongAnimal()
{
	std::cout << CY << "Destructor called from WrongAnimal" << D << "\n";
}


//==== GETTERS / SETTERS ========================================================================
std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}

//======== MEMBER FUNCTIONS =====================================================================
void	WrongAnimal::makeSound(void) const
{
	std::cout << YELL << this->_type << " makes a WrongAnimal sound! " << D << "\n";
}