# Ex05 — ft_print_comb

## Subject

Create a function that displays all different combinations of three different digits in ascending order, with the combinations themselves also listed in ascending order.

For example, the output starts with `012, 013, 014` and ends with `789`.

* **Required file:** `ft_print_comb.c`
* **Prototype:** `void ft_print_comb(void);`
* **Allowed function:** `write`

## Approach

Use three nested loops to select the digits. Each digit must be greater than the previous one, preventing repetitions and ensuring ascending order.

Display each combination with comma-space separators, without adding a separator after the final combination.

## What I practiced

Nested loops, multiple conditions, avoiding duplicate combinations, and formatting output.
