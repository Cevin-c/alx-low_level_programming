#include "main.h"
/**
 * rot13 - change letters to ROT13.
 * @z: analized string.
 *
 * Return: String with all letters in ROT13 base.
 */
char *rot13(char *z)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x = 0;
	int y;

	while (*(z + y) != '\0')
	{
		for (x = 0; x <= 51; x++)
		{
			if (*(z + y) == a[x])
			{
				*(z + y) = rot[x];
				break;
			}
		}
		y++;
	}
	return (z);
}
