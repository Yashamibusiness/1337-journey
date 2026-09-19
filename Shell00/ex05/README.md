# Ex05 — GiT commit

## What I had to do

Create a file called `git_commit.sh` containing a command that displays the **5 most recent commit hashes**.

## My solution

```bash
echo "git log --pretty='%H' -5" > git_commit.sh
```

### What the command does

* `git log` → shows Git commits
* `--pretty='%H'` → shows only the full commit hash
* `-5` → shows the last 5 commits
* `echo ... > git_commit.sh` → writes the command into the file

## What I learned

I learned how to use `git log` to get specific information from a repository's history.
