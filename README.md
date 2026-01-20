# EECS-183---Project-1
A C++ command-line program that calculates the ingredients and total cost needed to make focaccia bread for any group size.

Overview

This project is a C++ command-line application that calculates the ingredients and total cost required to make focaccia bread for a given number of people. It frames a common real-world planning problem as a quantitative decision task, ensuring sufficient ingredients while accounting for realistic packaging constraints.

Problem Statement

When preparing food for a group, it can be difficult to determine how much of each ingredient to purchase while accounting for fixed package sizes (e.g., bags, bottles, canisters). Over- or under-purchasing can lead to wasted resources or shortages. This project automates that calculation by applying structured logic to estimate required quantities and costs based on group size.

Data & Assumptions

Input data represents the number of people being served

Approach

- Accept user input for the number of people

- Calculate the number of loaves required using integer arithmetic

- Compute ingredient quantities per loaf

- Adjust quantities using rounding logic to match package sizes

- Calculate the total cost based on unit prices

- Display a formatted shopping list and cost summary

Assumes:

One loaf serves four people

Fixed ingredient quantities per loaf

Ingredients are sold in predefined package sizes

All ingredient quantities are rounded up to ensure sufficient supply, reflecting real-world purchasing constraints
