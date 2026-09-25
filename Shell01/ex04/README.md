# Ex04 — MAC.sh

## What I had to do

Create a script that displays the MAC addresses of my machine, with each address on a separate line.

## My solution

```sh
ifconfig | grep ether | awk '{print $2}'
```

### What the command does

- `ifconfig` displays network-interface information.
- `grep ether` selects the lines containing Ethernet addresses.
- `awk '{print $2}'` extracts the MAC address from the second field.

## What I learned

I learned how to filter network information and extract specific fields using `grep` and `awk`.
