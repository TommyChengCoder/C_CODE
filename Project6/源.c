#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	int arr[20] = { 0 };
//	int r = sizeof(arr) / sizeof(arr[0]);      //求数组大小
//	printf("%d\n", r);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][5] = { {1,2,3,4,5} ,{2,3,4,5,6} ,{6,7,8,9,10} };
//	for (i = 0; i <= 2;i++)
//	{
//		for (j = 0; j <= 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i <= 2;i++)
//	{
//		for (j = 0; j <= 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");  // 一行打印完，在这里换行
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int arr[n];    //VS 不支持变长数组
//	return 0;     //变长数组不能初始化
//}
//int main()
//{
//	
//	char arr1[] = { "welcome to bit !!!!!!!" };
//	char arr2[] = { "**********************" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		if (left < right)
//			{
//			system("cls");  //只有不是最后一次才清屏
//			}
//	}	
//	
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int num = 0;
//	int flag = 0;
//	scanf("%d", &num);
//	int r = sizeof(arr) / sizeof(arr[0]);
//	for (; i <= r; i++)
//	{
//		
//		if (num == arr[i])
//		{
//			flag = 1;
//			break;
//		}
//		
//	}
//	if (flag == 1)
//	{
//		printf("找到了,下表是%d\n",i);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
int main()
{
	int num = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	scanf("%d", &num);
	int left = 0;
	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
	int mid = 0;
	int flag = 0;
	while (left <= right)
	{
		 mid = (left +( right-left) / 2);
		if (num > arr[mid])
		{
			left = mid + 1;
		}
		else if (num < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	if (flag ==1)
	{
		printf("找到了,下标是%d\n", mid);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}