/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:56:21 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/10 14:20:22 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>


//------------------------------------------------------------------------------
// Constructors & Destructors
//------------------------------------------------------------------------------
DiamondTrap::DiamondTrap( void ): FragTrap(), ScavTrap() {
	this->name = "RoboRitzy";
	this->hitPoints = FragTrap::HP;
	this->energyPoints = ScavTrap::EP;
	this->attackDamage = FragTrap::AD;
	std::cout << "[ DiamondTrap ] Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string value ): FragTrap(value), ScavTrap(value) {
	this->name = value;
	this->hitPoints = FragTrap::HP;
	this->energyPoints = ScavTrap::EP;
	this->attackDamage = FragTrap::AD;
	std::cout << "[ DiamondTrap ] Param. constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const& src ) {
	*this = src;
	std::cout << "[ DiamondTrap ] Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "[ DiamondTrap ] Destructor called" << std::endl;
}

//------------------------------------------------------------------------------
// Operator overload
//------------------------------------------------------------------------------
DiamondTrap&	DiamondTrap::operator=( DiamondTrap const& rhs ) {
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

//------------------------------------------------------------------------------
// DiamonTrap methods
//------------------------------------------------------------------------------
void	DiamondTrap::whoAmI( void ) {
	std::cout << "Name = " << this->name << "/ ClapTrap name = " << this->getName() << std::endl;
}
