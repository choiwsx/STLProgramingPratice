//Day02 ����

#include <stdio.h>
#include "util.h"


int main() {
	int n = 0;
	scanf("%d", &n);
	CheckOdd(n);

	printf("%d\n", CalculateOddSum(n));
}