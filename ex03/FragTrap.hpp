/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:57:16 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/10 13:53:18 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: public virtual ClapTrap {
	public:
		FragTrap( void );
		FragTrap( std::string value );
		FragTrap( FragTrap const& src );
		~FragTrap( void );
		FragTrap&	operator=( FragTrap const& rhs );
		void	highFiveGuys( void ) const;
		static unsigned	int	HP;
		static unsigned	int	AD;
};

#endif
