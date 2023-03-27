/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:48 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 19:42:19 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>

class	Cat : public Animal
{
	public:
		// CONSTRUCTORS - DESTRUCTOR
		Cat(); // Default constructor
		Cat(const Cat& other); // Default copy constructor
		~Cat(); // Destructor
		
		// OVERLOAD OPERATOR
		Cat&	operator=(const Cat& src); // Copy assignment operator called

		// MEMBER FUNCTIONS
		virtual void	makeSound(void) const;
		
	private:
		Brain*	_ptr;
};

#endif