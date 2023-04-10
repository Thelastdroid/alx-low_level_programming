#include <unistd.h> 
 
/** 
 * _putchar - This function writes the character c to stdout 
 * @c: The character 
 * 
 * Return: 1 return -1 if there is an error
 * 
 */ 

int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
}
