/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:05:25 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/17 14:54:38 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#define RESET       "\033[0m"
#define BOLD_RED         "\033[1m\033[31m"
#define BOLD_MAGENTA     "\033[1m\033[35m"

int main()
{
	std::cout << BOLD_RED << "\n### TESTING DIAMONDTRAP ###\n" RESET << std::endl;
	{
		std::cout << BOLD_MAGENTA << "Constructing" << RESET << std::endl;
		DiamondTrap a;
		DiamondTrap b("Giga-Chadd");
		DiamondTrap c(b);

		std::cout << BOLD_MAGENTA << "Testing" << RESET << std::endl;
		a.whoAmI();
		a.attack("some super random dude");
		a.takeDamage(30);
		a.takeDamage(70);
		a.attack("some super strong dude");
		a.highFivesGuys();
		b.guardGate();
		b.whoAmI();
		b.attack("Chadd-clone");
		c.whoAmI();
		std::cout << BOLD_MAGENTA << "Deconstructing" << RESET << std::endl;
	}
	return (0);
}