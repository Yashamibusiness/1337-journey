# Ex04 — midLS

## What I had to do

Create a file called `midLS` containing a command that lists the current directory:

* Sorted by modification date
* Separated by commas
* Directories ending with `/`

## My solution

```bash
echo "ls -t -p -m" > midLS
```

### What the command does

* `-t` → sorts by modification time
* `-p` → adds `/` after directories
* `-m` → separates entries with commas
* `echo ... > midLS` → writes the command into the file

## What I learned

I learned how to combine `ls` options and write the required command into a file.
