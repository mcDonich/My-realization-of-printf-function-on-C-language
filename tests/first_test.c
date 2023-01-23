#include <stdio.h>

#include "../holberton.h"

int main() {
  int a;
  int number;

  number = 223;

  a = m_printf("%i, %d\n", number, number);
  printf("%d ", a);

  char c = 'l';
  c = m_printf("%c\n", c);
  printf("%c", c);

  return 0;
}