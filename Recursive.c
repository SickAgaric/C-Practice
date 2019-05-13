//斐波那契数
#include <stdio.h>
#include <stdlib.h>

int fit (int n)
{
	int a1 = 1;
	int a2 = 1;
	int a3 = 0;
	if(n<=2)
	{
		return 1;
	}
	else 
	{
		while(n>2)
		{
			a3 = a1+a2;
			a2 = a3;
			a1 = a1;
			n--;
		}
		return a3;
	}
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	printf("%d",fit(n));
	system("pause\n");
	return 0;
}


//用递归实现次方运算
#include <stdio.h>
#include<stdlib.h>
int swap(int n, int k)
{
	if(k<=0)
	{
		return 1;

	}
	else
		return n*swap(n,k-1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	printf("%d",swap(n,k));
	system("pause");
	return 0;
}


//递归函数DigitSum
#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n)
{
	if(n<=0)
	{
		return 0;
	}
	else if(n<9&&n>0)
	{
		return n;
	}
	else 
		{
			return (n%10)+DigitSum(n/10);
	}
}

int main()
{
	int n = 0;
	scanf("%d\n",&n);
	DigitSum(n);
	printf("%d",DigitSum(n));
	system("pause");
	return 0;
}

//用递归实现字符反向排列
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int  strlen_s(char *a)
{
	if(*a)
	{
		return 1+strlen_s(a+1);
	}
	return 0;
}
int main()
{
	char *a = "abcsd";
	
	
	strlen_s(a);
	printf("%d\n",strlen_s(a));
	 system("pause");
	 return 0;
}

//用递归实现打印整数的每一位
#include <stdio.h>
#include<stdlib.h>
void swap(int n)
{
	if(n>9)
	{
		swap(n/10);
	}
	printf("%d ",n%10);

}
int main()
{
	int n = 0;
	scanf("%d",&n);
	swap(n);
	system("pause");
	return 0;
}
//strlen的递归与非递归实现
#include<stdio.h>
#include <stdlib.h>
#include <string.h>


int swap(char *a)
{
	int n = 0;
	while(*a=='\0')
	{
		return 0;
	}
	return 1+swap(a+1);
}

int main()
{
	char a[20];
	scanf("%s",a);
	swap(a);
	printf("%d\n",swap(a));
	/*int len = 0;
	scanf("%s",a);
    len = strlen(a);
	printf("%d\n",len);*/
	system("pause");
	return 0;
}

//用递归和非递归实现n的阶数
#include<stdio.h>
#include<stdlib.h>

int swap(int input)
{
	
	if(input==1)
		return 1;
	else
		return input*swap(input-1);
}
int main()
{
	int input = 0;
	scanf("%d",&input);
	swap(input);
	printf("%d",swap(input));
	/*int i = 0;
	int input = 0;
	int num = 0;
	scanf("%d",&input);
	num = input;
	for(i=0; i<=input; i++)
	{
		
		num*=input-1;
		input--;
		
	}*/
	/*printf("%d\n",num);*/
	system("pause");
	return 0;
}