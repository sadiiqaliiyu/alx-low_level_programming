#include "main.h"
/**
  * _pow_recursion - function name
  * @x: parameter 1
  * @y: parameter 2
  * Return: value of a given number passed to the function
  */
int _pow_recursion(int x, int y)
{
<<<<<<< HEAD
if (y < 0)
        return (-1);
else if (y == 0)
        return (1);
else
        return (x * _pow_recursion(x, (y - 1)));

return (0);
=======
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
>>>>>>> 0913fd6c80df0c71d5f2b5905ef91a157c8b1bbe
}
