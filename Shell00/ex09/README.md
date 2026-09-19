# Ex09 — Illusions, not tricks, Michael...

## What I had to do

Create a magic file called `ft_magic` that is properly formatted to let the `file` command detect files of type **42 file**.

A **42 file** is defined as a file containing the string `42` at the **42nd byte**.

## My solution

```bash
echo "41 string 42 42 file" > ft_magic
```

### What the rule means

```text
41    string    42    42 file
```

* `41` → byte offset where `file` starts checking
* `string` → tells `file` to look for text
* `42` → the string to look for
* `42 file` → the description shown when it matches

The offset is `41` because the first byte is counted as offset `0`, so the **42nd byte is offset 41**.

`echo ... > ft_magic` writes the magic rule into the required file.

## What I learned

I learned how **magic files** work with the `file` command and how an offset tells it where to look for specific data.
