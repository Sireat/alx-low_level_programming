#include "main.h"

/**
<<<<<<< HEAD
* *_strcat - concatenates two strings.
*
* @dest: destination
*
*  @src: source
*
* Return: the pointer to dest
*/
=======
 * *_strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
>>>>>>> b519a3b88cf8c69a3ea898914efc3345ed839bb0
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	
	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
