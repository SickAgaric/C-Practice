//输出整数的每一位
#include <stdio.h>
#include <stdlib.h>

void swap(int input)
{
	if(input<10 && input>0)
	{
		printf("%d ",input);
	}
	else
	{
		printf("%d",input%10);
		return swap(input/10);

	}
}
int main()
{
	int input = 0;
	scanf("%d",&input);
	swap(input);

	system("pause");
	return 0;
}
//计算一个参数中一的个数的函数


#include <stdio.h>
#include <stdlib.h>
int swap(unsigned int c)
{
	int count = 0;
	while(c)
	{
		count++;
		c = c&(c-1);

	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	int c = 0;
	scanf("%d %d",&m,&n);
	c = m^n;
	swap(c);
	printf("%d",swap(c));
	system("pause");
	return 0;
}

//# include <stdio.h>
//
//# include <stdlib.h>
//
//
//int count_one_bits(int num, int count) //计算一个参数中一的个数的函数
//{
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	return count;
//}
//int main()
//{
//	int count = 0;
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	int i = 0;
//	printf("请输入两个数：\n");
//	scanf("%d%d", &m ,&n);
//	a = m^n; //两个数异或相同为零，不同为一
//	i = count_one_bits(a, count);
//	printf("参数二进制中不同的个数为：%d\n", i);
//	system("pause");
//	return 0;
//}
////找一个数中9的个数

#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i = 0;
	int count = 0;
	for(i=1;i<=100;i++)
	{
		if(i%10==9)
			count++;
		if(i/10==9)
			count++;
	}
	printf("%d\n",count);
	system("pause");
	return 0;
}

//交换数组
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int a[]={1,2,3,4};
	int b[]={2,3,4,5};
	int len = sizeof(a)/sizeof(a[0]);
	int temp = 0;
	int i = 0;
	for( i=0;i<len;i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10;
	int b = 6;
	printf("%d\n",(a+b)>>1);
	system("pause");
	return 0;
}









//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int  JUDGE(char arr1[],char arr2[])
{
	if(0 == strcmp(arr1,arr2))
	{
		return 0;
	}
	else
		return 1;
}

void LEFT1(char arr1[],int len,int k)
{
	int i = 0;
	k = k%len;
	for(i=0; i<k; i++)
	{
		int j = 0;
		char temp = arr1[0];

		for(j=0; j<len-1; j++)
		{
			arr1[j] = arr1[j+1];
		}
		arr1[j] = temp;
	}
}
void LEFT2(char arr1[],int len,int k)
{
	int i = 0;
	k = k%len;
	for(i=0; i<k; i++)
	{
		int j = 0;
		char temp = arr1[len-1];
		
		for(j=len-1; j>0; j--)
		{
			arr1[j] = arr1[j-1];
		}
		arr1[0] = temp;
	}
}


int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "CDEAB";
	int k = 2;
	int len = strlen(arr1);
	if(k<0)
	{
		LEFT1(arr1,len,k);
		JUDGE(arr1,arr2);
		printf("相同，返回值为\n");
		printf("%d\n",JUDGE(arr1,arr2));

	}
	
	
	else if(k>=0)
	{
		LEFT2(arr1,len,k);
		JUDGE(arr1,arr2);
		printf("不相同，返回值为\n");

		printf("%d\n",JUDGE(arr1,arr2));

	}

	printf("%s\n",arr1);
	system("pause");
	return 0;
}









//

#include <stdio.h>
#include <stdlib.h>

void find_data(int arr[],int len)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	for(; i<len; i++)
	{
		flag = 0;
		for(j=0; j<len; j++)
		{
			if(arr[i]==arr[j]&&i!=j)
				flag = 1;
		}
		if( 0 == flag)
			printf("%d\n",arr[i]);

	}
}


int main()
{
	int arr[] = {1,2,1,2,3,4,5,5};
	int len = sizeof(arr)/sizeof(arr[0]);
	find_data(arr,len);
	system("pause");
	return 0;
}


#include<stdio.h>
#include <stdlib.h>


int main()
{
	int money = 20;
	int total = money;
	int empty = money;
	while(empty>=2)
	{
		total += empty/2;
		empty = empty/2+empty%2;
	}
	printf("%d\n",total);
	system("pause");
	return 0;
}
