#ifndef FUNCTION_H
#define FUNCTION_H

typedef __SIZE_TYPE__size_t;
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
