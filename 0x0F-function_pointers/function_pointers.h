#ifndef MAIN_H
#define MAIN_H

#include <stdef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index (int *, int, int (*)(int));

#endif
