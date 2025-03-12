/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:55:10 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/11 15:12:47 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------
// Constructors & Destructors
//------------------------------------------------------------------------------
ClapTrap::ClapTrap( void ): name("RoboRitzy"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "[ ClapTrap ] Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string clapTrapName ): name(clapTrapName), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "[ ClapTrap ] Param. constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const& src) {
	*this = src;
	std::cout << "[ ClapTrap ] Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "[ ClapTrap ] Destructor called" << std::endl;
}

//------------------------------------------------------------------------------
// Operator overload
//------------------------------------------------------------------------------
ClapTrap&	ClapTrap::operator=( ClapTrap const& rhs ) {
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

//------------------------------------------------------------------------------
// Operator overload
//------------------------------------------------------------------------------
std::string	ClapTrap::getName( void ) const {
	return (this->name);
}

//------------------------------------------------------------------------------
// ClapTrap methods
//------------------------------------------------------------------------------
void	ClapTrap::attack( const std::string& target) {
	if (this->hitPoints > 0 && this->energyPoints > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot attack" << std::endl;
	this->displayClapTrapInfos();
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << "ClapTrap " << this->name << " takes damage" << ", causing " << amount << " points of hit" << std::endl;
	if (amount > this->hitPoints)
		this->hitPoints = 0;
	else
	 	this->hitPoints -= amount;
	this->displayClapTrapInfos();
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->hitPoints > 0 && this->energyPoints > 0) {
		std::cout << "ClapTrap " << this->name << " is repairing itself" << " and regains " << amount << " points of hit but loses 1 point of energy" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot repaire itself" << std::endl;
	this->displayClapTrapInfos();
}

void	ClapTrap::displayClapTrapInfos( void ) const {
	std::cout << "❤️" << " " << std::setw(3) << std::setfill(' ') << std::left << this->hitPoints << " ";
	std::cout << "⚡" << " " << std::setw(3) << std::setfill(' ') << std::left << this->energyPoints << std::endl;
}

//------------------------------------------------------------------------------
// End of file
//------------------------------------------------------------------------------
