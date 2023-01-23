#include "holberton.h"

int parser(const char *format, format_t *func_list, va_list apt) {
  int print_chars = 0;
  int return_value;
  for (int i = 0; format[i] != '\0'; i++) {
    if (format[i] == '%') {
      for (int j = 0; func_list[j].form != NULL; j++) {
        if (format[i + 1] == func_list[j].form[0]) {
          return_value = func_list[j].func(apt);
          if (return_value == -1) {
            return -1;
          }
          print_chars = print_chars + return_value;
        }
      }
      if (func_list[0].form == NULL && format[i + 1] != ' ') {
        if (format[i + 1] != '\0') {
          write_character(format[i]);
          write_character(format[i + 1]);
          print_chars = print_chars + 2;
        } else {
          return -1;
        }
      }
      i = i + 1;
    } else {
      write_character(format[i]);
      print_chars++;
    }
  }
  return (print_chars);
}
