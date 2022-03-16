// /*
//  * File: 103-fibonacci.c
//  * Auth: Candy
//  */

// #include <stdio.h>

// /**
//  * main - Prints the sum of even-valued Fibonacci sequence
//  *        terms not exceeding 4000000.
//  *
//  * Return: Always 0.
//  */
// int main(void)
// {
// 	unsigned long fib1 = 0, fib2 = 1, fibsum;
// 	float tot_sum;

// 	while (1)
// 	{
// 		fibsum = fib1 + fib2;
// 		if (fibsum > 4000000)
// 			break;

// 		if ((fibsum % 2) == 0)
// 			tot_sum += fibsum;

// 		fib1 = fib2;
// 		fib2 = fibsum;
// 	}
// 	printf("%.0f\n", tot_sum);

// 	return (0);
// }

#include <stdio.h>

/**
 * main - prints the sum of all even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	long int total_sum, sum, first, second;

	total_sum = 0;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
		first = second;
		second = sum;
	}

	printf("%li\n", total_sum);

	return (0);
}
