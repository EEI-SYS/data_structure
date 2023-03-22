#include <stdio.h>

int findArrayMax(int score[], int n)
{
	int tmp = score[0];
	for (int i = 1; i < n; i++) {
		if (score[i] > tmp) {
			tmp = score[i];
		}
	}
	return tmp;
}

int main()  //정수형 변환하겠다         ()에 뭐가 없다 : 입력이 없다!
{
	int score[5] = { 12,123,12,54,1 }; //[숫자] =배열5개 만들겠다  {배열 숫자들 }
	int out;			
	out = findArrayMax(score, 5);
	printf("result = %d", out);

	return 0;
}