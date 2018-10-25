#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "../include/vector3.h"

#define SQR(x) ((x)*(x))

vector3_t vector3_sum (vector3_t *v1, vector3_t *v2)
{
	vector3_t tmp = { v1->x + v2->x, v1->y + v2->y, v1->z + v2->z };
	return tmp;
};

vector3_t vector3_dif (vector3_t *v1, vector3_t *v2)
{
	vector3_t tmp = { v1->x - v2->x, v1->y - v2->y, v1->z - v2->z };
	return tmp;
};

vector3_t vector3_mult_num (vector3_t *v1, int num)
{
	vector3_t tmp = { num*v1->x, num*v1->y, num*v1->z };
	return tmp;
};

double vector3_get_len (vector3_t *v1)
{
	return sqrt( SQR(v1->x) + SQR(v1->y) + SQR(v1->z) ); 
};
