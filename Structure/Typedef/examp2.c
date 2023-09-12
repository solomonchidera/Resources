#include "main.h"

struct Computer
{
	char *name;
	char *brand;
};

/*Using typedef*/
typedef struct Computer Computer;/*This is the alias in this case*/
/*--------------------------*/

typedef struct Computer
{
	char *name;
	char *brand;
} Computer;/*This is the alias in this case*/
