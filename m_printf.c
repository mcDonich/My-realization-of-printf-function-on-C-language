#include "holberton.h"

int m_printf(const char *format, ...) {
  int print_char = 0;
  format_t *func_list = {{"c", m_printf_char},
                         {"i", m_printf_int},
                         {"d", m_printf_int},
                         {NULL, NULL}};
  va_list apt;
  if (format == NULL) {
    return -1;
  }
  va_start(apt, format);
  print_char = parser(format, func_list, apt);
  va_end(apt);
  return (print_char);
}