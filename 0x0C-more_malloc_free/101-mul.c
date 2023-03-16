#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 * Return: length of the number.
 */
int is_digit_string(const char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

int multiply(const char *num1, const char *num2)
{
    int result = 0;
    int base = 10;
    int carry = 0;

    for (int i = 0; num1[i] != '\0'; i++)
    {
        int digit1 = num1[i] - '0';
        carry = 0;

        for (int j = 0; num2[j] != '\0'; j++)
        {
            int digit2 = num2[j] - '0';

            int temp_result = digit1 * digit2 + carry;
            int temp_digit = temp_result % base;
            carry = temp_result / base;

            result += temp_digit * pow(base, i + j);
        }

        if (carry > 0)
        {
            result += carry * pow(base, i + strlen(num2));
        }
    }

    return result;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int result = multiply(argv[1], argv[2]);

    printf("%d\n", result);

    return 0;
}
