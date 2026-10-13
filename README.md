# C++ Modules 00–04

[![CI](https://github.com/man-Yocto/cpp-modules-00-04/actions/workflows/ci.yml/badge.svg)](https://github.com/man-Yocto/cpp-modules-00-04/actions/workflows/ci.yml)

The first five C++ modules of the 42 curriculum: a guided path from C to object-oriented C++.
Everything is written in **C++98** and compiled with `-Wall -Wextra -Werror -std=c++98`.

## Modules

| Module | Topic | Exercises |
|---|---|---|
| **cpp00** | Namespaces, classes, member functions, I/O streams | `megaphone` (uppercase echo) · `PhoneBook` (fixed-size contact list with formatted table output) |
| **cpp01** | Memory allocation, pointers vs references, `switch` | `Zombie` (stack vs heap) · zombie horde (`new[]`) · brain (pointer/reference addresses) · `HumanA`/`HumanB`/`Weapon` (reference vs pointer members) · file find-and-replace (`ifstream`/`ofstream`) · `Harl` (pointers to member functions) |
| **cpp02** | Ad-hoc polymorphism, operator overloading, Orthodox Canonical Form | `Fixed` fixed-point number class — canonical form, `float`/`int` conversion, comparison and arithmetic operators, `++`/`--`, `min`/`max` |
| **cpp03** | Inheritance | `ClapTrap` → `ScavTrap`, `FragTrap` → `DiamondTrap` (diamond problem with virtual inheritance) |
| **cpp04** | Subtype polymorphism, abstract classes, deep copy | `Animal`/`Dog`/`Cat` with `virtual` functions vs `WrongAnimal`/`WrongCat` · `Brain` (deep copy in copy constructor / assignment) · `AAnimal` (abstract base class) |

## Build & run

Each exercise is self-contained with its own `Makefile`:

```bash
cd cpp02/ex02
make
./fixed2
```

## Key technical challenges

- **Orthodox Canonical Form** — default constructor, copy constructor, copy assignment operator and
  destructor for every class, and getting deep vs shallow copies right.
- **Fixed-point arithmetic** — representing fractional numbers in an `int` with 8 fractional bits
  and converting precisely to and from `float`.
- **The diamond problem** — using virtual inheritance so `DiamondTrap` holds a single `ClapTrap`
  base.
- **Virtual dispatch** — seeing exactly what changes when a destructor or member function is (or is
  not) `virtual`.

## What I learned

<!-- TODO: write this section yourself -->
