//�ھ���
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i = 0;
	int input = 0;
	int a = 0;
	scanf("%d",&input);
	for(i=1; i<=input; i++)
	{
		for(a=1; a<=i; a++)
		{
			printf("%d*%d=%-4d",a,i,i*a);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}



//������
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("############################\n");
	printf("#####     1. play      #####\n");
	printf("#####     0. exit      #####\n");
	printf("############################\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret =  rand()%100+1;
	while(1)
	{
		printf("����������");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}

	}
}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}




//�۰����

#include <stdio.h>
#include <stdlib.h>


int BinarySeach(int a[],int k,int left,int right)
{

	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if(a[mid]<k)
		{
			left = mid+1;
		}
		else if(a[mid]>k)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}

	}
	return -1;

}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int mid = 0;
	int k = 7;
	int left = 0;
	int right = sizeof(a)/sizeof(a[0])-1;
	int ret = BinarySeach(a,k,left,right);
	if(ret==-1)
	{
		printf("�Ҳ���");
	}
	else
	{
		printf("%d",ret);
	}

	system("pause");
	return 0;
}


//��¼�ַ�

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num;
	while((num=getchar())!=EOF)
	{
		if(num>='a'&&num<='z')
		{
			printf("%c",num-32);
		}
		else if(num>='A'&&num<='Z')
		{
			printf("%c",num+32);
		}
	}

	system("pause");
	return 0;
}


//���������¼

#include <stdio.h>
#include <stdlib.h>


int main()
{

	char a[20] = {0};
	int i = 0
		for(i=0; i<3; i++)
		{
			printf("������>\n");
			scanf("%s",a);
			if(strcmp(a,"12345")==0)
			{
				printf("������ȷ\n");

			}
			else
			{
				printf("�������\n");
			}
		}
		if(i==3)
		{
			printf("�����������\n");
		}
		system("pause");
		return 0;
}