/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:05:25 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/16 18:03:33 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#define RESET       "\033[0m"
#define BLACK       "\033[30m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"

#define BOLD_BLACK       "\033[1m\033[30m"
#define BOLD_RED         "\033[1m\033[31m"
#define BOLD_GREEN       "\033[1m\033[32m"
#define BOLD_YELLOW      "\033[1m\033[33m"
#define BOLD_BLUE        "\033[1m\033[34m"
#define BOLD_MAGENTA     "\033[1m\033[35m"
#define BOLD_CYAN        "\033[1m\033[36m"
#define BOLD_WHITE       "\033[1m\033[37m"

int main()
{
		std::cout << BOLD_RED << "\n### TESTING CLAPTRAP ###\n" << RESET << std::endl;
	{
		std::cout << BOLD_YELLOW << "Constructing" << RESET << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << BOLD_YELLOW << "Testing" << RESET << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << BOLD_YELLOW << "Deconstructing" << RESET << std::endl;
	}
	std::cout << BOLD_RED << "\n### TESTING SCAVTRAP ###\n" << RESET << std::endl;
	{
		std::cout << BOLD_GREEN << "Constructing" << RESET << std::endl;
		ScavTrap c;
		ScavTrap d("Savage");

		std::cout << BOLD_GREEN << "Testing" << RESET << std::endl;
		c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		d.attack("Savage-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		std::cout << BOLD_GREEN << "Deconstructing" << RESET << std::endl;
	}
	std::cout << BOLD_RED << "\n### TESTING FRAGTRAP ###\n" << RESET << std::endl;
	{
		std::cout << BOLD_BLUE << "Constructing" << RESET << std::endl;
		FragTrap e;
		FragTrap f("Chadd");

		std::cout << BOLD_BLUE << "Testing" << RESET << std::endl;
		e.highFivesGuys();
		e.attack("some random dude");
		e.takeDamage(101);
		e.takeDamage(1);
		e.attack("some random dude");
		f.highFivesGuys();
		std::cout << BOLD_BLUE << "Deconstructing" << RESET << std::endl;
	}
	std::cout << BOLD_RED << "\n### TESTING DIAMONDTRAP ###\n" RESET << std::endl;
	{
		std::cout << BOLD_MAGENTA << "Constructing" << RESET << std::endl;
		DiamondTrap a;
		DiamondTrap b("Giga Chadd");
		DiamondTrap c(a);

		std::cout << BOLD_MAGENTA << "Testing" << RESET << std::endl;
		a.whoAmI();
		a.attack("some super random dude");
		a.takeDamage(30);
		a.takeDamage(70);
		a.attack("some super strong dude");
		b.whoAmI();
		b.attack("Chadd-clone");
		c.whoAmI();
		std::cout << BOLD_MAGENTA << "Deconstructing" << RESET << std::endl;
	}
	return (0);
}