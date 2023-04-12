
//                                     函数与交换数值与指针（初步运用）
//                                          函数的参数（形参、实参）

//版本一：传“值”调用（形参，实参无太大关系）
//                    形参与实参占用不同的内存块
//#include<stdio.h>
//void swap(int a, int b)//子函数
//{
//	int temp = 0;//(temp词义：临时)
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//int main(void)//主函数
//{
//	int a = 10, b = 20;
//
//	printf("交换前：a =%d , b = %d\n", a, b);
//	swap(a, b);
//	printf("交换后：a =%d , b = %d\n", a, b);
//	return 0;
//}
//运行结果：交换前：a = 10, b = 20               a，b没有交换
//          交换后：a = 10, b = 20              
//原因：swap被调用的时候，实参传给形参，但其实形参只是实参的一份临时拷贝，出了子函数就会被销毁，改变形参无法改变实参


//版本二：传“址”调用（在函数内部改变函数外部的变量的值时）

//#include<stdio.h>
//void swap(int* a, int* b)//子函数
//{
//	int temp = 0;//(temp词义：临时)
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
////与指针有关
//int main(void)//主函数
//{
//	int a = 10, b = 20;
//
//	printf("交换前：a =%d , b = %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a =%d , b = %d\n", a, b);
//	return 0;
//}

//一、写一个函数可以判断一个数是不是素数
 
//#include<stdio.h>
//#include<math.h>
////求素数
//int is_prime(int n)
//{
//	if (n < 2)
//		return 0;
//	else if (n == 2)
//		return 1;
//	int j = 0;
//	for (j = 2; n > 2 && j <= sqrt(n); j++)
//	{
//		if (0 == n % j)
//		{
//			//printf("%d不是素数 ", n);
//			return 0;
//		}            //不建议在函数中加上打印，因为这样函数不够独立
//	}
//	//printf("%d是素数 ", n);
//	return 1;
//}
//
//
////求100 - 200之间的素数
//int main(void)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (1 == is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}//加了大括号看上去代码虽然不是很简洁，但写代码不易出错！！！
//	}
//	printf("\ncount = %d ", count);
//	return 0;
//}
// 
 
 
//二、写一个函数判断一年是不是闰年，并打印1000年——2000年间的闰年
//判断条件：1.能被4整除，但不能被100整除。2.能被400整除
//换而言之：闰年必定为四的倍数，但不能被100整除（世纪闰年除外：能被400整除）

//#include<stdio.h>
//int leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
// }

//以下为优化版本：

//int leap_year(int n)
//{
//	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
//}
// 
//int main(void)
//{
//	int y = 0;
//	int count = 0;
//	printf("1000年——2000年间的闰年有：\n");
//	for (y = 1000; y <= 2000; y+=4)//闰年必定为4的倍数
//	{
//		if (1 == leap_year(y))
//		{
//			printf("%d ", y);
//			count++;
//		}
//
//	}
//	printf("\ncount = %d",count);
//	return 0;
//}


//三、写一个函数，可以实现一个整形有序数组的二分查找（下标/元素？）

//#include<stdio.h>
//int binarysearch(int arr[], int num, int sc)
//{
//	int left = 0, right = sc - 1;
//	int mid = 0;
//	
//	while(left <= right)
//	{
//		mid = (left + right) / 2;
//		//下标的中间值要放在循环里才能让循环正常进行
//		//多测试程序看有无bug，尽量修改吧……
//		if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else if (num < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//	//循环找完了后都找不到的话，就返回-1
//	return -1;
//}
//
//int main(void)
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//计算数组元素个数
//	int sc = sizeof(arr) / sizeof(arr[0]);
//	//输入我要找的目标数字
//	int num = 0;
//	scanf("%d", &num);
//	//找到就输出下标，否则显示找不到
//	if (binarysearch(arr, num, sc) == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", binarysearch(arr, num, sc));
//	}//新知识点：       链式访问：把binarysearch()函数的返回值作为printf()函数的参数
//	return 0;
//}


//四、写一个函数，每调用一次这个函数，就会将num的值加1.
////函数内部改变函数外部的值，明显的传“址”调用
//#include<stdio.h>
//void add(int* num)
//{
//	(*num)++;
//	//新问题：(*num)++与*num++的区别
//	//*（解引用）与++（自加）都是单目运算符，按照从右到左的结合性
//}
//int main(void)
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//
//	add(&num);
//	printf("%d\n", num);
//
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//                                   函数的嵌套调用与链式访问

