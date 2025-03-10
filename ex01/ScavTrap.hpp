/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:57:16 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/10 13:01:45 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string value );
		ScavTrap( ScavTrap const& src );
		~ScavTrap( void );
		ScavTrap&	operator=( ScavTrap const& rhs );
		void	attack( const std::string& target );
		void	guardGate( void ) const;
};

#endif
