#include <stdio.h>
#include <stdlib.h>
#include "Infornation.h"

int main(void) {
	people people;
	printf("�п�J�A���W�r �G ");
	scanf_s("%s", &people.name, 8);
	printf("�п�J�A���ʧO( 0 �k��; 1 �k�� ) �G ");
	scanf_s("%d", &people.sex);
	printf("�п�J�A���~�� �G ");
	scanf_s("%d", &people.age);

	printf("\n\n�١I %s\n\n�A�O�� %d ����", people.name, people.age);

	if (people.sex == 0) {
		printf("�k��\n\n");
	}else {
		printf("�k��\n\n");
	}

	system("pause");
	return 0;
}