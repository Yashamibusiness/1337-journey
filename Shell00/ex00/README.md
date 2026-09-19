# Ex00 — Z

## What I had to do

Create a file called `z` that contains `Z` followed by a newline.

## My solution

```bash
echo Z > z
```

I used `echo` to output `Z`, then `>` to put that output inside the file called `z`.

So basically, this command creates the file and writes `Z` into it.

## Checking the result

```bash
cat z
```

This should print:

```text
Z
```

## What I learned

* `echo` → prints text.
* `>` → redirects the output into a file.
* If the file doesn't exist, `>` creates it.

Pretty simple exercise, but it was a good introduction to writing files directly from the terminal.
