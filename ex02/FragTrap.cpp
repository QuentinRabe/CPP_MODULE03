/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:26:35 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/07 00:31:03 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

//------------------------------------------------------------------------------
// Constructors & Destructors
//------------------------------------------------------------------------------
FragTrap::FragTrap( std::string clapTrapName ): ClapTrap::ClapTrap( clapTrapName ) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "[ FragTrap ] Default constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const& src ): ClapTrap::ClapTrap( src ) {
	*this = src;
	std::cout << "[ FragTrap ] Copy constructor called" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "[ FragTrap ] Destructor constructor called" << std::endl;
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
void	FragTrap::highFivesGuys( void ) {
	std::cout << "Hey buddy! Up top!" << std::endl;
}
