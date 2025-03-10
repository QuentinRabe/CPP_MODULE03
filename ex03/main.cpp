/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:51:12 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/10 14:11:15 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void ) {
	DiamondTrap	def("Botbo");

	def.attack("Beepboop");
	def.takeDamage(500);
	def.beRepaired(500);
	def.whoAmI();
	return (0);
}
