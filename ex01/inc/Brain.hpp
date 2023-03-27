/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:14:42 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 20:00:19 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class	Brain
{
	public:
		// CONSTRUCTORS - DESTRUCTOR
		Brain(); // Default constructor
		Brain(const Brain& other); // Default copy constructor
		virtual ~Brain(); // Destructor
		
		// OVERLOAD OPERATOR
		Brain&	operator=(const Brain& src); // Copy assignment operator called
		
		// GETTERS - SETTERS
		std::string	getIdea(int index) const;
		void		setIdea(int index, std::string& setIdea);
		
		// MEMBER FUNCTIONS
		void		printIdea(int index) const;

	private:
		std::string	_ideas[100];
};


#endif