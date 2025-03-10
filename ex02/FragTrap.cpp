/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:56:54 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/10 13:36:15 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

//------------------------------------------------------------------------------
// Constructors & Destructors
//------------------------------------------------------------------------------
FragTrap::FragTrap( void ): ClapTrap() {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "[ FragTrap ] Default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string value ): ClapTrap(value) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "[ FragTrap ] Param. constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const& src ) {
	*this = src;
	std::cout << "[ FragTrap ] Copy constructor called" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "[ FragTrap ] Destructor called" << std::endl;
}

//------------------------------------------------------------------------------
// Operator overload
//------------------------------------------------------------------------------
FragTrap&	FragTrap::operator=( FragTrap const& rhs ) {
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

//------------------------------------------------------------------------------
// FragTrap methods
//------------------------------------------------------------------------------
void	FragTrap::highFiveGuys( void ) const {
	std::cout << "Hey buddy! Up top 🤖" << std::endl;
}
