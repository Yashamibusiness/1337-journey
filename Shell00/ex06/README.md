# Ex06 — gitignore

## What I had to do

Create a file called `git_ignore.sh` that displays the files ignored by Git.

## My solution

```bash
echo "git ls-files --others --ignored --exclude-standard" > git_ignore.sh
```

### What the command does

* `git ls-files` → lists Git files
* `--others` → shows untracked files
* `--ignored` → includes ignored files
* `--exclude-standard` → uses the standard `.gitignore` rules
* `echo ... > git_ignore.sh` → writes the command into the file

## What I learned

I learned how to find ignored files using `git ls-files` and its options.
