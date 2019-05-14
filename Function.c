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