#include <stdio.h>
#include <limits.h>
#include <locale.h>

/**
 * main - program start
 * Description: Print primitive type max and min sizes then exit
 * Return: 0 (success)
 */

int main(void)
{
  
  setlocale(LC_NUMERIC, "");
  printf("Min value of a long is %lu\n", LONG_MIN);
  printf("Min value of a int is %d\n", INT_MIN);
  printf("Min value of a short is %d\n", SHRT_MIN);
  printf("Min value of a char is %d\n", CHAR_MIN);
  printf("Min value of a signed char is %d\n", SCHAR_MIN);
  printf("Max value of a signed char is %d\n", SCHAR_MAX);
  printf("Max value of a long is %d\n", CHAR_MAX);
  printf("Max value of an unsigned is %d\n", UCHAR_MAX);
  printf("Max value of a short is %d\n", SHRT_MAX);
  printf("Max value of an unsigned short is %d\n", USHRT_MAX);
  printf("Max value of a int is %d\n", INT_MAX);
  printf("Max value of an unsgined int is %d\n", UINT_MAX);
  printf("Max value of a long is %lu\n", LONG_MAX);
  printf("Max value of an unsigned long is %lu\n", ULONG_MAX);
  return (0);
  
}
