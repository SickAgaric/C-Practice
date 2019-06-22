#include<stdio.h>


//int reverse(int x){
//	long long rev,temp,pop = 0;
//	if (x > 0)
//	{
//		while (x)
//		{
//			x = (long long)x;
//			pop = x % 10;
//			x /= 10;
//
//			rev = 0;
//			temp = 10 * rev + pop;
//			rev = temp;
//		}
//	}
//	else
//	{
//		x *= -1;
//		while (x)
//		{
//			x = (long long)x;
//			pop = x % 10;
//			x /= 10;
//
//			rev = 0;
//			temp = 10 * rev + pop;
//			rev = temp;
//		}
//		rev *= -1;
//
//	}
//	if (rev > 2147483647 && rev < -2147483648)
//	{
//		return 0;
//	}
//	else
//		return rev;
//
//}
int reverse(int x){
	long long res = 0;
	while (x != 0)
	{
		int pop = x % 10;
		x /= 10;
		res = res * 10 + pop;

		if (res < -2147483648)
			return 0;
		if (res > 2147483647)
			return 0;

		return (int)res;

	}

}


bool isPalindrome(int x){
	/*int a[] = { 0 };
	int sz = 0;
	while (x)
	{
		sz++;
		x /= 10;
	}
	int a = (int*)malloc(sz*sizeof(int));
	for (int i = 0; i < sz; i++)
	{
		a[i] = x % 10;
		x /= 10;
	}
	for (int i = 0; i < sz / 2; i++)
	{
		int temp = a[i];
		a[i] = a[sz - 1];
		a[sz - 1] = temp;
	}*/

	if (x < 0)
		return false;
	
	int revertedNumber = 0;
	while (x < revertedNumber)
	{
		revertedNumber = revertedNumber * 10 + x % 10;
		x /= 10;
	}
	if (revertedNumber>x)
	{
		revertedNumber /= 10;
		if (revertedNumber == x)
			return true;
		return false;
	}
	return x == revertedNumber || x == revertedNumber / 10;

}


{
	int revertedNumber = 0;
	while (x < revertedNumber)
	{
		revertedNumber = revertedNumber * 10 + x % 10;
		x /= 10;
	}
	
}
//#include<stdio.h>
//#include<assert.h>
//
//char * longestCommonPrefix(char ** strs, int strsSize){
//	char* str = (char)malloc(128);
//	memset(str, 0, 128);
//	if (strsSize <= 1)
//		return strs;
//	int i = 0;
//	int j = 0;
//
//	while (1)
//	{
//		while (i < strsSize - 1)
//		{
//			if (strs[i][j] != strs[i + 1][j])
//				return str;
//			i++;
//		}
//		j++;
//		str[j] = strs[i][j];
//
//	}
//	return str;
//}
//
//
//
//char* longestCommonPrefix(char** strs, int strsSize) {
//
//	char* str = (char*)malloc(128);
//	memset(str, 0, 128);
//	int i, j = 0;
//	if (strsSize == 0)
//		return "";
//
//	strcpy(str, strs[0]);
//	int count = strlen(str);
//
//	for (i = 0; i<strsSize; i++)
//	{
//
//		char* currentStr = strs[i];
//		if (count == 0)
//			return "";
//
//		for (j = 0; j<count; j++)
//		{
//			if (str[j] != currentStr[j])
//				break;
//		}
//		count = j;
//		str[j] = 0;
//	}
//	return str;
//}
//
//
//
//
//
//bool isValid(char* s) {
//
//	int length = 0;//定义字符串长度
//	while (*(s + length))
//		length++;//获取字符串长度
//	char* ptr = (char*)malloc(length / 2);//分配内存空间
//	memset(ptr, 0, length / 2);//初始化内存空间
//	int i, a = 0;
//	for (i = 0; i<length; i++)
//	{
//		if ((*(s + i) == '(') || (*(s + i) == '{') || (*(s + i) == '['))
//		{
//			a++;
//			*(ptr + a) = *(s + i);
//		}
//		//'('与')'的ASCII值差1，'['与']'，'{'与'}'的ASCII值差2
//		else if ((*(s + i) == (*(ptr + a) + 1)) || (*(s + i) == (*(ptr + a) + 2)))
//		{
//			a--;
//		}
//		else return 0;
//	}
//	if (a)
//		return 0;
//	return 1;
//}
//
//bool isValid(char * s) 
//{
//    int length = strlen(s);
//    
//    char* ptr = (char*)malloc(length/2);
//    memset(ptr,0,length/2);
//    
//    
//    int i,j=0;
//    for(i=0;i<length;i++)
//    {
//        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
//        {
//            j++;
//            *(ptr+j) = *(s+i);
//        }
//        else if ((*(s + i) == (*(ptr + j) + 1)) || (*(s + i) == (*(ptr + j) + 2)))
//        {
//            j--;
//        }
//        else
//            return 0;
//    }
//    
//    if(j)
//        return 0;
//    return 1;
//}
//
//
//



