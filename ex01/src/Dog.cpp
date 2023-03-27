/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:33 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 20:38:21 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

//======== CONSTRUCTORS =========================================================================

Dog::Dog()
{
	std::cout << BLU << "Default constructor called from Dog" << D << "\n";
	this->_type = "Dog";
	this->_ptr = new Brain();
}

Dog::Dog(const Dog& src)
{
	std::cout << BLU << "Copy constructor called from Dog" << D << "\n";
	*this = src;
	_ptr = NULL;
}

Dog&	Dog::operator=(const Dog& src)
{
	std::cout << BLU << "Copy assignment operator called from Dog" << D << "\n";
	this->_type = src._type;
	if (_ptr != NULL)
		delete _ptr;
	_ptr = new Brain(*src._ptr);
	return (*this);
}

//======== DESTRUCTOR ===========================================================================
Dog::~Dog()
{
	std::cout << CY << "Destructor called from Dog" << D << "\n";
	delete _ptr;
}


//==== GETTERS / SETTERS ========================================================================


//======== MEMBER FUNCTIONS =====================================================================
void	Dog::makeSound(void) const
{
	std::cout << BKLIGRN << this->_type << " barks! (from Dog)" << D << "\n";
}

void	Dog::setIdea(int index, std::string idea) const
{
	this->_ptr->setIdea(index, idea);
}

void	Dog::printIdea(int index) const
{
	std::cout << YELL << "Dog thinks: ";
	_ptr->printIdea(index);
}