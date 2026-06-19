/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 13:15:54 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/19 18:41:48 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap (void)
{
	std::cout << "ClapTrap default Constructor called\n";
	name = "Default";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "ClapTrap name constructor called\n";
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called\n";
	*this = other;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called\n";
}

void	ClapTrap::attack(const std::string &target)
{
	if (hit_points == 0)
	{
		std::cout << "ClapTrap " << name << " can't attack because it has no hit points!\n";
		return ;
	}
	if (energy_points == 0)
	{
		std::cout << "ClapTrap " << name << " can't attack because it has no energy points left!\n";
		return ;
	}
	energy_points--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << "ClapTrap " << name << " has no hit points left!\n";
		return ;
	}
	if (amount >= hit_points)
		hit_points = 0;
	else
		hit_points -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << "ClapTrap " << name << " can't repair itself because it has no hit points!\n";
		return ;
	}
	if (energy_points == 0)
	{
		std::cout << "ClapTrap " << name << " can't repair itself because it has no energy points left!\n";
		return ;
	}
	energy_points--;
	hit_points += amount;
	std::cout << "ClapTrap " << name << " restored " << amount << " hit points!\n";
}
