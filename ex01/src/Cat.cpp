/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:33 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 19:42:56 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

//======== CONSTRUCTORS =========================================================================

Cat::Cat()
{
	std::cout << BLU << "Default constructor called from Cat" << D << "\n";
	this->_type = "Cat";
	this->_ptr = new Brain();
}

Cat::Cat(const Cat& src)
{
	std::cout << BLU << "Copy constructor called from Cat" << D << "\n";
	*this = src;
	_ptr = NULL;
}

Cat&	Cat::operator=(const Cat& src)
{
	std::cout << BLU << "Copy assignment operator called from Cat" << D << "\n";
	this->_type = src._type;
	if (_ptr != NULL)
		delete _ptr;
	_ptr = new Brain(*src._ptr);
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
	std::cout << BDGRN << this->_type << " meeoowww! (from Cat)" << D << "\n";
}