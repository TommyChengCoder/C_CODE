#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &i, &j);
//	int a = i + j;
//	printf("%d", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arr [20] = { 0 };
//	int i = 0;
//	int j = 0;
//	scanf("%[^\ns]", arr);
//	printf("%s\n",arr );
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	scanf("%d%*c%d%*c%d",&i,&j,&m );
//	printf("%d %d %d",i,j,m );
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    if (i  == 0)
//    {
//        printf("%d是0\n", i);
//    }
//    else if(i<0)
//    {
//        printf("%d是负数\n", i);
//    }
//    else
//    {
//        printf("%d是正数", i);
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//    scanf("%d%d", &i,&j);
//    i>j? printf("%d大\n", i): printf("%d大", j);
//   
//    return 0;
//}
#include <stdio.h>

int main()
{
    int year = 0;
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
    {
        printf("%d是闰年", year);
    }
    else
    {
        printf("%d是闰年", year);
    }
    return 0;
}

