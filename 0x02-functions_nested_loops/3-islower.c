#include "main.h"
/**
 * lower values 
 */
int _islower(char c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}else{
		return (1);
	}
}
