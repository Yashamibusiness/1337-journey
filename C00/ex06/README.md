# Ex06 — ft_print_comb2

## Subject

Create a function that displays every combination of two different two-digit numbers between `00` and `99`, in ascending order.

For example, the output begins with `00 01, 00 02` and ends with `98 99`.

* **Required file:** `ft_print_comb2.c`
* **Prototype:** `void ft_print_comb2(void);`
* **Allowed function:** `write`

## Approach

Use two nested loops to generate the first and second numbers. The second number must always be greater than the first.

Convert each number into two digit characters, preserving leading zeros, and format the pair with a space and the required comma separators.

## What I practiced

Nested loops, integer division, modulo, digit conversion, and output formatting.
