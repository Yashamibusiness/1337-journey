# Ex02 — find_sh.sh

## What I had to do

Create a script called `find_sh.sh` that searches the current directory and all its subdirectories for files ending in `.sh`, then displays their names without the `.sh` extension.

## My solution

```sh
find . -type f -name '*.sh' -exec basename {} .sh \;
```

### What the command does

* `find .` → searches the current directory and its subdirectories.
* `-type f` → searches for regular files only.
* `-name '*.sh'` → selects files whose names end with `.sh`.
* `-exec` → runs a command on every matching file.
* `basename {} .sh` → displays the filename without the `.sh` extension.
* `\;` → marks the end of the command executed by `find`.

## What I learned

I learned how to search recursively through directories using `find` and how to remove a file extension using `basename`.

I also learned how to combine commands to get the exact output required by the exercise.
