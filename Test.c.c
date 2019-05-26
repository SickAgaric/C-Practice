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
