#ifndef MAIN_H
#define MAIN_H
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
int _putchar(char c);
void reverseStr(char *str);
void calc_two(char *s1, char *s2, char *r, int *i, int *kp, int *res, int s_r);
void calc_one(char *s, char *r, int *i, int *kp, int *res, int s_r);
#endif
