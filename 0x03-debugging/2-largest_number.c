<<<<<<< HEAD
nclude "main.h"


=======
#include "main.h"
>>>>>>> ff4ca111a86ac12af36fba3e52e0b3df2598db47

/**
 *
 *  * largest_number - returns the largest of 3 numbers
 *
 *   * @a: first integer
 *
 *    * @b: second integer
 *
 *     * @c: third integer
 *
 *      * Return: largest number
 *
 *       */



int largest_number(int a, int b, int c)
<<<<<<< HEAD

{

		int largest;



			if (a >= b && a >= c)

					{

								largest = a;

									}

				else if (b >= a && b >= c)

						{

									largest = b;

										}

					else

							{

										largest = c;

											}



						return (largest);

=======
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
>>>>>>> ff4ca111a86ac12af36fba3e52e0b3df2598db47
}

