#include <stdio.h>

//	2021/10/05 ȭ

int main(void) {

	int arr[10];
	int input, i, mok, nmg;

	printf("1000������ 10������ �Է��Ͽ� �ֽʽÿ�: ");
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
	printf("\n\n%d�� 2���� ��:  ", input);

	for ( ; i < 10; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;

}