//函数不可嵌套定义，但可以嵌套调用
// 
//#include<stdio.h>
//
//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//	return ;
//}
//
//int main(void)
//{
//	test1();
//	return 0;
//}
//


//链式访问：把一个函数的返回值作为另一个函数的参数

//int printf( const char *format [, argument]... );
//Each of these functions returns the number of characters printed, or a negative value if an error occurs.
//printf函数都返回打印的字符的个数，如果发生错误则返回负值

//经典链式访问题目：
//#include<stdio.h>
//int main(void)
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//得熟悉函数并且了解函数的返回值类型

//函数的声明、定义要放在函数的调用前，否则编译错误，并且定义是强有力的声明
//函数的声明实际放入头文件中，与代码的核心保护有关。
//例如：      "Add.h"————Add.c


//                                          函数递归
//递归的主要思考方式：把大事化小
//两个必要条件：1.存在限制条件，当满足这个限制条件的时候，递归就不再进行。
//              2.每次递归调用之后越来越接近限制条件。
//此外，函数调用在栈区开辟一块空间，深层次递归可能导致栈溢出从而程序运行失败
//理解函数递归的最好方法就是画图；

//练习一：接受一个无符号整形，按照循序打印它的每一位。
//【例】输入1234，输出：1 2 3 4 ；
//思路：先按顺序剥离 4 - 3 - 2 - 1，然后顺序打印 1 - 2 - 3 - 4；
//递推：print（1234）-> print(123) + 4 -> print(12) + 3 + 4 -> print(1) + 2 + 3 + 4
//回归：1 -> 2 -> 3 -> 4
//#include<stdio.h>
//
//void print(unsigned int num)
//{
//	//限制条件
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main(void)
//{
//	//创建并输入一个无符号整型
//	unsigned int num = 0;
//	scanf("%u", &num);//  %u 输入无符号整型
//	//调用函数print打印
//	print(num);//传值调用
//
//	return 0;
//}

//【例2】栈溢出
//0x00007FF697C118AE 处有未经处理的异常(在 函数.exe 中): 0xC00000FD: Stack overflow (参数: 0x0000000000000001, 0x000000710B6B3FF0)。
//
//#include<stdio.h>
//
//void test()
//{
//	int j = 0;
//	if (j < 10000)
//	{
//		j++;
//		test();
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}


//【例子3】编写一个函数，求字符串长度，但函数内部不允许创建临时变量
//模拟函数strlen，建设打印（bit）
//数组的名字指向数组首元素地址
//1 + my_strlen("it")
//1 + 1 + my_strllen("t")
//1 + 1 + 1 + my_strllen("\0")



//int my_strllen(char* str)
//{
//	if (*str != '\0')
//	{
//		//return 1 + my_strllen(++str);不建议使用前置/后置++，有副作用
//		return 1 + my_strllen(str + 1);
//	}
//	else
//		return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//char arr[] = { 0 };相当于数组只有一个元素，犯傻了
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	printf("%d\n", my_strllen(arr));
//	return 0;
//}


////【例子4】写一个函数，求第N个斐波那契数

#include<stdio.h>
//int f(unsigned int n)
//{//递归费时费力没啥用，建议用循环迭代
////代码可以用，但有大量重复且没有必要的计算，效率太低！！！
//	if (n > 2)
//	{
//		return f(n - 1) + f(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
////优化一：跑是能跑了，但看起来不好理解
//int f(unsigned int n)
//{
//	int f1 = 1, f2 = 1;
//	int fn = 0;
//	if (n == 1 || n == 2)
//		return 1;
//	while (n>2)
//	{
//		fn = f1 + f2;
//		f1 = f2;
//		f2 = fn;
//		n--;
//	}
//	return fn;
//}
//优化二
//int f(unsigned int n)
//{
//	int a = 1;//第一项
//	int b = 1;//第二项
//	int c = 1;//当n<2时，都为1
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//循环是从前往后推的，但为了配合循环结束，采用n--；
//	}
//	return c;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int ret = f(n);
//	printf("%d", ret);
//	return 0;
//}

//【例子5】汉诺塔问题
// 在屏幕上打印n个盘子的移动步骤
// A；起始位置
// B：中转位置
// C；终点位置

////递归方法

