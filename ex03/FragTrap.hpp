/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:24:05 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/16 15:17:35 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& src);
	FragTrap& operator=(const FragTrap& src);
	~FragTrap();
	
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif // FRAGTRAP_HPP