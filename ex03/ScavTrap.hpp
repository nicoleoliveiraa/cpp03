/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:56:10 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/16 15:17:52 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& src);
	ScavTrap& operator=(const ScavTrap& src);
	~ScavTrap();
	
	void attack(const std::string& target);
	void guardGate();
};

#endif // SCAVTRAP_HPP