//void hanoi(int num, char pos1, char pos2, char pos3)
//{
//	if (num == 1)
//		////printf("%d -> %d ",pos1, pos3);
//		////字符的占位符是%c！！！！！！！！！
//		printf("%c -> %c ",pos1, pos3);
//	else
//	{
//		////以C柱子为中转位置，把n - 1个盘子放到B柱子上
//		hanoi(num - 1, pos1, pos3, pos2);
//		////把A柱子上的第N个盘子放到C柱子上
//		////printf("%d -> %d ", pos1, pos3);
//		printf("%c -> %c ",pos1, pos3);
//		////把剩下的n - 1个盘子从B柱子上以A柱子为中间位置移动到C柱子上
//		hanoi(num - 1, pos2, pos1, pos3);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	char pos1 = 'A';
//	char pos2 = 'B';
//	char pos3 = 'C';
//	hanoi(num, pos1, pos2, pos3);
//	return 0;
//}

/////非递归的迭代的方法
/*盘子移动的判断标准：
1.如果顶端是 编号最小 的盘子无脑向右移动一根柱子，如果已经在最右端，就放在最左端
2.盘子移动到的那根柱子上盘子不再移动，看剩下的两根柱子，顶端编号较小的的盘子放在顶端编号较大的柱子上
3.遵循大不压小的原则
*/
/*问题二：如何实现盘子的移动，并且把每一移动步骤都打印出来？

*/



//#include<stdio.h>
//int main()
//{
//
//	int num = 0;
//	scanf("%d", &num);//输入圆盘个数
//	
//	//首先肯定要'A''B''C'来表示柱子
//	char pos1 = 'A';
//	char pos1 = 'A';
//	char pos1 = 'A';
//	 
//	return 0;
//}





//【例子6】青蛙跳台阶问题





/*实现字符串逆序*/
////例如：abcdef -> fedcba
/* 递归 */
/*定义函数求字符串长度*/
//#include<stdio.h>
//int my_strlen(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
/*定义函数实现字符串逆序，递归*/
/*递推*/
/* a  b  c  d  e  f  \0*/
/* f  b  c  d  e  \0 \0*/
/* f  e  c  d  \0 \0 \0*/
/* f  e  d  \0 \0 \0 \0*/
/*回归*/
/* f  e  d  c  \0 \0 \0*/
/* f  e  d  c  b  \0 \0*/
/* f  e  d  c  b  a  \0*/
//void string_inversion(char* str)
//{ 
//	/*函数内部改变外部的值，用指针*/
//
//	char temp = *str;//1.定义临时变量存放首元素
//	/*arr[right] 可以表示为 *(arr + right) == *(arr + my_strlen(arr) - 1) */
//	int len = my_strlen(str);
//	*str = *(str + my_strlen(str) - 1);//2.首 ——> 尾 元素
//	*(str + my_strlen(str) - 1) = '\0';//3.把尾元素赋为 \0 以便测长度可以继续
//	if(my_strlen(str + 1) > 1)
//	    string_inversion(str + 1);//剩下的四个元素再进行逆序
//	//*(str + my_strlen(str) - 1) = temp;//4.
//	/*上面的写法my_strlen(str)在函数回归的时候不适用了，因为地址发生了改变*/
//	*(str + len - 1) = temp;//5.
//
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	string_inversion(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}





/* 非递归 */
////思路：首尾交换。
////1.我得知道字符串长度；2.交换字符位置

/*定义函数求字符串长度*/
//int my_strlen(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	/*定义字符数组存放字符串*/
//	char arr[] = "abcdef";
//
//	int left = 0;
//	int right = my_strlen(arr)  - 1;//最右边的元素的下标 = 长度 - 1
//	int temp = 0;
//	/*建立循环用来交换*/
//	while (left <= right)
//	{
//		temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//	printf("%s\n",arr);
//	return 0;
//}


/*递归实现计算一个数的各位之和*/
/*内容：
写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
例如：调用DigitSum(1729)，则返回1+7+2+9，和为19.
*/
//#include<stdio.h>
//
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//		return (n % 10) + DigitSum(n / 10);/*写到这里的时候感觉缺了一点什么，当n<9怎么办*/
//	else
//		return n;/*此处没有考虑到，*/
//
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}

/*编写函数递归实现n的k次方*/

//#include<stdio.h>
//double my_pow(int n, int k)
//{
//	if (k > 0)
//		return n * my_pow(n, k - 1);
//	/*漏了k = 0*/
//	else if (k == 0)
//		return 1.0;
//	else 
//		return 1.0 / (my_pow(n, -k));
//	/*如果k是负数,那么返回值都是小数，改成浮点型*/
//}
//
//
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//
//	double result = my_pow(n, k);
//
//	printf("%lf\n", result);
//	return 0;
//}