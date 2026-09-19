# Ex07 — diff

## What I had to do

Create a file called `b` based on the provided file `a`.

The goal is to make `b` contain the exact changes required by the exercise.

The file to submit is:

```text
b
```

## How I solved it

First, I looked at the content of the provided file `a` and created `b` with the required changes.

Then I used:

```bash
diff a b > sw.diff
```

This compares `a` and `b` and saves the differences into `sw.diff`.

If `b` is correct, the generated `sw.diff` should match the expected diff from the exercise.

### What the command does

* `diff` → compares two files
* `a` → the original file
* `b` → my modified file
* `>` → redirects the output
* `sw.diff` → stores the differences

The exercise also asks us to look at `patch`, which can be used to apply a diff:

```bash
patch a < sw.diff
```

This applies the changes stored in `sw.diff` to `a`.

## What I learned

I learned how `diff` compares two files and how the differences can be saved into another file.

I also learned what `patch` is used for: applying those differences to a file.

I don't have my original exercise resources anymore, so I didn't include a made-up version of `b` here.
