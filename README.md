# CPP_04

![42](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white) ![Language](https://img.shields.io/badge/lang-C++98-blue?style=flat-square) ![Status](https://img.shields.io/badge/status-completed-success?style=flat-square)

42 School C++ module 04: polymorphism, abstract classes, and interfaces.

## About This Project

### What It Does

This module introduces polymorphism through an "Animal" hierarchy (Dog, Cat, WrongAnimal, WrongCat) and later a "Brain"-holding version of the same classes, all interacted with through base-class pointers/references.

Exercises in this module:
- ex00: virtual vs. non-virtual makeSound() on Animal/Dog/Cat vs. the intentionally broken WrongAnimal/WrongCat, to expose what happens without a virtual destructor/method.
- ex01: gives each Animal a dynamically allocated Brain, forcing correct deep-copy semantics in constructors/destructors.
- ex02: introduces an abstract AAnimal base class that cannot be instantiated directly, only through Dog/Cat.

### Purpose

It evaluates true runtime polymorphism (virtual functions, virtual destructors, abstract classes) and the memory-safety pitfalls of deleting derived objects through a base pointer without them.

## Stack

- School: 42
- Primary language: C++98
- Scope: one repository per project

## Skills Demonstrated

`Polymorphism` | `Virtual methods` | `Abstract classes` | `Deep copy`

## Features

- Runtime polymorphism through virtual methods and virtual destructors
- Deep-copy semantics for dynamically allocated Brain members
- Abstract base class that cannot be instantiated directly

## Structure

| Exercise | Path | Binary |
|---|---|---|
| ex00 | ./ex00 | Animal |
| ex01 | ./ex01 | Animal |
| ex02 | ./ex02 | Animal |

## How to Run

Prerequisites: `make` and a C++98-capable compiler (`g++` or `clang++`).

Compile and run each exercise separately:

### ex00

~~~bash
cd ex00
make
./Animal
~~~

### ex01

~~~bash
cd ex01
make
./Animal
~~~

### ex02

~~~bash
cd ex02
make
./Animal
~~~

## Testing

No dedicated testing scripts were detected at the project root.

## Notes

- This repository is part of the 42 portfolio.
- Commands are intended for local execution for review and evaluation.

## Author

anapaulapgavilan
