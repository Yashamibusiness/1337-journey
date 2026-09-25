# Ex07 — r_dwssap.sh

## What I had to do

Create a script that processes `/etc/passwd` by removing comment lines, keeping every second remaining line starting from the second, extracting login names, reversing them, sorting them in reverse alphabetical order, and displaying the requested range.

The final output must have comma-space separators and end with a period.

## My solution

```sh
cat /etc/passwd | grep -v '#' | awk 'NR % 2 == 0' | awk -F: '{print $1}' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed 's/,/, /g; s/, $/./'
```

### What the command does

- `cat /etc/passwd` displays the contents of the password file.
- `grep -v '#'` removes lines containing comments.
- `awk 'NR % 2 == 0'` keeps every second line, starting with the second.
- `awk -F: '{print $1}'` extracts the login names.
- `rev` reverses each login.
- `sort -r` sorts the results in reverse order.
- `sed -n` selects the inclusive range specified by `FT_LINE1` and `FT_LINE2`.
- `tr` and `sed` format the output with comma-space separators and a final period.

## What I learned

I learned how to combine multiple text-processing commands into a pipeline and how the order of operations affects the final result.
