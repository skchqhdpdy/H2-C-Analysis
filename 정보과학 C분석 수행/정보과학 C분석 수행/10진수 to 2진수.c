#include <stdio.h>

//	2021/10/05 화

int main(void) {

	int arr[10];
	int input, i, mok, nmg;

	printf("1000이하의 10진수를 입력하여 주십시오: ");
	scanf_s("%d", &input);

	mok = input;
	nmg = input;

	for (i = 9; mok != 0; i--)
	{
		nmg = mok;
		nmg %= 2;
		mok /= 2;

		arr[i] = nmg;
		printf("arr[%d] = %d \n", i, arr[i]);
		
	}
	i++;
	printf("\n\n%d의 2진수 값:  ", input);

	for ( ; i < 10; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;

}