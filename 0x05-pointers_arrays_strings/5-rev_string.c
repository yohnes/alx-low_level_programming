#include "main.h"

/**
<<<<<<< HEAD
 * * rev_string - Reverses a string
 * * @s: Input string
 * * Return: String in reverse
 * **/

void rev_string(char *s)
{
		char rev = s[0];
			int counter = 0;
				int i;

					while (s[counter] != '\0')
								counter++;
						for (i = 0; i < counter; i++)
								{
											counter--;
													rev = s[i];
															s[i] = s[counter];
																	s[counter] = rev;
																		}
}

=======
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
**/

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
>>>>>>> f0ff7f43d6377794705f0b6a14256c81430bd615
