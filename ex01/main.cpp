/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:51:12 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/06 23:42:51 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

int	main( void ) {
	ScavTrap	roboritzy("RoboRitzy");
	ScavTrap	bipbop("BipBop");

	roboritzy.attack("BipBop");
	bipbop.takeDamage(20);
	bipbop.beRepaired(5);
	roboritzy.attack("BipBop");
	roboritzy.takeDamage(20);

	bipbop.guardGate();
	return (0);
}
