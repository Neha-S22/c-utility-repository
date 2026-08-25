
/*
 * main.c
 * Testing all the string and bitwise functions
 * 
 * compile: gcc -o c_utils main.c src/my_string.c src/my_bitwise.c -Iinclude
 * run: ./c_utils
 */

#include <stdio.h>
#include "my_string.h"
#include "my_bitwise.h"

void print_section(const char *title)
{
    printf("\n--- %s ---\n\n", title);
}

void test_strings(void)
{
    char buffer[100];
    char str1[] = "Hello, World!";
    char str2[] = "madam";
    char str3[] = "hello";
    char dest[100] = "Good ";

    print_section("TESTING STRING FUNCTIONS");

    /* strlen */
    printf("strlen of \"%s\" = %d\n", str1, my_strlen(str1));

    /* strcpy */
    my_strcpy(buffer, str1);
    printf("strcpy result: \"%s\"\n", buffer);

    /* strcmp */
    printf("strcmp \"apple\" vs \"banana\" = %d\n", my_strcmp("apple", "banana"));
    printf("strcmp \"hello\" vs \"hello\" = %d\n", my_strcmp("hello", "hello"));

    /* strrev */
    printf("before reverse: \"%s\"\n", str3);
    my_strrev(str3);
    printf("after reverse: \"%s\"\n", str3);

    /* strcat */
    my_strcat(dest, "Morning!");
    printf("strcat result: \"%s\"\n", dest);

    /* toupper */
    char lower[] = "hello world";
    my_toupper(lower);
    printf("toupper: \"%s\"\n", lower);

    /* count vowels */
    printf("vowels in \"%s\" = %d\n", str1, my_count_vowels(str1));

    /* palindrome */
    printf("\"%s\" palindrome? %s\n", str2, my_is_palindrome(str2) ? "yes" : "no");
    printf("\"hello\" palindrome? %s\n", my_is_palindrome("hello") ? "yes" : "no");
}

void test_bitwise(void)
{
    uint32_t num = 13; /* 1101 in binary */
    int a = 25, b = 7;

    print_section("TESTING BITWISE FUNCTIONS");

    printf("working with num = %u, binary: ", num);
    print_binary(num);
    printf("\n\n");

    /* set bit */
    printf("set bit 1: %u -> %u (", num, set_bit(num, 1));
    print_binary(set_bit(num, 1));
    printf(")\n");

    /* clear bit */
    printf("clear bit 2: %u -> %u (", num, clear_bit(num, 2));
    print_binary(clear_bit(num, 2));
    printf(")\n");

    /* toggle bit */
    printf("toggle bit 0: %u -> %u (", num, toggle_bit(num, 0));
    print_binary(toggle_bit(num, 0));
    printf(")\n");

    /* check bit */
    printf("bit 2 of %u: %s\n", num, check_bit(num, 2) ? "set" : "not set");
    printf("bit 1 of %u: %s\n", num, check_bit(num, 1) ? "set" : "not set");

    /* count set bits */
    printf("set bits in %u = %d\n", num, count_set_bits(num));

    /* power of 2 */
    printf("is 16 power of 2? %s\n", is_power_of_two(16) ? "yes" : "no");
    printf("is 13 power of 2? %s\n", is_power_of_two(13) ? "yes" : "no");

    /* reverse bits */
    printf("reverse bits of %u = %u\n", num, reverse_bits(num));

    /* swap */
    printf("before swap: a=%d, b=%d\n", a, b);
    swap_without_temp(&a, &b);
    printf("after swap: a=%d, b=%d\n", a, b);

    /* print binary */
    printf("255 in binary: ");
    print_binary(255);
    printf("\n");
}

int main(void)
{
    printf("=== C Utility Library - Test Output ===\n");

    test_strings();
    test_bitwise();

    printf("\n--- all tests done ---\n");

    return 0;
}

