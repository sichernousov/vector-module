#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "include/vector3.h"

int main ()
{
	vector3_t a = {-1, -1, -1};
 	vector3_t b = { 2, -2,  2};
	vector3_t c = { 0,  0,  0};

	c = vector3_sum (&a, &b);
	printf("VECTOR = (%d, %d, %d)\n", c.x, c.y, c.z);

	return 0;
}
