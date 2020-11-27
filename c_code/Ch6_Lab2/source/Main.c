#include <stdio.h>
#include <stdlib.h>
#include "Infornation.h"

int main(void) {

	order order1 = { "AHK08A1024", {1994, 3, 8}, 1487 };
	order order2 = { "USA08A1025", {2015, 5, 20}, 54530 };
	order order3 = { "UNK08A1028", {2020, 8, 7}, 6638613 };

	printf("    ************************\n");
	printf("    *       訂單資料       *\n");
	printf("    ************************\n");

	printf("==========================================\n");
	printf("訂單編號       訂貨日期      訂貨金額\n");
	printf("==========================================\n");

	printf("%-10s %8d/%02d/%02d    NT$%10d\n", order1.num, order1.dates.year, 
			order1.dates.month, order1.dates.day, order1.amount);
	printf("%-10s %8d/%02d/%02d    NT$%10d\n", order2.num, order2.dates.year,
			order2.dates.month, order2.dates.day, order2.amount);
	printf("%-10s %8d/%02d/%02d    NT$%10d\n", order3.num, order3.dates.year,
			order3.dates.month, order3.dates.day, order3.amount);

	printf("\n\n");

	system("pause");
	return 0;
}