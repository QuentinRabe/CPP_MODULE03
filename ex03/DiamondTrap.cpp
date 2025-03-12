/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:56:21 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/12 08:52:28 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

//------------------------------------------------------------------------------
// Constructors & Destructors
//------------------------------------------------------------------------------
DiamondTrap::DiamondTrap( void ): ClapTrap(), FragTrap(), ScavTrap() {
	ClapTrap::name = "RoboRitzy_clap_name";
	this->name = "RoboRitzy";
	this->hitPoints = FragTrap::HP;
	this->energyPoints = ScavTrap::EP;
	this->attackDamage = FragTrap::AD;
	std::cout << "[ DiamondTrap ] Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string value ): ClapTrap(value), FragTrap(value), ScavTrap(value) {
	ClapTrap::name = value + "_clap_name";
	this->name = value;
	this->hitPoints = FragTrap::HP;
	this->energyPoints = ScavTrap::EP;
	this->attackDamage = FragTrap::AD;
	std::cout << "[ DiamondTrap ] Param. constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const& src ): ClapTrap(src) ,FragTrap(src), ScavTrap(src) {
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
	std::cout << "Name = " << this->name << "/ ClapTrap name = " << ClapTrap::name << std::endl;
}
