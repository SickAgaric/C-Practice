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
