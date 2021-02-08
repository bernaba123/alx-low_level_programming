int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
char c[10] = "Holberton";
while (i < 9)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
