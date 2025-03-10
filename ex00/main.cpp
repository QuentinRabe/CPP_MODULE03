/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:51:12 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/10 12:40:02 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ) {
	ClapTrap	bipbop;

	bipbop.attack("RoboRitzy");
	bipbop.takeDamage(2);
	bipbop.takeDamage(1);
	bipbop.beRepaired(5);

	return (0);
}
