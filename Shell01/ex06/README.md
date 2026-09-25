# Ex06 — skip.sh

## What I had to do

Create a script that displays one line out of two from the output of `ls -l`, starting with the first line.

## My solution

```sh
ls -l | awk 'NR % 2 == 1'
```

### What the command does

- `ls -l` displays the contents of the current directory in long format.
- `awk` processes the output line by line.
- `NR` represents the current line number.
- `NR % 2 == 1` selects odd-numbered lines.

## What I learned

I learned how to select alternating lines using `awk` and the modulo operator.
