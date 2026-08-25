
/*
 * my_bitwise.h
 * Header for bitwise utility functions
 * 
 * Common bit manipulation operations used in
 * embedded/register level programming
 */

#ifndef MY_BITWISE_H
#define MY_BITWISE_H

#include <stdint.h>

/* sets bit at position pos (0 = LSB) */
uint32_t set_bit(uint32_t num, int pos);

/* clears bit at position pos */
uint32_t clear_bit(uint32_t num, int pos);

/* flips bit at position pos */
uint32_t toggle_bit(uint32_t num, int pos);

/* returns 1 if bit at pos is set, else 0 */
int check_bit(uint32_t num, int pos);

/* counts how many bits are 1 (uses Kernighan's method) */
int count_set_bits(uint32_t num);

/* returns 1 if num is power of 2 */
int is_power_of_two(uint32_t num);

/* reverses all 32 bits */
uint32_t reverse_bits(uint32_t num);

/* swaps two numbers using XOR, no temp variable needed */
void swap_without_temp(int *a, int *b);

/* prints the binary form of a number */
void print_binary(uint32_t num);

#endif

