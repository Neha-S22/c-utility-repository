
# C Utility Library - String and Bitwise Operations

Implemented basic string manipulation and bitwise operations in C from scratch without using standard library functions like string.h. Built this to strengthen my understanding of pointers, memory handling, and bit-level operations.

## Why I Built This

As an ECE graduate with embedded C background, I wanted to practice writing low-level C code the way it's done in real embedded systems - using pointer arithmetic instead of relying on built-in functions. This also helped me revise concepts like bit masking which is used heavily in register programming.

## Project Structure



## What's Inside

### String Functions (my_string.h)

- `my_strlen()` - finds string length by traversing with pointer
- `my_strcpy()` - copies one string to another
- `my_strcmp()` - compares two strings character by character
- `my_strrev()` - reverses string in-place using two pointers
- `my_strcat()` - joins two strings together
- `my_toupper()` - converts lowercase to uppercase using ASCII math
- `my_count_vowels()` - counts vowels (handles both cases)
- `my_is_palindrome()` - checks palindrome using start and end pointers

### Bitwise Functions (my_bitwise.h)

- `set_bit()` - sets a bit at given position using OR
- `clear_bit()` - clears a bit using AND with inverted mask
- `toggle_bit()` - flips a bit using XOR
- `check_bit()` - checks if bit is 1 or 0
- `count_set_bits()` - counts 1s using Brian Kernighan's method
- `is_power_of_two()` - uses the n & (n-1) trick
- `reverse_bits()` - reverses all 32 bits
- `swap_without_temp()` - swaps two numbers using XOR
- `print_binary()` - prints number in binary form

## How to Compile

```bash
gcc -o c_utils main.c src/my_string.c src/my_bitwise.c -Iinclude
./c_utils

