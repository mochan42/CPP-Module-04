/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:33 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 17:48:22 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

//======== CONSTRUCTORS =========================================================================

WrongCat::WrongCat()
{
	std::cout << BLU << "Default constructor called from WrongCat" << D << "\n";
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src)
{
	std::cout << BLU << "Copy constructor called from WrongCat" << D << "\n";
	*this = src;
}

WrongCat&	WrongCat::operator=(const WrongCat& src)
{
	std::cout << BLU << "Copy assignment operator called from WrongCat" << D << "\n";
	this->_type = src._type;
	return (*this);
}

//======== DESTRUCTOR ===========================================================================
WrongCat::~WrongCat()
{
	std::cout << CY << "Destructor called from WrongCat" << D << "\n";
}


//==== GETTERS / SETTERS ========================================================================


//======== MEMBER FUNCTIONS =====================================================================
void	WrongCat::makeSound(void) const
{
	std::cout << BDRED << this->_type << " meeoowww wrongly! (from WrongCat) " << D << "\n";
}