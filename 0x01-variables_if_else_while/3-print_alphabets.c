#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Seccess/correct)
 */
int main(void)

{
char lower_case;
char upper_case;

for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
Putchar(lower_case);
}

for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
Putchar(upper_case);
}


Putchar('\n');

return (0);

}
