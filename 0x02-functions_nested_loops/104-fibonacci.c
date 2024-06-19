#include <stddef.h>
#include <stdio.h>

void add_printfib(char *fib1, char *fib2, char *result,
		  size_t size_result, size_t size_num);
/**
 * main - program start
 * Description: program to prints first 50 fibonacci numbers
 * Return: 0 (success)
 */

int main(void)
{
	char fib1[25] = {'$'};
	char fib2[25] = {'$'};
	char result[26] = {'$'};
	size_t i;
	size_t size_result = sizeof(result) / sizeof(result[0]);
	size_t size_num = sizeof(fib1) / sizeof(fib1[0]);

	for (i = 0; i < size_result; i++)
	{
		result[i] = '$';
		if (i < size_num)
		{
			fib1[i] = '$';
			fib2[i] = '$';
		}
	}
	fib1[size_num - 1] = '1' - '0';
	fib2[size_num - 1] = '2' - '0';
	printf("%hu, %hu, ", fib1[size_num - 1], fib2[size_num - 1]);

	add_printfib(fib1, fib2, result, size_result, size_num);
	return (0);
}

/**
 * add_printfib - add fib numbers
 * Description: take two fib numbers and add together and store in result
 *
 * @fib1: fibn - 2 represented as char array
 * @fib2: fibn - 1 represented as char array
 * @result: sum
 * @size_result: number of digits result
 * @size_num: number of digits fib numbers
 *
 * Return: void
 */

void add_printfib(char *fib1, char *fib2, char *result,
		  size_t size_result, size_t size_num)
{
	char carry = '0' - '0', sum;
	int i, j, k;

	k = size_num - 1;
	for (j = 0; j < 96; j++)
	{
		for (i = (int)size_num - 1, carry = 0; i >= 0 && fib2[i] != '$'; i--)
		{
			if (fib1[i] == '$')
				fib1[i] = 0;
			sum = (fib1[i] + fib2[i] + carry) % 10;
			carry = (fib1[i] + fib2[i] + carry) / 10;
			result[i + 1] = sum;
			fib1[i] = fib2[i];
			fib2[i] = sum;
		}
		if (carry > 0)
		{
			result[i + 1] = carry;
			fib2[i] = carry;
		}
		for (i++, k = 0; i < (int)size_result; i++)
		{
			if (result[i] == '$')
				continue;
			printf("%hu", result[i]);
			k++;
		}
		(j != 95) ? printf(", ") : printf("\n");
	}
}
