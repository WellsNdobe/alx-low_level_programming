#include "main.h"

/*int _strlen_recursion returns the length of a string
 * @s : pointer to a character of a string
 * 
 */
int _strlen_recursion(char *s){
	int length;
	length = 0;

	if(s[length] != '\0')
	{
		length = length + 1;
		_strlen_recursion(s + 1);
	}

	return length;


}	
