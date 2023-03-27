#include <cstdio>   //ǥ�� ����� �������
#include <cstdlib>  //ǥ�� ���̺귯�� �������
#include <ctime>    //time�� ���õ� �������

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
	clock_t start, finish;   //���� �ð�, ������ �ð�
	double duration;        //�ɸ� �ð�

	start = clock();          //���� �ð��� start�� ����
	//����ð� �����ϰ��� �ϴ� �ڵ� �Է�
	//int a = 10 + 20;
	//int sum = sum_of_N(100000000);
	int sum2 = sum_of_N2(100000000);
	//
	finish = clock();       //����ð��� finish�� ����
	duration = (double)(finish - start) / CLOCKS_PER_SEC;  //����ð� 2ms����    
	printf("%f �� �ɷȽ��ϴ�", duration);
	return 0;
	

}