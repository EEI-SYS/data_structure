#include <stdio.h>
#define MAX_SIZE 10

//배열을 파라미터로 받는 함수
void sub(int x, int arr[])
{
	x = 10;
	arr[0] = 10;
}

int main()
{

	int var = 0, list[MAX_SIZE];
	list[0] = 0;
	sub(var, list);
	printf("var=%d, list[0]=%d\n", var, list[0]);

	return 0;
	//var?, list[0]?
}