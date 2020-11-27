#include <stdio.h>

typedef struct _date {
	int year, month, day;
}date;
typedef struct _order {
	char num[11];
	date dates;
	int amount;
}order; 