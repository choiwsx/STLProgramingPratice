#include <stdio.h>
#include "util.h"


void CheckOdd(int n) {

	if (n % 2 == 0) 
	{
		printf("¦��!\n");
	}
	else
	{
		printf("Ȧ��!\n");
	}

}

int CalculateOddSum(int Number)
{
	int sum = 0;
	//Ȧ���̸� Ȧ���� ��
	if (Number % 2 == 1) {
		for (int i = 0; i <= Number; i++) {
			if (i % 2 == 1) {
				sum = sum + i;
			}
		}
	}
	else //¦���̸� ¦���� ��
	{
		for (int i = 0; i <= Number; i++) {
			if (i % 2 == 0) {
				sum = sum + i;
			}
		}
	}
	return sum;
}