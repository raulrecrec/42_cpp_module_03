# CPP Module 03

## Description

This project is the fourth C++ module of the 42 Common Core.

Its goal is to introduce inheritance in C++ through a set of robot classes based on a common parent class.

The project focuses on:

* inheritance
* derived classes
* constructor and destructor chaining
* protected attributes
* method overriding
* Orthodox Canonical Form
* reusing base class behavior

The project is compiled with:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

---

## Exercises

### ex00 - Aaaaand... OPEN!

This exercise introduces the `ClapTrap` class.

`ClapTrap` contains the following attributes:

* `name`
* `hit_points`
* `energy_points`
* `attack_damage`

The default values are:

```text
hit_points = 10
energy_points = 10
attack_damage = 0
```

The class implements the Orthodox Canonical Form:

* default constructor
* name constructor
* copy constructor
* copy assignment operator
* destructor

It also implements the following member functions:

* `attack(const std::string &target)`
* `takeDamage(unsigned int amount)`
* `beRepaired(unsigned int amount)`

`attack()` and `beRepaired()` consume one energy point.

A `ClapTrap` cannot attack or repair itself if it has no hit points or no energy points left.

#### Usage

```bash
cd ex00
make
./claptrap
```

---

### ex01 - Serena, my love!

This exercise introduces inheritance by creating a `ScavTrap` class derived from `ClapTrap`.

`ScavTrap` inherits from `ClapTrap` and reuses its attributes and behavior.

Its values are initialized as:

```text
hit_points = 100
energy_points = 50
attack_damage = 20
```

`ScavTrap` has its own version of:

* `attack(const std::string &target)`

It also adds a special ability:

* `guardGate()`

This function displays a message indicating that the `ScavTrap` is now in Gate keeper mode.

In this exercise, `ClapTrap` attributes are changed from `private` to `protected` so that derived classes can access inherited state while still preventing direct access from outside the class.

The construction and destruction order is important:

```text
Construction:
1. ClapTrap
2. ScavTrap

Destruction:
1. ScavTrap
2. ClapTrap
```

#### Usage

```bash
cd ex01
make
./scavtrap
```

---

### ex02 - Repetitive work

This exercise adds another derived class: `FragTrap`.

`FragTrap` also inherits from `ClapTrap`.

Its values are initialized as:

```text
hit_points = 100
energy_points = 100
attack_damage = 30
```

`FragTrap` reuses inherited behavior such as:

* `takeDamage()`
* `beRepaired()`

It also has its own special ability:

* `highFivesGuys()`

This function displays a positive high-fives request.

Like `ScavTrap`, `FragTrap` follows the Orthodox Canonical Form and demonstrates proper construction and destruction chaining with the base `ClapTrap` class.

#### Usage

```bash
cd ex02
make
./fragtrap
```

---

## Build rules

Each exercise contains its own `Makefile`.

Available rules:

```bash
make
make clean
make fclean
make re
```

---

## Notes

This module is written using the C++98 standard.

The code avoids:

* `printf`
* `malloc`
* `free`
* `using namespace std`
* STL containers and algorithms

From Module 02 onward, classes are implemented using the Orthodox Canonical Form unless stated otherwise.

The key concept of this module is inheritance.

`ScavTrap` and `FragTrap` are both specialized versions of `ClapTrap`.

They reuse the base class behavior, initialize inherited attributes with their own values, and add their own specific abilities.

The inheritance structure implemented is:

```text
ClapTrap
   ├── ScavTrap
   └── FragTrap
```

This module also demonstrates constructor and destructor chaining:

* base class constructors are called before derived class constructors
* derived class destructors are called before base class destructors
