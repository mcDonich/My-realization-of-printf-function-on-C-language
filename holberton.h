#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - is a structure for our mprintf function
 *
 * @form - is a format of transmitted value
 * @func - is a function to when we put our values
 */
struct format {
  char *form;
  int (*func)(va_list);
};

typedef struct format format_t;

int parser(const char *format, format_t *func_list, va_list apt);

int m_printf(const char *format, ...);
int write_character(char c);
int m_printf_char(va_list);
int m_printf_int(va_list);

/* our functions that we put in mprintf function */

#endif  // MAIN_H