/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:49:59 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/10 14:03:19 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define RED_BLD "\e[1;31m"
# define YELLOW_BLD "\e[1;33m"
# define RESET "\e[0m"

# include <string>

class	ClapTrap {
	public:
		ClapTrap( void );
		ClapTrap( std::string clapTrapName );
		ClapTrap( ClapTrap const& src );
		ClapTrap&	operator=( ClapTrap const& rhs );
		~ClapTrap( void );
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	displayClapTrapInfos( void ) const;
		std::string	getName( void ) const;
	protected:
		std::string	name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
};

#endif
