# Ex02 — Oh yeah, mooore...

## What I had to do

Create a set of files and directories with specific:

* names
* sizes
* permissions
* modification dates
* links

Then put everything into an archive called `exo2.tar`.

## My solution

```bash
mkdir test0 test2
touch test1 test3 test4
ln test3 test5
ln -s test0 test6

truncate -s 4 test1
truncate -s 1 test3
truncate -s 2 test4

touch -t 202606012047 test0
touch -t 202606012146 test1
touch -t 202606012245 test2
touch -t 202606012344 test3
touch -t 202606012343 test4
touch -h -t 202606012220 test6

chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
chmod 404 test5

tar -cf exo2.tar *
```

## How I approached it

I first created the directories and files, then created the links.

```bash
mkdir test0 test2
touch test1 test3 test4
ln test3 test5
ln -s test0 test6
```

`ln` creates a hard link, while `ln -s` creates a symbolic link.

After that, I set the sizes of the files with `truncate`.

```bash
truncate -s 4 test1
truncate -s 1 test3
truncate -s 2 test4
```

I set the timestamps after changing the sizes because changing a file can update its modification time.

For `test6`, I used `-h`:

```bash
touch -h -t 202606012220 test6
```

This changes the timestamp of the symbolic link itself instead of following the link to `test0`.

Finally, I set the required permissions and created the archive.

## What I learned

This exercise brought several things together:

* `mkdir` → create directories
* `touch` → create files
* `truncate` → change file size
* `ln` → create a hard link
* `ln -s` → create a symbolic link
* `touch -t` → change modification time
* `chmod` → change permissions
* `tar -cf` → create an archive

The main thing I learned here was that **the order of the commands matters** when working with file sizes and timestamps, and that hard links and symbolic links behave differently.
