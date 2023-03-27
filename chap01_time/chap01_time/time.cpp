#include <cstdio>   //표준 입출력 헤더파일
#include <cstdlib>  //표준 라이브러리 헤더파일
#include <ctime>    //time과 관련된 헤더파일

int sum_of_N(int n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum = sum + i;
	}
	return sum;
}

int sum_of_N2(int n)
{
	return (n * (n + 1)) / 2;
}


int main()
{
	clock_t start, finish;   //시작 시각, 끝나는 시각
	double duration;        //걸린 시간

	start = clock();          //현재 시각을 start에 저장
	//실행시간 측정하고자 하는 코드 입력
	//int a = 10 + 20;
	//int sum = sum_of_N(100000000);
	int sum2 = sum_of_N2(100000000);
	//
	finish = clock();       //현재시각을 finish에 저장
	duration = (double)(finish - start) / CLOCKS_PER_SEC;  //경과시간 2ms이하    
	printf("%f 초 걸렸습니다", duration);
	return 0;
	

}