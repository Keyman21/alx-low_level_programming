#include "main.h"
/**
* main - prints the string "Holberton" from a character array.
* Return: 0 on success.
*/
int main(void)
{
char c[] = "_putchar";
int var;

for (var = 0; var < 8; var++)
{
_putchar(c[var]);
}
_putchar('\n');
return (0);
}
