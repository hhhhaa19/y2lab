#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
//��һ��ʮ������������λ���������ֱ�Ӵ�ӡ
void Convert(int num)
{//����λ��
	int temp = num;
	int count = 0;//λ��
	while (temp)
	{
		temp /= 10;
		count++;
	}
	while (1)
	{
		int temp = num;
		while (temp / 10)
		{
			temp /= 10;
		}//�����ݴ�ȡ����һλ
		printf("%d\t", temp);
		num -= temp * pow(10, count-1);//��ԭ������ȥ����һλ��123->23
		count--;//λ����һ
		if (count == 0 )//λ��Ϊһ���˳�
			break;
	}
	return 0;
}