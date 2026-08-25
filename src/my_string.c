
/*
 * my_string.c
 * Custom string functions using pointer arithmetic
 * Not using any string.h functions here
 */

#include "my_string.h"

/* finding length by moving pointer till we hit '\0' */
int my_strlen(const char *str)
{
    const char *ptr = str;

    if (str == NULL)
        return 0;

    while (*ptr != '\0')
        ptr++;

    /* pointer difference gives us the length */
    return (int)(ptr - str);
}

/* copying string character by character */
char *my_strcpy(char *dest, const char *src)
{
    char *original_dest = dest;

    if (dest == NULL || src == NULL)
        return NULL;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return original_dest;
}

/* comparing character by character, return difference if mismatch */
int my_strcmp(const char *str1, const char *str2)
{
    if (str1 == NULL || str2 == NULL)
        return -1;

    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
    }

    /* if one string is longer, this catches it */
    return (*str1 - *str2);
}

/* reversing in-place using two pointers from both ends */
void my_strrev(char *str)
{
    char *start = str;
    char *end;
    char temp;

    if (str == NULL || *str == '\0')
        return;

    /* move end to last char (not '\0') */
    end = str;
    while (*(end + 1) != '\0')
        end++;

    /* swap from both sides till they meet in middle */
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

/* go to end of dest first, then start copying src there */
char *my_strcat(char *dest, const char *src)
{
    char *original_dest = dest;

    if (dest == NULL || src == NULL)
        return dest;

    /* reach end of dest */
    while (*dest != '\0')
        dest++;

    /* now copy src here */
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return original_dest;
}

/* lowercase to uppercase: difference is always 32 in ASCII */
void my_toupper(char *str)
{
    if (str == NULL)
        return;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
            *str = *str - 32;
        str++;
    }
}

/* checking each char against vowels (handling both cases) */
int my_count_vowels(const char *str)
{
    int count = 0;
    char ch;

    if (str == NULL)
        return 0;

    while (*str != '\0')
    {
        /* convert to lowercase first for easier comparison */
        ch = (*str >= 'A' && *str <= 'Z') ? (*str + 32) : *str;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
        str++;
    }

    return count;
}

/* palindrome check - compare from both ends */
int my_is_palindrome(const char *str)
{
    const char *start;
    const char *end;

    if (str == NULL)
        return 0;

    start = str;
    end = str;

    while (*(end + 1) != '\0')
        end++;

    while (start < end)
    {
        if (*start != *end)
            return 0;
        start++;
        end--;
    }

    return 1;
}

