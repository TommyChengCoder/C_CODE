#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch(num%3)
//	{
//	  case 0:
//		  printf("余数是0\n");
//		  break;
//	  case 1:
//		  printf("余数是1\n");
//		  break;
//	  case 2:
//		  printf("余数是2\n");
//		  break;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{    
//	case 1:
//		printf("是星期一");
//		break;
//	case 2:
//		printf("是星期二");
//		break;
//	case 3:
//		printf("是星期三");
//		break;
//	case 4:
//		printf("是星期四");
//		break;
//	case 5:
//		printf("是星期五");
//		break;
//	case 6:
//		printf("是星期六");
//		break;
//	case 7:
//		printf("是星期天");
//		break;
//	default:
//		printf("输入错误，请输入1—7的数字\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int num = 1;
//	while (num <=10)
//	{
//		printf("%d ", num);
//		num += 1;
//	}
//		
//    return 0;
//}
//int main()
//{
//	int num = 1;
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		printf("%d ", num%10);
//		num /= 10;
//	}
//		
//    return 0;
//}
//int main()
//{
//	int num = 1;
//	scanf("%d", &num);
//	for (;num != 0;num/=10)
//	{
//		printf("%d ", num%10);
//	}
//		
//    return 0;
//}
//int main()
//{
//	int num = 1;
//	int sum = 0;
//	for (num = 1; num <= 100; num += 1)
//	{
//		if (num % 3 == 0)
//		{
//			sum += num;
//		}
//	}
//	printf("sum=%d ", sum);
//
//    return 0;
//}
//int main()
//{
//	int num = 1;
//	do
//	{
//		printf("%d ", num);
//		num += 1;
//     } while (num <= 10);
//    return 0;
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	/*for (; num != 0; num / 10)
//	{
//		i++;
//		num /= 10;
//	}
//	printf("数字中有%d位数", i);*/
//	do
//	{
//		i++;
//		num /= 10;
//     } while (num != 0);
//	printf("数字中有%d位数", i);
//    return 0;
//}
//int main()
//{
//	int i = 1;
//	while( i <= 10)
//	{
//		
//		if (i == 5)
//		{
//			i++;
//			continue;
//		}
//		else
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
int main()
{
	int i = 1;
	int j = 1;
	for (i = 100; i <= 200; i++)
	{
		int flag = 1;
		for (j = 2; j < i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag==1)
		printf("%d ", i);
	}
	return 0;
}