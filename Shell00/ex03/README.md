# Ex03 — SSH me!

## What I had to do

Create a file called `id_rsa_pub` containing my SSH public key.

## How to solve it

Generate an SSH key pair with:

```bash
ssh-keygen -t rsa
```

Then copy the contents of your public key (`~/.ssh/id_rsa.pub`) into `id_rsa_pub`.

I didn't include my actual answer in this repository for **privacy and security reasons**.

## What I learned

* Public key → can be shared.
* Private key → must stay private.
* `ssh-keygen` → generates an SSH key pair.
