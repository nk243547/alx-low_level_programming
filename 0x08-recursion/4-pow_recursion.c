#include "main.h"

/**
* _pow_recursion - recursive function that returns x raised to power y
* @x: base of the power
* @y: exponent of the power
*
* Return: integer value of the result x raised to power of y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, (y - 1)));
}
