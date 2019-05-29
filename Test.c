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

