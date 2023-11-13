#include <unistd.h>
/**         
* main - check the code                               
*          
* Return: (1) Success.                                
*/
int _putchar(char c)
{
return write(1, &c, 1);
}
