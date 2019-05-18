#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=5; b++)
		{
			for(c=1; c<=5; c++)
			{
				for(d=1; d<=5; d++)
				{
					for(e=1; e<=5; e++)
					{
						if((2==b&&3!=a)||(2!=b&&a==3)==1)
							if((2==b&&4!=e)||(2!=b&&e==4)==1)
								if((1==c&&2!=d)||(1!=c&&d==2)==1)
									if((5==c&&3!=d)||(5!=c&&3==d)==1)
										if((5==e&&1!=a)||(5!=e&&1==a)==1)
										{
											if(120==a*b*c*d*e)
											{
												{

													printf("A=%d B=%d C=%d D=%d E=%d\n",a,b,c,d,e);
												}
											}
										}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}






//判断凶手
#include <stdio.h>
#include <stdlib.h>



int main()
{
	char killer;
	for(killer='A';killer<='D';killer++)
	{
		if((killer!='A')+(killer=='C')+(killer=='D')+(killer!='D')==3)
		{

			printf("%c是凶手\n",killer);
			break;
		}

	}
	system("pause");
	return 0;
}








//杨辉三角
#include <stdio.h>
#include<stdlib.h>
#define num 9 

int main()
{
	int i = 0;
	int j = 0;
	int a[num][num];
	for(i=0;i<num;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2;i<num;i++)
	{
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
	for(i=0;i<num;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}











//
#include<stdlib.h>

unsigned int bit_reverse(int x)
{
	int data = 0;
	int a;//求整型的比特位，在这里为32
	int ret;//求整型的比特位，在这里为32
	
	//求整型的比特位，在这里为32
	int i = 0;
	for(i=0; i<32;i++)
	{
		a = x&1;
		data = data|a;
		data = data<<1;
		x = x>>1;
	}
	return data;
}
int main()
{
	int data = 0;
	printf("please enter a number: ");
	scanf("%d", &data);
	printf("reverse data: %u\n",bit_reverse(data));
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int a[] = {1,3,1,2,4,2,3};
	int len = sizeof(a)/sizeof(a[0]);
	for(i= 1;i<len; i++)
	{
		a[0] = a[0]^a[i];
	}
	printf("%d",a[0]);
	system("pause");
	return 0;

}








//
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void reverse(char* strat,char* end)
{
	while(strat<end)
	{
		char temp = *strat;
		*strat = *end;
		*end = temp;
		strat++;
		end--;
	}
}


void reverse_str(char* str,int sz)
{
	char* str1 = str;
	char* left = str;
	char* right = str + sz-1;
	reverse(left,right);
	while(*str1)
	{
		left = str1;
		while((*str1!='\0')&&(*str1!=' '))
		{
			str1++;
		}
		right = str1-1;
		reverse(left,right);
		if(*str1==' ')
		{
			str1++;
		}
	}
}

int main()
{
	char arr[] = "student a am i";
	int sz = strlen(arr);
	reverse_str(arr, sz);
	printf("%s", arr);
	getchar();
	return 0;
}






//
#include <stdio.h>
#include <stdlib.h>


void MoveNum(int a[],int sz)
{
	int* left = a;
	int* right = a+sz-1;
	int temp;
	while(left<right)
	{
		while((left<right)&&((*left)%2!=0))
		{
			left++;
		}
		while((left<right)&&((*right)%2==0))
		{
			right--;
		}
		if(left<right)
		{
			temp = *left;
			*left = *right;
			*right = temp;
		}

	}
}


int main()
{
	int a[] = {1,2,3,4,5,6,7,8};
	int i = 0;
	int sz = sizeof(a)/sizeof(a[0]);
	MoveNum(a,sz);
	for(i=0; i<sz; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}






//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LEFT(char arr[],int len, int k)
{
	int i = 0;
	k = k%len;
	for(i=0; i<k; i++)
	{
		int j = 0;
		char temp = arr[0];
		for(j=0; j<len-1; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[j] = temp;
	}
}

int main()
{
	char arr[] = "ABCD";
	int k = 2;
	int len = strlen(arr);
	printf("原数组%s\n",arr);
	LEFT(arr,len,k);
	printf("左旋后数组%s\n",arr);
	system("pause");
	return 0;
}


