#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
#include <stdio.h>
int main(void)
{
	t_point p;
	printf("%d", p.x );
	
	return (0);
}
