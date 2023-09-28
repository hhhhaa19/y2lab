#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
//把一个十进制整数各个位数提出，并直接打印
void Convert(int num)
{//计算位数
	int temp = num;
	int count = 0;//位数
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
		}//利用暂存取出第一位
		printf("%d\t", temp);
		num -= temp * pow(10, count-1);//在原数据中去掉第一位，123->23
		count--;//位数减一
		if (count == 0 )//位数为一，退出
			break;
	}
	return 0;
}