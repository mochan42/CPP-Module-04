/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:33 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 21:19:56 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

//======== CONSTRUCTORS =========================================================================

Animal::Animal()
{
	std::cout << BLU << "Default constructor called from Animal" << D << "\n";
	this->_type = "Random Animal";
}

Animal::Animal(const Animal& src)
{
	std::cout << BLU << "Copy constructor called from Animal" << D << "\n";
	*this = src;
}

Animal&	Animal::operator=(const Animal& src)
{
	std::cout << BLU << "Copy assignment operator called from Animal" << D << "\n";
	this->_type = src._type;
	return (*this);
}

//======== DESTRUCTOR ===========================================================================
Animal::~Animal()
{
	std::cout << CY << "Destructor called from Animal" << D << "\n";
}


//==== GETTERS / SETTERS ========================================================================
std::string		Animal::getType(void) const
{
	return (this->_type);
}

//======== MEMBER FUNCTIONS =====================================================================
// void	Animal::makeSound(void) const
// {
// 	std::cout << DKGRN << this->_type << " makes an Animal sound! (from Animal)" << D << "\n";
// }

// void	Animal::setIdea(int index, std::string idea) const
// {
// 	std::cout << "Animals with no type cannot think about: " << idea << "and idea Number " << index << " does not exist.\n";
// }

// void	Animal::printIdea(int index) const
// {
// 	std::cout << "Animals with no type cannot think and has no idea Number: " << index << "\n";
// }