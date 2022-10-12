#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTERS_H

void _putchar(char *c);
void print_name(char *name, void (*f)(char *));
void arra_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#enif /*FUNCTION_POINTERS_H*/
