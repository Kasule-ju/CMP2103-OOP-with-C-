# Polymorphism: Employee Bonus System

## What is polymorphism?
Polymorphism means "many forms". One function call can behave differently depending on the object it is used on.

## What our program does
We have a parent class, **Employee**, and three child classes: **ElectricalEngineer**, **Technician** and **Manager**. Each one calculates its bonus in its own way.

## How it works
1. The parent class has a **virtual** function called `calculateBonus()`. This allows the child classes to replace it.
2. Each child class **overrides** the function with its own bonus: Engineer UGX 400,000, Technician UGX 250,000 and Manager UGX 600,000.
3. In `main()`, one **base-class pointer** is used to point to each object in turn.
4. The same call, `calculateBonus()`, is used every time, but the output is different for each employee.

The program chooses the correct version while it is running. This is called **runtime polymorphism**.

## Why is `virtual` important?
Without `virtual`, the pointer would always run the parent's version and the children's bonuses would never be used.

## Virtual destructor
The parent class also has a virtual destructor, so objects are cleaned up correctly when deleted through a base-class pointer.
