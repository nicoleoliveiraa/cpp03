/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:25:19 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/17 14:58:53 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called!" << std::endl;
	
	ScavTrap	s;
	
	_name = "Default";
	ClapTrap::_name = _name + "_clap_name";
	_energyPoints = s.getEnergyPoints();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap constructor with arguments called!" << std::endl;
	
	ScavTrap	s;
	
	_name = name;
	_energyPoints = s.getEnergyPoints();
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
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
	ClapTrap::_name = _name + "_clap_name";
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
	// std::cout << "HitPoint -> " << _hitPoints << std::endl;
	// std::cout << "EnergyPoint -> " << _energyPoints << std::endl;
	// std::cout << "Attack damage -> " << _attackDamage << std::endl;
}