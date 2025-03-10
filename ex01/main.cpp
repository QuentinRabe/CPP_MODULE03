/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:51:12 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/10 13:16:29 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void ) {
	ScavTrap	def;

	def.attack("Beepboop");
	def.takeDamage(500);
	def.beRepaired(500);
	return (0);
}
