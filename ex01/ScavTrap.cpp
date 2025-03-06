/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:25:46 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/06 23:40:51 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"
#include <iostream>

//------------------------------------------------------------------------------
// Constructors & Destructors
//------------------------------------------------------------------------------
ScavTrap::ScavTrap( std::string scavTrapName ): ClapTrap::ClapTrap( scavTrapName ) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "[ ScavTrap ] Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const& src ): ClapTrap::ClapTrap( src ) {
	*this = src;
	std::cout << "[ ScavTrap ] Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "[ ScavTrap ] Destructor constructor called" << std::endl;
}

//------------------------------------------------------------------------------
// Operator overload
//------------------------------------------------------------------------------
ScavTrap&	ScavTrap::operator=( ScavTrap const& rhs ) {
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

//------------------------------------------------------------------------------
// ScavTrap methods
//------------------------------------------------------------------------------
void	ScavTrap::guardGate( void ) const {
	std::cout << "Scavtrap " << this->name << " is now in Gate keeper mode" << std::endl;
}
