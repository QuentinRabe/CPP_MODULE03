/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:22:16 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/07 03:43:25 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap( std::string clapTrapName );
		ScavTrap( ScavTrap const& src );
		~ScavTrap( void );
		ScavTrap&	operator=( ScavTrap const& rhs );
		void	guardGate( void ) const;
		void	attack(const std::string& target );
};

#endif
