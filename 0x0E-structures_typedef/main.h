#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int _putchar(char c);
void _puts(char *str);
void *malloc_checked(unsigned int b);
int *array_range(int min, int max);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _atoi(const char *s);
void print_int(unsigned long int n);
int_strlen(char *s);
void errors(void);
int is_digit(char *s);

#endif