#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool isValid(char* s)
{

	int length = 0;
	//定义字符串长度
	while (*(s + length))length++;//获取字符串长度
	char* ptr = (char*)malloc(length / 2);//分配内存空间
	memset(ptr, 0, length / 2);//初始化内存空间
	int i, a = 0;
	for (i = 0; i<length; i++)
	{
		if ((*(s + i) == '(') || (*(s + i) == '{') || (*(s + i) == '['))
		{
			a++;
			*(ptr + a) = *(s + i);
		}
		//'('与')'的ASCII值差1，'['与']'，'{'与'}'的ASCII值差2
		else if ((*(s + i) == (*(ptr + a) + 1)) || (*(s + i) == (*(ptr + a) + 2)))
		{
			a--;
		}
		else return 0;
	}
	if (a)
		return 0;
	return 1;
}

int main()
{
	char s[10] = { '(', '[', ']', ')' };

	bool isValid(s);

	
}

int removeElement(int* nums, int numsSize, int val)
{
	int count = 0;
	int* head = nums;
	int* tail = nums;
	for (int i = 0; i < numsSize - 1; i++)
	{
		if (*head != val)
		{
			*head++ = *tail;
			count++;
		}
		tail++;
	}
	return  count;

	
	
	/*int left = 0, right = numsSize - 1;
	while (right > left)
	{
		while (right > 0 && nums[right] == val) --right;
		while (left < numsSize && nums[left] != val) ++left;
		if (right < left)
			break;
		int temp = nums[left];
		nums[left] = nums[right];
		nums[right] = temp;
		left++;
		right--;
	}
	while (right >= 0 && nums[right] == val)
		right--;
	return right + 1;*/
}

//KMP算法
	int strStr(char * haystack, char * needle)
	{

		assert(haystack && needle);

		int a = strlen(haystack);
		int b = strlen(needle);

		if (b == 0)
			return 0;
		else if (a == 0)
			return -1;


		int k = 0;
		int first = 0;
		for (i = 0; i < a;)
		{
			if (haystack[i] == needle[k])
			{
				if (k == b - 1)
					return i - b + 1;
				k++;
				i++;
			}
			else
			{
				k = 0;
				first++;
				i = first;
			}

		}
		return -1;
		/*int position = 0;
		for (int i = 0; i < strlen(haystack); i++)
		{
			for (int j = 0; j < strlen(needle); j++)
			{
				while (haystack[i] == needle[j] && needle[j])
					position;
				if (needle[j] == '\0')
					return position;
			}
		}
		return -1;*/
	

	}




int main()
{
	int nums[] = { 3, 2, 2, 3 };
	int val = 3;
	int sz = 4;
	int s = removeElement(nums, 4, 3);
	printf("%d", s);
	system("pause");
	return 0;
}
int removeDuplicates(int* nums, int numsSize) {
	if (numsSize == 0)
		return 0;
	int i = 0;
	int ch_i = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[ch_i] == nums[i])
		{
			;
		}
		else
		{
			ch_i += 1;
			nums[ch_i] = nums[i];
		}

	}
	return ch_i + 1;
}

int searchInsert(int* nums, int numsSize, int target){
	assert(nums);
	int* _nums = nums;
	int count = 0;
	
	if (*nums>target)
		return 0;

	for (int i = 0; i < numsSize - 1; i++)
	{
		if (nums[i] < target&&nums[i] != target)
			count++;
		else
			return i;
	}
	return count;

}



int maxSubArray(int* nums, int numsSize){
	if (numsSize == 0) return 0;

	int * Ptr = nums;
	int i = 0, j = 0;
	int MAX = nums[0]; int sum = nums[0];
	while (i <= numsSize - 1 && j<numsSize - 1){
		if (Ptr[j + 1] >= sum + Ptr[j + 1]) {
			j++; i = j;
			sum = Ptr[j];
		}
		else{
			j++;
			sum = sum + Ptr[j];
		}

		if (sum >= MAX){
			MAX = sum;
		}
	}

	return MAX;
}

int maxSubArray(int* nums, int numsSize)
{
	if (numsSize == 0)
		return 0;

	int j = 0;

	int MAX = nums[0];
	int sum = nums[0];

	while (j < numsSize - 1)
	{
		if (nums[j + 1] >= nums[j + 1] + sum)
		{
			j++;
			sum = nums[j];
		}
		else
		{
			j++;
			sum += nums[j];
		}
		if (sum >= MAX)
			MAX = sum;
	}
	return MAX;
}
#define MAX(x, y) x > y ? x : y

int maxSubArray(int* nums, int numsSize){
	int f_n = nums[0];
	int result = nums[0];

	for (int i = 1; i < numsSize; i++) {

		f_n = MAX(f_n + nums[i], nums[i]);
		result = MAX(f_n, result);

	}

	return result;

}
//6-1

