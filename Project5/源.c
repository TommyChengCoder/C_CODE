#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//    char input[20] = { 0 };
//    // 关机只执行一次！放到循环外面
//    system("shutdown -s -t 60");
//again:
//    printf("你的电脑将在一分钟后关机，输入“我是猪”，即可取消关机\n");
//    scanf("%s", input);
//
//    if (strcmp(input, "我是猪") == 0)
//    {
//        system("shutdown -a");
//        printf("还算配合\n");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}
//# include <time.h>
//void game()
//{
//	//1. 生成随机数
//	int r = rand() % 100 + 1;//生成1—100的数字
//	//2.开始猜数字
//	int guess = 0;
//	printf("请猜数字\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else 
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{ 
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		printf("*****************************\n");
//		printf("*****************************\n");
//		printf("******** 1.开始游戏 *********\n");
//		printf("******** 0.退出游戏 *********\n");
//		printf("*****************************\n");
//		printf("*****************************\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//				break;
//		}
//	} while (input);
//
//	
//	return 0;
//}
//
int main()
{
	int arr[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}