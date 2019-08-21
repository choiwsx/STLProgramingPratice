#include <stdio.h>
#include <stdlib.h>
//
//
//#define N			10000
//#define MAXNUMBER	10000
//
//int ChoiceNumber(int Max)
//{
//	return rand() % Max + 1;
//}
//
//int main()
//{
//	int Numbers[N];
//
//	srand(time(nullptr));
//
//	//자루에 공 만들기
//	int RandomNumber[MAXNUMBER];
//	for (int i = 0; i < MAXNUMBER; i++)
//	{
//		RandomNumber[i] = i + 1;
//	}
//
//	//공 섞는거
//	for (int i = 0; i < MAXNUMBER; i++)
//	{
//		int first = rand() % MAXNUMBER;
//		int second = rand() % MAXNUMBER;
//		int Temp = RandomNumber[first];
//		RandomNumber[first] = RandomNumber[second];
//		RandomNumber[second] = Temp;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		Numbers[i] = RandomNumber[i];
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", Numbers[i]);
//	}
//
//
//	/*
//		//종이에 숫자 적기
//		Numbers[0] = ChoiceNumber(MAXNUMNER);
//		for (int i = 1; i < N; i++)
//		{
//			// 새 숫자를 뽑아서 이전에 뽑은 숫자인지 비교, 있는거면 다시 뽑기
//			int j = 0;
//			while (true)
//			{
//				bool bCan =  true;
//				int NewNumber = ChoiceNumber(MAXNUMNER);
//
//				for (int j = 0; j < i; j++)
//				{
//					if (Numbers[j] == NewNumber)
//					{
//						bCan = false;
//					}
//				}
//
//				if (bCan == true)
//				{
//					Numbers[i] = NewNumber;
//					break;
//				}
//			}
//		}
//
//		for (int i = 0; i < N; i++)
//		{
//			printf("%d ", Numbers[i]);
//		}
//	*/
//	return 0;
//}
//
//
//

//
//template<typename T>
//void swap(T* pa, T* pb) {
//
//	T temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//
//int main() {
//
//	int a = 3;
//	int b = 4;
//	//int *pa = nullptr;
//	//pa = &a;
//	swap<int>(&a, &b);
//	
//	float c = 3.4f;
//	float d = 6.7f;
//	swap<float>(&c, &d);	
//	
//
//
//	
//	printf("%d %d\n", a, b);
//	printf("%f %f\n", c, d);
//
//	
//
//}

void PrintArray(int* a, int n) {

	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

}

int main() {

	int n = 20;

	//int* a = (int*)malloc(n*sizeof(int));
	//a[0] = 1;
	//
	//printf("%d\n", *a);


	//free(a); // 말락 다 쓰고나면 무조건 free로 놔주어야됨.


	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = i + 1;
	}

	int* b = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < 20; i++) {
		b[i] = i + 1;
	}


	PrintArray(a,10);

	PrintArray(b, 20);
	free(b);



	return 0;

}