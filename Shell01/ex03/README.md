# Ex03 — count_files.sh

## What I had to do

Create a script that counts all regular files and directories in the current directory and its subdirectories, including the current directory itself.

## My solution

```sh
find . \( -type f -o -type d \) | wc -l
```

### What the command does

- `find .` searches the current directory and its subdirectories.
- `-type f` selects regular files.
- `-type d` selects directories.
- `-o` means OR.
- `wc -l` counts the resulting lines.

## What I learned

I learned how to use `find` with multiple conditions and count its results using `wc`.
