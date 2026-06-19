/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 20:10:16 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/19 20:18:03 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default Constructor called\n";
	name = "Default";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor called\n";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called\n";
}

void	FragTrap::attack(const std::string &target)
{
	if (hit_points == 0)
	{
		std::cout << "FragTrap " << name << " can't attack because it has no hit points!\n";
		return ;
	}
	if (energy_points == 0)
	{
		std::cout << "FragTrap " << name << " can't attack because it has no energy points left!\n";
		return ;
	}
	energy_points--;
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " requests a positive high five!\n";
}
