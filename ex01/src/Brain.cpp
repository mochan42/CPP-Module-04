/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:12:07 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 19:07:43 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

//======== CONSTRUCTORS =========================================================================

Brain::Brain()
{
	std::cout << BLU << "Default constructor called from Brain" << D << "\n";
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = "New_Idea";
	}
}

Brain::Brain(const Brain& src)
{
	std::cout << BLU << "Copy constructor called from Brain" << D << "\n";
	*this = src;
}

Brain&	Brain::operator=(const Brain& src)
{
	std::cout << BLU << "Copy assignment operator called from Brain" << D << "\n";
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}

//======== DESTRUCTOR ===========================================================================
Brain::~Brain()
{
	std::cout << CY << "Destructor called from Brain" << D << "\n";
}

//==== GETTERS / SETTERS ========================================================================
std::string		Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	else
		return ("Wrong index, should be between 0 and 99.\n");
}

void	Brain::setIdea(int index, std::string& setIdea)
{
	if (index >= 0 && index < 100)
		_ideas[index] = setIdea;
	else
		std::cout << "Wrong index, should be between 0 and 99.\n";
}
//======== MEMBER FUNCTIONS =====================================================================
