//打印100到200之间的素数
//#include<stdio.h>
//int main()
//{
//	for (int i = 101;i<=200;i+=2)//偶数一定不是素数不试除
//	{
//		int flag = 1;//假设i为素数
//		for (int j = 3;j * j <= i;j += 2)//试除，从奇数开始，偶数一定不为素数，试除从0到根号i，优化算法
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;//找到因子后停止继续判断
//			}
//		}
//		if (flag == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}



//生成随机数1到100并打印
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num = 0;
	srand((unsigned int)time(NULL));//为rand函数通过时间变化设置随机数种子
	num = rand() % 100 + 1;
	printf("%d\n",num);
	return 0;
}

	