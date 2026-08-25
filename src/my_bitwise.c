
/*
 * my_bitwise.c
 * Bitwise operations implementation
 * Useful for register manipulation in embedded systems
 */

#include "my_bitwise.h"
#include <stdio.h>

/* OR with mask to set a bit */
uint32_t set_bit(uint32_t num, int pos)
{
    return num | (1U << pos);
}

/* AND with inverted mask to clear */
uint32_t clear_bit(uint32_t num, int pos)
{
    return num & ~(1U << pos);
}

/* XOR flips the bit - 1 becomes 0, 0 becomes 1 */
uint32_t toggle_bit(uint32_t num, int pos)
{
    return num ^ (1U << pos);
}

/* shift right and check LSB */
int check_bit(uint32_t num, int pos)
{
    return (num >> pos) & 1;
}

/*
 * Brian Kernighan's Algorithm
 * trick: n & (n-1) removes the rightmost set bit
 * so we just count how many times we can do this
 * 
 * eg: 13 = 1101
 *   1101 & 1100 = 1100 (removed last 1), count=1
 *   1100 & 1011 = 1000, count=2
 *   1000 & 0111 = 0000, count=3
 *   done! answer is 3
 */
int count_set_bits(uint32_t num)
{
    int count = 0;

    while (num != 0)
    {
        num = num & (num - 1);
        count++;
    }

    return count;
}

/*
 * power of 2 means only one bit is set
 * so n & (n-1) should give 0
 * eg: 8 = 1000, 7 = 0111, AND = 0000 -> yes!
 *     6 = 0110, 5 = 0101, AND = 0100 -> no
 */
int is_power_of_two(uint32_t num)
{
    if (num == 0)
        return 0;

    return (num & (num - 1)) == 0;
}

/* extract LSB one by one and build result from other side */
uint32_t reverse_bits(uint32_t num)
{
    uint32_t result = 0;
    int i;

    for (i = 0; i < 32; i++)
    {
        result <<= 1;        /* make space */
        result |= (num & 1); /* put LSB of num into result */
        num >>= 1;           /* move to next bit */
    }

    return result;
}

/*
 * XOR swap trick:
 * a = a ^ b
 * b = a ^ b  (this gives original a)
 * a = a ^ b  (this gives original b)
 * 
 * important: doesn't work if a and b point to same location
 * because a^a = 0 and we lose the value
 */
void swap_without_temp(int *a, int *b)
{
    if (a == NULL || b == NULL || a == b)
        return;

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

/* printing binary by checking each bit from MSB to LSB */
void print_binary(uint32_t num)
{
    int i;
    int started = 0;

    if (num == 0)
    {
        printf("0");
        return;
    }

    for (i = 31; i >= 0; i--)
    {
        if ((num >> i) & 1)
        {
            started = 1;
            printf("1");
        }
        else if (started)
        {
            printf("0");
        }
    }
}

