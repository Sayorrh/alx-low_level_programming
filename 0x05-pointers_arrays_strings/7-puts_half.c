 #include "stdio.h"
 #include "main.h"
 /**
 * puts_half - function to print
 * the second half of the string
 * @str: contains char to be printed
 * Return: void
 */
 void puts_half(char *str)
 {
	 int n;

	 for (n = (length_of_the_string - 1) / 2)
	 {
		 if (n % 2 != 0)
			 _putchar("(%s)\n", string + strlen(string) - n);
	 }
	 _putchar('\n');
 }	 
