#ifndef VECTOR3_H
#define VECTOR3_H

typedef struct vector3_t
{
	int x, y, z;
}vector3_t;

vector3_t vector3_sum (vector3_t *v1, vector3_t *v2);

#endif
