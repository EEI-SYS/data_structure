#include <stdio.h>

double power(double x, int n)
{
	if (n == 0) return 1;
	else if ((n % 2) == 0)   //n이 짝수인 경우
		return power(x * x, n / 2);
	else                   //n이 홀수인 경우
		return x* power(x * x, (n - 1) / 2);
}

int main(void)
{
	printf("power function \n");
	printf("%f", power(2, 8));
	return 0;
}
