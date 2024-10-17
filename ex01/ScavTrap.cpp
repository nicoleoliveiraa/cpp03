/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:00:17 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/17 15:16:03 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor with arguments called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap()
{
	std::cout << "ScavTrap copy constructor called!" << std::endl;
	*this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called and it " << _name << " was destroyed!" << std::endl;	
}

bool ScavTrap::hasEnergy(const std::string& target, const std::string& action)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " tried to " << action << " " << target
		<< " but doesn't have enough energy points to perform the action!" << std::endl;
		return (false);
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " tried to " << action << " "  << target
		<< " but doesn't have enough hit points to perform the action!" << std::endl;
		return (false);
	}
	return (true);
}

void ScavTrap::attack(const std::string& target)
{
	if (!hasEnergy(target, "attack"))
		return ;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " 
	<< _attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode." << std::endl;
}