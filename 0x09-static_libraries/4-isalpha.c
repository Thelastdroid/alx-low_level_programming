#include "main.h"
		
/**
 * _isalpha - This function checks for alphabetic character
 * @c: the character
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