#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

// 静态顺序表
//#define N 100
//typedef int DataType;
//struct SeqList
//{
//	DataType _array[N];
//	size_t _size;
//};

typedef int DataType;
typedef struct SeqList
{
	DataType* _array;
	size_t _size;
	size_t _capacity;
}SeqList;

void SeqListInit(SeqList* ps);
void SeqListDestory(SeqList* ps);

void SeqListCheckCapacity(SeqList* ps);//扩容

void SeqListPushBack(SeqList* ps, DataType x);//尾插
void SeqListPushFront(SeqList* ps, DataType x);//前插
void SeqListPopBack(SeqList* ps);//尾删
void SeqListPopFront(SeqList* ps);//前删
void SeqListInsert(SeqList* ps, size_t pos, DataType x);
void SeqListErase(SeqList* ps, size_t pos);

size_t SeqListSize(SeqList* ps);
size_t SeqListFind(SeqList* ps, DataType x);
DataType SeqListAt(SeqList* ps, size_t pos);

void SeqListBubbleSort(SeqList* ps);
int SeqListBinaryFind(SeqList* ps, DataType x);

void SeqListRemoveAll(SeqList* ps, DataType x);




//.c
#include"SeqList.h"


void SeqListInit(SeqList* ps)
{
	assert(ps);

	ps->_array = NULL;
	ps->_size = 0;
	ps->_capacity = 0;

}

void SeqListDestory(SeqList* ps)
{
	assert(ps);

	free(ps->_array);
	ps->_array = NULL;
	ps->_capacity = 4;
	ps->_size = 0;
}
void SeqListCheckCapacity(SeqList*ps)
{
	assert(ps);


	if (ps->_size == ps->_capacity)
	{
		size_t new_capacity = ps->_capacity * 2;
		realloc(ps->_array, sizeof(SeqList)*new_capacity);
	}
}


void SeqListPushBack(SeqList* ps, DataType x)//尾插
{
	assert(ps);

	SeqListCheckCapacity(ps);

	ps->_array[ps->_size] = x;
	ps->_size++;
}

void SeqListPopBack(SeqList* ps)//尾删
{
	assert(ps);

	--ps->_size;

}

void SeqListPushFront(SeqList* ps, DataType x)//前插
{
	assert(ps);
	
	SeqListCheckCapacity(ps);

	size_t end = ps->_size;
	size_t start = 0;
	while (end)
	{
		ps->_array[end] = ps->_array[end - 1];
		--end;
	}
	ps->_array[start] = x;
	ps->_size++;
}

void SeqListPopFront(SeqList* ps)//前删
{
	assert(ps);
	size_t end = ps->_size-1;
	for (size_t i = 0; i < ps->_size; i++)
	{
		ps->_array[i] = ps->_array[i + 1];
	}
	ps->_size--;
}

void SeqListInsert(SeqList* ps, size_t pos, DataType x)//任意位置插入
{
	assert(ps);

	SeqListCheckCapacity(ps);
	size_t start = ps->_size - pos;
	size_t end = ps->_size;

	for (size_t i = 0; i < start; i++)
	{
		ps->_array[end] = ps->_array[end - 1];
		--end;
	}
	ps->_array[pos] = x;
	ps->_size++;

}


void SeqListErase(SeqList* ps, size_t pos)//任意位置删除
{
	assert(ps);


	size_t start = 0;
	size_t end = ps->_size-1;

	for (size_t i = 0; i < end - pos; i++)
	{
		ps->_array[pos] = ps->_array[pos + 1];
		pos++;
	}
	ps->_size--;
}

//6_22

int lengthOfLastWord(char * s){
	
	assert(s);
	int count = 0;
	int n = 0;

	while (*s++ == '\0')
	{
		if (*s == ' ')
			n++;
	}
	while (*--s)
	{
		if (*s == ' ')
		{
			break;
		}
		else
		count++;
	}
	if (n <= 1)
		return 0;
	else
		count;
	


}



int lengthOfLastWord(char * s)
{
	int WordLength = 0;
	int WordLengthCount = 0;

	while (*s != '\0')
	{
		while (*s != ' ')
		{
			while ((*s != ' ') && (*s != '\0'))
			{
				WordLengthCount++;
				WordLength = WordLengthCount;
				s++;
			}
			if (*s == '\0')
				return WordLength;
			s++;
		}
		if (*s == '\0')
			return WordLength;//防止空格的输入，让程序陷入死循环
		s++;
	}
	return WordLength;
}
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* plusOne(int* digits, int digitsSize, int* returnSize){
	assert(digits&&returnSize);
	if (digits[digitsSize - 1] != 9)
	{
		*digits = *digits + 1;
		return digits;
	}




}


