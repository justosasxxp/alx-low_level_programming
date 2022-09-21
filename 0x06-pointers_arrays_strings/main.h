#ifndef MAIN_H
#define MAIN_H


/**
 *File: main.h
 *Auth: Osahon Osagiede
 *
 *Desc:header file containing all prototypes
 *normally you would just use #include <string.h>
 */

#include <stdio.h>

void positive_or_negative(int n);
int largest_number(int a, int b, int c);
int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

#endif
