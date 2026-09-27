# Ex08 — ft_print_combn

## Subject

Create a function that displays all different combinations of `n` digits in ascending order, where `0 < n < 10`.

For example, when `n = 2`, the output starts with `01, 02, 03` and ends with `79, 89`.

* **Required file:** `ft_print_combn.c`
* **Prototype:** `void ft_print_combn(int n);`
* **Allowed function:** `write`

## Approach

Generate combinations containing exactly `n` digits. Each digit must be greater than the previous one, and the combinations must be displayed in ascending order.

A recursive approach can build the combination one digit at a time, stopping when the required number of digits has been selected.

## What I practiced

Recursion, arrays, controlling digit selection, and generating combinations without repetitions.
