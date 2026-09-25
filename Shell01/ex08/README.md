# Ex08 — add_chelou.sh

## What I had to do

Create a script that converts two numbers from their custom alphabets, adds them together, and displays the result using the output alphabet specified in the subject.

## My solution

```sh
echo $FT_NBR1 + $FT_NBR2 | sed "s/'/0/g" | tr '\\"?!' '1234' | tr 'mrdoc' '01234' | sed 's/^/obase=13; ibase=5;/' | bc | tr '0123456789ABC' 'gtaio luSnemf'
```

### What the command does

- `echo` prepares the addition expression.
- `sed` and `tr` translate the custom input characters into base-5 digits.
- `sed` adds the input and output base settings for `bc`.
- `bc` performs the arithmetic and converts the result.
- The final `tr` maps the digits to the required output alphabet.

## What I learned

I learned how to work with custom number systems, translate characters, and combine arithmetic with shell pipelines.

## Note

The custom alphabets contain special characters, so the exact character mappings and both examples from the subject must be checked before submission.
