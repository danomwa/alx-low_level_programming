#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdlib.h>

int _putchar(char c);

/* 0-malloc_checked.c */
void *malloc_checked(unsigned int b);

/* 1-string_nconcat.c */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* 2-calloc.c */
void *_calloc(unsigned int nmemb, unsigned int size);

/* 3-array_range.c */
int *array_range(int min, int max);

/* 100-realloc.c */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int _strlen(char *);

char *_memcpy(char *dest, char *src, unsigned int n);

int onlyNumbers(char *c);

void multiply(char* s1, char* s2);

#endif /*HOLBERTON_H */
