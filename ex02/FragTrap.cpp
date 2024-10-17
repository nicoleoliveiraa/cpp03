/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:26:17 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/17 15:18:53 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap constructor with arguments called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap()
{
	std::cout << "FragTrap copy constructor called!" << std::endl;
	*this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called and it " << _name << " was destroyed!" << std::endl;	
}

bool FragTrap::hasEnergy(const std::string& target, const std::string& action)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " tried to " << action << " " << target
		<< " but doesn't have enough energy points to perform the action!" << std::endl;
		return (false);
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " tried to " << action << " "  << target
		<< " but doesn't have enough hit points to perform the action!" << std::endl;
		return (false);
	}
	return (true);
}

void FragTrap::attack(const std::string& target)
{
	if (!this->hasEnergy(target, "attack"))
		return ;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " 
	<< _attackDamage << " points of damage! 🦾" << std::endl;
	this->_energyPoints--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " is requesting a high five! ✋" << std::endl;
}