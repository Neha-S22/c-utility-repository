
/*
 * my_string.h
 * Header file for custom string functions
 * 
 * All these are implemented without using string.h
 * Using pointer arithmetic for traversal
 */

#ifndef MY_STRING_H
#define MY_STRING_H

/* returns length of string (doesn't count '\0') */
int my_strlen(const char *str);

/* copies src string into dest, returns pointer to dest */
char *my_strcpy(char *dest, const char *src);

/* compares two strings, returns 0 if same */
int my_strcmp(const char *str1, const char *str2);

/* reverses string in-place (modifies original) */
void my_strrev(char *str);

/* appends src at end of dest */
char *my_strcat(char *dest, const char *src);

/* converts all lowercase chars to uppercase */
void my_toupper(char *str);

/* counts vowels (both upper and lower case) */
int my_count_vowels(const char *str);

/* returns 1 if palindrome, 0 if not */
int my_is_palindrome(const char *str);

#endif

