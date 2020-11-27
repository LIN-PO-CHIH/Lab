#include <stdio.h>
#include <stdlib.h>
#include "Infornation.h"

int main(void) {
	people people;
	printf("請輸入你的名字 ： ");
	scanf_s("%s", &people.name, 8);
	printf("請輸入你的性別( 0 男生; 1 女生 ) ： ");
	scanf_s("%d", &people.sex);
	printf("請輸入你的年齡 ： ");
	scanf_s("%d", &people.age);

	printf("\n\n嗨！ %s\n\n你是位 %d 歲的", people.name, people.age);

	if (people.sex == 0) {
		printf("男生\n\n");
	}else {
		printf("女生\n\n");
	}

	system("pause");
	return 0;
}