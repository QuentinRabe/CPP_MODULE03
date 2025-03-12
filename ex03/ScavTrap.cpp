/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:56:54 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/12 08:50:01 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

unsigned int	ScavTrap::EP = 50;

//------------------------------------------------------------------------------
// Constructors & Destructors
//------------------------------------------------------------------------------
ScavTrap::ScavTrap( void ): ClapTrap() {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "[ ScavTrap ] Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string value ): ClapTrap(value) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "[ ScavTrap ] Param. constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const& src ): ClapTrap(src) {
	*this = src;
	std::cout << "[ ScavTrap ] Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "[ ScavTrap ] Destructor called" << std::endl;
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
void	ScavTrap::attack( const std::string& target ) {
	if (this->hitPoints > 0 && this->energyPoints > 0) {
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ScavTrap " << this->name << " cannot attack" << std::endl;
	this->displayClapTrapInfos();
}

void	ScavTrap::guardGate( void ) const {
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}
