/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:46:53 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/11 15:19:45 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap {
	public:
		DiamondTrap( void );
		DiamondTrap( std::string value );
		DiamondTrap( DiamondTrap const& src );
		~DiamondTrap( void );
		DiamondTrap&	operator=( DiamondTrap const& rhs );
		void	whoAmI( void );
	private:
		std::string	name;
};

#endif
