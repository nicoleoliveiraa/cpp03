/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:05:25 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/17 15:08:37 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "\033[1m\033[33mConstructing\033[0m" << std::endl;
	ClapTrap a;
	ClapTrap b("Clapzilla");

	std::cout << "\033[1m\033[33mTesting\033[0m" << std::endl;
	a.attack("some other robot");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other other robot");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Cody-clone");
	b.beRepaired(3);
	std::cout << "\033[1m\033[33mDestructing\033[0m" << std::endl;
	return (0);
}