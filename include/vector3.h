#ifndef VECTOR3_H
#define VECTOR3_H

typedef struct vector3_s
{
	int x, y, z;
}vector3_t;

vector3_t vector3_sum (vector3_t *v1, vector3_t *v2);
vector3_t vector3_dif (vector3_t *v1, vector3_t *v2);
vector3_t vector3_mult_num (vector3_t *v1, int num);
double vector3_get_len (vector3_t *v1);

#endif
