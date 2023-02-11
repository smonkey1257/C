#define _CRT_SECURE_NO_WARNINGS

/*求两个正整数的最小公倍数*/

//思路：利用辗转相除法求最大公约数，然后，两个数相乘=最大公约数*最小公倍数

//#include<stdio.h>
//
//Greatest_common_divisor(unsigned int num1, unsigned int num2)
//{
//	unsigned int remainder = 0;
//
//	while(num1 % num2)
//	{
//		remainder = num1 % num2;
//		num1 = num2;
//		num2 = remainder;
//	}
//
//	return num2;//根据写法不同返回的有可能是num1，或者是num2
//}
//
//int main(viod)
//{
//	unsigned int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);//每次都忘了取地址，靠！
//
//	unsigned int temp = Greatest_common_divisor(num1, num2);//求最大公约数
//
//	//两个数相乘=最大公约数*最小公倍数
//
//	printf("%d与%d的最大公倍数为%d\n", num1, num2, num1 * num2 / temp);
//
//	return 0;
//}

//方法二；更为简单

//#include<stdio.h>
//int main()
//{
//	unsigned int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int i = 1;
//	while (1)
//	{
//		if (num1 * i % num2 == 0)
//		{
//			printf("%d与%d的最大公倍数为%d\n", num1, num2, num1 * i);
//			break;
//		}
//		i++;
//
//	}
//
//	return 0;
//}


/*测试gets函数*/
//#include<stdio.h>
//int main()
//{
//	char arr[100] = { 0 };
//
//	gets(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


/*将一句话中的单词倒置，但标点不倒置*/
//例如：i like bejing. ——> bejing. like i
//要求：字符串长度不超过100.

//#include<stdio.h>
//#include<string.h>
//
//void overturn(char* left, char* right)
//{
//	while (left < right)
//	{
//		char temp = *right;
//		*right = *left;
//		*left = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//
//	//输入字符串
//	gets(arr);
//	//scanf("%s", arr);
//	//不行，字符串中有空格，空格后的字符将不被读取进缓存区
//
//	//两步翻转：
//	//1.整个字符串逆序。
//	int lenght = strlen(arr);
//	overturn(arr, arr + lenght - 1);//首尾字符地址
//	//printf("%s\n", arr);测试
//	 
//	//2.每个单词逆序
//	char* start = arr;//单词的起始字符地址start
//
//	while (*start)
//	{
//		char* end = start;//寻找末尾字符地址p
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		overturn(start, end - 1);//翻转单词
//		if(*end != '\0')
//		    end++;
//		start = end;
//	}
//
//	printf("%s\n", arr);
//	return 0;
//}