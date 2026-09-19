# Ex08 — clean

## What I had to do

Create a file called `clean` containing one command that:

* Finds files ending with `~`
* Finds files starting and ending with `#`
* Displays them
* Deletes them

## My solution

```bash
echo 'find . -type f \( -name "#*#" -o -name "*~" \) -print -delete' > clean
```

### What the command does

* `find .` → searches from the current directory
* `-type f` → only files
* `\( ... \)` → groups the two name conditions together
* `-name "#*#"` → files starting and ending with `#`
* `-o` → OR
* `-name "*~"` → files ending with `~`
* `-print` → displays the files found
* `-delete` → deletes them

I used `\(` and `\)` because the shell would otherwise interpret the parentheses itself. The backslashes make them part of the `find` command, where they are used for grouping.

## What I learned

I learned how to combine multiple `find` conditions using **grouping and OR**, and how to use `-print` and `-delete` together.
