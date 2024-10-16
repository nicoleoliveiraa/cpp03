/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:25:19 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/16 19:57:16 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_trap")
{
	ScavTrap	s;
	FragTrap	f;
	_name = "Default";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = s.getEnergyPoints();
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
	ScavTrap	s;
	FragTrap	f;
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = s.getEnergyPoints();
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor with arguments called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap("Default_clap_trap")
{
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
	*this = src;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called and it " << _name << " was destroyed!" << std::endl;	
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap called " << _name << ", and my ClapTrap name is: " << ClapTrap::_name << " 🤖" << std::endl;
	std::cout << "HitPoint -> " << _hitPoints << std::endl;
	std::cout << "EnergyPoint -> " << _energyPoints << std::endl;
	std::cout << "Attack damage -> " << _attackDamage << std::endl;
}