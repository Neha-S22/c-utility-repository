
# C Utility Library — Custom String & Bitwise Operations

A lightweight C utility library implementing fundamental string manipulation and bitwise operations from scratch, without relying on standard library functions.

## Purpose

Demonstrates low-level C programming skills including:
- Pointer arithmetic and memory manipulation
- Bitwise operations for register-level control
- Clean, modular code structure with documentation

## Project Structure



## Modules

### String Utilities (my_string.h)
| Function | Description |
|----------|-------------|
| `my_strlen()` | Calculate string length using pointer traversal |
| `my_strcpy()` | Copy source string to destination |
| `my_strcmp()` | Compare two strings lexicographically |
| `my_strrev()` | Reverse a string in-place |
| `my_strcat()` | Concatenate two strings |
| `my_toupper()` | Convert string to uppercase |
| `my_count_vowels()` | Count vowels in a string |
| `my_is_palindrome()` | Check if string is a palindrome |

### Bitwise Utilities (my_bitwise.h)
| Function | Description |
|----------|-------------|
| `set_bit()` | Set a specific bit position |
| `clear_bit()` | Clear a specific bit position |
| `toggle_bit()` | Toggle a specific bit position |
| `check_bit()` | Check if a bit is set |
| `count_set_bits()` | Count number of 1s (Brian Kernighan's Algorithm) |
| `is_power_of_two()` | Check if number is power of 2 |
| `reverse_bits()` | Reverse all bits in a 32-bit integer |
| `swap_without_temp()` | Swap two numbers using XOR |
| `print_binary()` | Print binary representation of a number |

## How to Compile and Run

```bash
gcc -o c_utils main.c src/my_string.c src/my_bitwise.c -Iinclude
./c_utils

