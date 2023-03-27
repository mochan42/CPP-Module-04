/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:33 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 17:09:09 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

//======== CONSTRUCTORS =========================================================================

Cat::Cat()
{
	std::cout << BLU << "Default constructor called from Cat" << D << "\n";
	this->_type = "Cat";
}

Cat::Cat(const Cat& src)
{
	std::cout << BLU << "Copy constructor called from Cat" << D << "\n";
	*this = src;
}

Cat&	Cat::operator=(const Cat& src)
{
	std::cout << BLU << "Copy assignment operator called from Cat" << D << "\n";
	this->_type = src._type;
	return (*this);
}

//======== DESTRUCTOR ===========================================================================
Cat::~Cat()
{
	std::cout << CY << "Destructor called from Cat" << D << "\n";
}


//==== GETTERS / SETTERS ========================================================================


//======== MEMBER FUNCTIONS =====================================================================
void	Cat::makeSound(void) const
{
	std::cout << BDGRN << this->_type << " meeoowww! " << D << "\n";
}