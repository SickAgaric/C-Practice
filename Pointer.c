//互换值
#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
};

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d",&a);
	scanf("%d",&b);
	swap(&a,&b);
	printf("%d %d\n",a,b);
	system("pause");
	return 0;
}


//判断闰年
#include<stdio.h>
#include<stdlib.h>

int  function(int *year)
{
	if(*year%4==0&&*year%100!=0||(*year%400==0))
	{
		 return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	int ret = 0;
	scanf("%d",&year);
	ret = function(&year);
	if(ret==1)
	{
		printf("%d",year);
	}
	else
	{
		printf("不是闰年\n");
	}
	system("pause");
	return 0;
}
//数字的初始化 清空 逆置
#include <stdio.h>
#include <stdlib.h>

void menu()
{
	printf("*******************************************\n");
	printf("**************1、初始化数组    ************\n");
	printf("**************2、清空数组      ************\n");
	printf("**************3、数组元素的逆置************\n");
	printf("**************4、退出程序      ************\n");
	printf("*******************************************\n");
}
void reverse(int *arr,int len)
{
	int temp = 0;
	int i = 0;
	for(i=0; i<len/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[len-1-i];
		arr[len-1-i] = temp;
	}
	for(i=0; i<len; i++)
	{
		printf("%d",arr[i]);
	}
}
void empty(int *arr,int len)
{
	int i = 0;
	for(i=0; i<len; i++)
	{
		arr[i] = 0;
		printf("%d",arr[i]);
	}
}
void init(int *arr,int len)
{
	int i = 0;
	for(i=0; i<len; i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0; i<len; i++)
	{
		printf("%d",arr[i]);
	}
}
int main()
{
	int i = 0;
	int count = 0;
	int *arr = 0;
	int input = 0;
	int n = 0;
	printf("请输入数组长度\n");
	scanf("%d",&n);
	arr = (int *)malloc(n);
	menu();

	while(1)
	{
		printf("请选择");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			init(arr,n-1);
			count = 1;
			break;
		
		case 2:
			empty(arr,n-1);
			break;
		
		case 3:
			reverse(arr,n-1);
			break;

		case 4:
			printf("结束\n");
			break;
		}
	}
	system("pause");
	return 0;
}
//判断是否为素数
#include <stdio.h>
#include<stdlib.h>

int swap(int input)
{
	int i = 0;
	for(i=2; i<input;i++)
	{
		if(input%i==0)
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int input = 0;
	int ret = 0;
	printf("请输入\n");
	scanf("%d",&input);
	ret = swap(input);
	if(ret==0)
	{
		printf("是素数\n");
	}
	else
	{
		printf("不是素数\n");
	}
	system("pause");
	return 0;
}

//返回二进制中一的个数
#include <stdio.h>
#include <stdlib.h>

int count_one_bits(unsigned int value) 
{ 
	int count = 0;
	
		while(value)
		{
			
				if(value%2==1)
				{
					count++;
				}
				value = value/2;
			
		}
		return count;

}
int main()
{
	int value;
	scanf("%d",&value);

	count_one_bits(value); 
	printf("%d\n",count_one_bits(value));
	system("pause");
	return 0;
}

//获取二进制中奇数位和偶数位
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int input  = 0;
	int i = 0;
	int count = 0;
	
	int a[32] = {0};
	scanf("%d",&input);
	
	for(i=0; input!=0; i++)
	{
		a[i] = input%2;
		input = input/2;
		count = i;
	}
	for(;count<32; count++)
	{
		a[count] = 0;
	}
	printf("偶数序列为");
	for(i=31; i>=0; i-=2)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	printf("奇数序列为");

	for(i=30; i>=0; i-=2)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	
	
	system("pause");
	return 0;
}
#include<stdio.h>
#include<assert.h>


void print(int arr[3][5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)

	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}



//void test(int arr[])
//{
//	;
//}
//void test(int arr[10])
//{
//	;
//}
//void test(int *arr)
//{
//	;
//}
//void test(int *arr[10])
//{
//	;
//}
void test()
{
	printf("hehe\n");
}

struct TEST
{
	int Nun;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;


int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };

	char **cp[] = { c + 3, c + 2, c + 1, c };

	char ***cpp = cp;
	printf("%s\n\r", **++cpp);
	printf("%s\n\r", *--*++cpp + 3);
	printf("%s\n\r", *cpp[-2] + 3);
	printf("%s\n\r", cpp[-1][-1] + 1);
	system("pause");
	return 0;
}
	

	/*printf("%s", **++cpp);*/

	/*printf("%s", *--*++cpp + 3);*/
	/*printf("%s", *cpp[-2] + 3);*/
	/*printf("%s\n", cpp[-1][-1] + 1);*/

	/*char* a[] = { "A", "b", "c" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);*/

	/*int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(aa + 1);
	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));*/
	/*int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);*/
	//00B5FC54   0F65D957
	/*int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int* p = a;
	p = a[0];
	printf("%d", p[0]);*/

	/*int a[4] = { 1, 2, 3, 4 };

	int *ptr1 = (int*)&a + 1;
	int *ptr2 = (int*)((int)a+1);

	printf("%x %x\n", ptr1[-1], *ptr2);*/
	/*printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);*/

	/*printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);*/


	/*
	int a[5] = { 1, 2, 3, 4, 5 };

	int* ptr = (int*)(&a + 1);

	printf("%d %d", *(ptr - 1), *(a + 1));*/

	/*int a[10] = { 0 };
	int *a[10] = { 0 };*/
	/*char str1[] = "abc";
	char str2[] = "abc";
	char* str3 = "abc";
	char* str4 = "abc";


	if (str1 == str2)
	{
	printf("same\n");

	}
	else
	{
	printf("not same\n");
	}

	if (str3 == str4)
	{
	printf("same\n");

	}
	else
	{
	printf("not same\n");
	}
	system("pause");
	return 0;*/

	//char arr[10] = { 0 };


	//printf("arr = %p", arr);
	//printf("&arr = %p", &arr);

	//printf("arr+1 = %p", arr+1);
	//printf("&arr+1 = %p", &arr+1);




	/*int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int(*p)[10] = &arr;
	print(arr, 3, 5);*/

	/*system("pause");
	return 0;*/

//}
