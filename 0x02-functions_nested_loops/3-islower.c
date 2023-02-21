#include "main.c"
/**
 * is lower - check if a character is in lower case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
