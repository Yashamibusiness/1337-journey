# Ex01 — print_groups.sh

## What I had to do

Create a script that displays the groups of the user stored in `FT_USER`, separated by commas without spaces.

## My solution

```sh
id -Gn "$FT_USER" | tr ' ' ','
```

### What the command does

- `id -Gn "$FT_USER"` displays the group names of the specified user.
- `tr ' ' ','` replaces spaces with commas.

## What I learned

I learned how to retrieve a user's groups and format the output using `tr`.
