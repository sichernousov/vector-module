#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "../include/vector3.h"

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
