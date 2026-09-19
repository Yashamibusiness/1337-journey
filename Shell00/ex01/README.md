# Ex01 — testShell00

## What I had to do

Create a file called `testShell00` and make its properties match the ones given in the exercise:

* Permissions: `-r--r-xr-x`
* Size: `40` bytes
* Date: June 1 at `23:42`

After that, create `testShell00.tar`, which is the file to submit.

## My solution

```bash
touch testShell00
truncate -s 40 testShell00
touch -t 202606012342 testShell00
chmod 455 testShell00
tar -cf testShell00.tar testShell00
```

### Why I did it this way

I started by creating the file with `touch`.

Then I used:

```bash
truncate -s 40 testShell00
```

to make the file exactly 40 bytes.

After changing the size, I set the timestamp:

```bash
touch -t 202606012342 testShell00
```

I did this after `truncate` because changing the file can update its modification time.

Finally, I changed the permissions:

```bash
chmod 455 testShell00
```

and created the archive:

```bash
tar -cf testShell00.tar testShell00
```

## Checking the result

I used:

```bash
ls -l testShell00
```

to check that the permissions, size and timestamp matched the exercise.

## What I learned

This exercise taught me how to change different properties of a file:

* `truncate -s` → change the file size
* `touch -t` → change the modification time
* `chmod` → change permissions
* `tar -cf` → create an archive

The main thing I learned here was that **the order of the commands can matter**, especially when changing the file size and timestamp.
