/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:51:12 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/12 08:49:20 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void ) {
	DiamondTrap	def("Botbo");
	DiamondTrap	cpy(def);

	def.attack("Beepboop");
	def.takeDamage(500);
	def.beRepaired(500);
	def.whoAmI();
	cpy.whoAmI();
	return (0);
}
