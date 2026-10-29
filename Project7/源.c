#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int Add(int x, int y) 
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int r = Add(num1, num2);
//	printf("%d", r);
//	return 0;
//}
//int even(int x)
//{
//	if (x % 2 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int r = 0;
//	scanf("%d", &r);
//	r = even(r);
//	if (r == 1)
//		printf("是偶数\n");
//	else if (r==0)
//		printf("是奇数\n");
//	return 0;
//}
//void set_arr(int sz,int arr[])
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void print(int sz,int arr[])
//{
//	for (int i = 0; i <  sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(sz, arr);
//	print(sz,arr);
//	return 0;
//}
int leap_year(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;

}
int get_year(int year, int month)
{              //0  1   2  3  4  5  6  7  8 9  10 11 12
	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	           //   1  2  3   4  5  6  7  8  9 10 11 12
	int a=leap_year(year);
	if ((a == 1)&&(month==2))
	{
		return arr[month]+1;
	}
	else
	{
		return arr[month];
	}
}
int main()
{
	int year = 0;
	int month = 0;
	scanf("%d%d", &year, &month);
	int r=get_year(year,month);
	printf("有%d天", r);
	return 0;
}