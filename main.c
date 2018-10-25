#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "include/vector3.h"

int main ()
{
	vector3_t a = {-1, -1, -1};
 	vector3_t b = { 2, -1,  2};

	printf("VECTOR1 = (%d, %d, %d)\n", a.x, a.y, a.z);
	printf("VECTOR2 = (%d, %d, %d)\n", b.x, b.y, b.z);

	vector3_t c = vector3_sum (&a, &b);
	printf("SUM = (%d, %d, %d)\n", c.x, c.y, c.z);

	c = vector3_dif (&a, &b);
	printf("DIF = (%d, %d, %d)\n", c.x, c.y, c.z);
	
	c = vector3_mult_num (&a, 5);
	printf("MULT (v1, 5) = (%d, %d, %d)\n", c.x, c.y, c.z);

	double len = vector3_get_len (&b);
	printf("LEN (v2) = %.2f\n", len);

	return 0;
}
