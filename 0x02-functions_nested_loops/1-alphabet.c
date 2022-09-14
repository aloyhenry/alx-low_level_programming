#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
        char holberton[] = "_putchar";
        int i = 0;

        while (holberton[i] != '\0')
        {
                _putchar(holberton[i]);
                i++;
        }
        _putchar('\n');

        return (0);
}
Macs-MBP:0x02-functions_nested_loops aloysiushenry$ cat 1-alphabet.c
#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
        char c = 'a';

        while (c <= 'z')
        {
                _putchar(c);
                c++;
        }
        _putchar('\n');
}
