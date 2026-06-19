/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:37:16 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/19 20:03:56 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default Constructor called\n";
	name = "Default";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called\n";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called\n";
}

void	ScavTrap::attack(const std::string &target)
{
	if (hit_points == 0)
	{
		std::cout << "ScavTrap " << name << " can't attack because it has no hit points!\n";
		return ;
	}
	if (energy_points == 0)
	{
		std::cout << "ScavTrap " << name << " can't attack because it has no energy points left!\n";
		return ;
	}
	energy_points--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is now in gate keeper mode!\n";
}
