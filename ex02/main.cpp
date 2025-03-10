/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:51:12 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/10 13:37:20 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void ) {
	FragTrap	def;

	def.attack("Beepboop");
	def.takeDamage(500);
	def.beRepaired(500);
	def.highFiveGuys();
	return (0);
}
