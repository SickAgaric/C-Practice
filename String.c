#include <stdio.h>
#include <stdlib.h>

char* my_strcat(char* dest, char* src)
{
	
	char* ret = dest;
	while (*dest)
	{
		*dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char str1[20] = "HELLO";
	char str2[5] = "NU";
	printf("%s",my_strcat(str1,str2));
	system("pause");
	return 0;
}


#include <stdio.h>
#include <stdlib.h>

char* my_strcpy(char* dest,char* src) 
{
	
	char* ret = dest;
	while(*dest++ = *src++)
	{
		;
	}
	return ret;//此函数为返回函数，因此定义一个ret指针函数；
}
int main()
{
	char str1[] = "Hello";
	char str2[10];
	my_strcpy(str2,str1);
	printf("%s",my_strcpy(str2,str1));
	system("pause");
	return 0;
}




//
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

const char* my_strstr(const char* str1,const char* str2)
{
	/*int i = 0;
	int len1 = sizeof(str1)/sizeof(str1[0]);
	int len2 = sizeof(str2)/sizeof(str2[0]);
	int address = str2;
	for(i=0; i<len2-len1; i++)
	{
		if(*str2 == *str1)
		{
			for(i=0; i<len2; i++)
			{
				if(*str2++ == *str1++)
				{
					;
				}
				else
					return NULL;
			}
			return 
		}
		else
		str1 = str1++;*/

	//}
	assert(NULL!=str1&&NULL!=str2);


	while(*str1!='\0')
	{
		const char* p = str1;
		const char* q = str2;
		const char* res = NULL;
		while(*p)
		{
			res = p;
			while(*p && *q && *p++ == *q++)
			{
				;
			}
			if(!*q)
			{
				return res;
			}
			if(!*p)
			{
				return NULL;
			}
		}
		str1++;
	}
	return NULL;
}
 

int main()
{
	char str1[] = "ABCDEF";
	char str2[] = "CDE";
	const char* r = my_strstr(str1,str2);
	printf("%s",r);
	system("pause");
	return 0;
}






//
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void* my_memcpy(void* dest, void* src,size_t n)
{
	void* ret = dest;
	char* str1 = (char*)dest;
	char* str2 = (char*)src;
	assert(dest);
	assert(src);
	while (n--)
	{
		*str1++ = *str2++;
	}
	return ret;
}

int main()
{

	char str1[] = "Hello";
	char str2[10];
	int c = 1;
	printf("%s",my_memcpy(str1,str2,c));
	system("pause");
	return 0;
}








//
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
char* my_strchr(const char* str,int c)
{
	assert(str);
	while(*str)
	{
		
		if(*str == c)
			return str;
		str++;
	}
	return NULL;
}
int main()
{
	char str[] = "Hello";
	char ch = 'l';
	printf("%s\n",my_strchr(str,ch));

	system("pause");
	return 0;
}








//#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int my_strcmp(const char* str1,const char* str2)
{
	assert(str1&&str2);
	while(*str1&&*str2)
	{
		if(*str1>*str2)
		{
			return 1;
		}
		else if(*str1<*str2)
		{
			return -1;
		}
		else 
		{
			++str1;
			++str2;
		}
		


	}
	

	return 0;

}

int main()
{
	char str1[] = "Hcllo";
	char str2[] = "Hcllo";
	printf("%d",my_strcmp(str1,str2));
	system("pause");
	return 0;
}









//#include <stdio.h>
#include <assert.h>

void* my_memmove(void* dst,const void* src,size_t size)
{
	char* _dst = (char*)dst;
	const char* _src =(const char*) src; 

	assert(dst && src);
	
	

	if(_src+size>_dst && _src<_dst)
	{
		for()
	}
}

int main()
{
	int a1[10];
	int a2[10] = {1,2,3,4,5};
	my_memmove(a1,a2,5);
	return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void* my_memmove(void* dest, const void* src,size_t size)
{

	char* _dest = (char*) dest;
	const char* _src = (const char*) src;
	size_t i = 0;
	assert(dest && src);

	if (_dest<_src+size && _dest>_src)
	{
		for(i=size-1; i>=0; --i)
		{
			_dest[i] = _src[i];
		}
	}
	else
	{
		for(i=0; i<size; ++i)
		{
			_dest[i] = _src[i];
		}
	}
	return dest;
}

int main()
{
	char a[10] = "abcdefg";
	char a1[10] = {0};
	my_memmove(a+2,a,5);
	printf("%s",my_memmove(a+2,a,5));
	system("pause");
	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//void *my_memmove(void *dest,const void *src,int n)
//{
//	/*因为char类型为1字节，所以将数据转化为char*
//	进行操作。并不是因为操作的对象是字符串*/
//	char* pdest=(char *)dest; 
//	const char* psrc=(const char *)src;
//	assert(dest);
//	assert(src);
//	if(pdest <= psrc&&pdest >=psrc+n)//正常情况下从前向后拷贝
//	{
//		while(n--)
//		{
//			*pdest = *psrc;
//		}
//	}
//	else //当出现内存覆盖时从后向前拷贝
//	{
//		while(n--)
//		{
//			*(pdest+n)=*(psrc+n);
//		}
//	} 
//	return dest;
//}
//
//int main()
//{
//	char arr[10]="abcdefg";
//	char arr0[10]="abcdefg";


//	char arr1[10]={0};
//	my_memmove(arr+2,arr,4);
//	my_memmove(arr1,arr0,4);
//	printf("内存覆盖情况：%s\n",arr+2);
//	printf("正常情况：%s\n",arr1);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//
////char* my_strncat(char* dst, const char* src, size_t num)
////{
////	assert(dst && src);
////
////	char* ret = dst;
////	size_t i = 0;
////
////	while (*dst)
////        *dst++;
////
////	while (num && (*dst++ = *src++)!='\0')
////	{
////		num--;
////	}
////	*dst = '\0';
////
////
////
////	return ret;
////	
////}
//
//char *my_strncat(char *dest, const char *src, int sz)
//{
//	char *tmp = NULL;
//	assert(dest);
//	assert(src);
//	tmp = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (sz)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		sz--;
//	}
//	*dest = '\0';
//	return tmp;
//}
//
//int main()
//{
//	char str1[20] = "i like u";
//	char str2[20] = "but just like u**";
//
//	my_strncat(str1, str2, 15);
//	printf("%s", my_strncat(str1, str2, 15));
//	return 0;
//}
//
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//
//char* my_strncat(char* dst, const char* src, int  num)
//{
//	assert(dst && src);
//
//	char* ret = dst;
//	while (*dst)
//	{
//		dst++;
//	}
//
//	if (strlen(src) < num)
//	{
//		num = strlen(src);
//	}
//
//	while (num--)
//	{
//		*dst++ = *src++;
//
//	}
//	*dst = '\0';
//
//	return ret;
//}
//
//int main()
//{
//
//	char str1[15] = "HELLO";
//	char str2[10] = "world";
//	char* ret = my_strncat(str1, str2, 5);
//	/*my_strncat(str1, str2, 5);*/
//	printf("%s", ret);
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<assert.h>


int my_strncmp(const char* str1, const char* str2, size_t num)
{

	assert(str1 && str2);
	size_t i = 0;
	while (i++<num && *str1++ && *str2++)
	{
		if (*str1>*str2)
			return 1;
		else if (*str1 < *str2)
			return -1;
		
	}
	if (i == num && *str1)
		return 1;
	else if (i == num && *str2)
		return -1;
	else
		return 0;

}
int main()
{
	char str1[10] = "AABC";
	char str2[10] = "AABCS";


	printf("%d", my_strncmp(str1, str2, 4));
	system("pause");
	return 0;
}

//#include<stdio.h>
//#include<assert.h>
//
//char* my_strncpy(char* dst, const char* src, size_t num)
//{
//	assert(dst && src);
//	char *ret = dst;
//	int i = 0;
//	
//
//
//	while (i++ <num && (*dst++ = *src++) != '\0')
//		;
//	if (*(dst) != '\0')
//		*dst = '\0';
//	return ret;
//}
//
//
//
//int main()
//{
//	char str1[] = "happy day me";
//	char str2[20];
//	char str3[20];
//
//	/*my_strncpy(str2, str1, 5);*/
//	printf("%s\n", my_strncpy(str2, str1, 5));
//	system("pause");
//	return 0;
//}