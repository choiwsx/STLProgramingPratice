#include <stdio.h>
#include "util.h"


void CheckOdd(int n) {

	if (n % 2 == 0) 
	{
		printf("Â¦¼ö!\n");
	}
	else
	{
		printf("È¦¼ö!\n");
	}

}

int CalculateOddSum(int Number)
{
	int sum = 0;
	//È¦¼öÀÌ¸é È¦¼öÀÇ ÇÕ
	if (Number % 2 == 1) {
		for (int i = 0; i <= Number; i++) {
			if (i % 2 == 1) {
				sum = sum + i;
			}
		}
	}
	else //Â¦¼öÀÌ¸é Â¦¼öÀÇ ÇÕ
	{
		for (int i = 0; i <= Number; i++) {
			if (i % 2 == 0) {
				sum = sum + i;
			}
		}
	}
	return sum;
}