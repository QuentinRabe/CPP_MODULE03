/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:21:38 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/07 00:28:55 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
	public:
		FragTrap( std::string clapTrapName );
		FragTrap( FragTrap const& src );
		~FragTrap( void );
		FragTrap&	operator=( FragTrap const& rhs );
		void	highFivesGuys( void );
};

#endif
