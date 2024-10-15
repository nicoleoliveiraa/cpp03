/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:24:38 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/15 17:03:13 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor with arguments called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << "Copy constructor called!" << std::endl;
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called and it " << _name << " was destroyed!" << std::endl;	
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

int ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

bool ClapTrap::hasEnergy(const std::string& target, const std::string& action)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " tried to " << action << " " << target
		<< " but doesn't have enough energy points to perform the action! 🫥" << std::endl;
		return (false);
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " tried to " << action << " "  << target
		<< " but doesn't have enough hit points to perform the action! 🫥" << std::endl;
		return (false);
	}
	return (true);
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->hasEnergy(target, "attack"))
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " 
	<< _attackDamage << " points of damage! 🦾" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is already dead, stop attacking it! 🪦" << std::endl;
	else if (this->_hitPoints >= amount)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " has been attacked and lost " << amount 
		<< " hit points! 😵‍💫" << std::endl;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " has been attacked, is now at 0 hit points and is dead! 😵" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hasEnergy("himself", "repair"))
		return ;
	std::cout << "ClapTrap " << _name << " has repaired himself and regained " << amount << " hit points! 🔋" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}
