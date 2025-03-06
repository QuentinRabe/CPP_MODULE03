/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:22:16 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/06 23:39:22 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap( std::string svacTrapName );
		ScavTrap( ScavTrap const& src );
		~ScavTrap( void );
		ScavTrap&	operator=( ScavTrap const& rhs );
		void	guardGate( void ) const;
};

#endif
