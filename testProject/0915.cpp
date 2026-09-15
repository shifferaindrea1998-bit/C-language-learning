//打印从100到200的素数
//#include<stdio.h>
//int main()
//{
//	for (int i = 100;i <= 200;i++)
//	{
//		int flag = 1;//假设i是素数
//		for (int j = 3;j * j < i;j += 2)
//		{
//			if (i % j == 0)
//			{
//			    flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//自动生成1到100的随机数
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num = 0;
	srand((unsigned int)time(NULL));
	num = rand() % 100 + 1;
	printf("%d\n", num);
	return 0;
}