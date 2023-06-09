#ifndef VAR_H
#define VAR_H
#include <unistd.h>
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);
void print_all(const char * const format, ...);

/**
 * struct print_ops - for matching operator with function
 * @op: string representation of the operator
 * @f: function pointer for the operation to be used
 */
typedef struct print_ops
{
	char *op;
	void (*f)(va_list);
} print_t;

#endif
