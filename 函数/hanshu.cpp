
//                                     �����뽻����ֵ��ָ�루�������ã�
//                                          �����Ĳ������βΡ�ʵ�Σ�

//�汾һ������ֵ�����ã��βΣ�ʵ����̫���ϵ��
//                    �β���ʵ��ռ�ò�ͬ���ڴ��
//#include<stdio.h>
//void swap(int a, int b)//�Ӻ���
//{
//	int temp = 0;//(temp���壺��ʱ)
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//int main(void)//������
//{
//	int a = 10, b = 20;
//
//	printf("����ǰ��a =%d , b = %d\n", a, b);
//	swap(a, b);
//	printf("������a =%d , b = %d\n", a, b);
//	return 0;
//}
//���н��������ǰ��a = 10, b = 20               a��bû�н���
//          ������a = 10, b = 20              
//ԭ��swap�����õ�ʱ��ʵ�δ����βΣ�����ʵ�β�ֻ��ʵ�ε�һ����ʱ�����������Ӻ����ͻᱻ���٣��ı��β��޷��ı�ʵ��


//�汾��������ַ�����ã��ں����ڲ��ı亯���ⲿ�ı�����ֵʱ��

//#include<stdio.h>
//void swap(int* a, int* b)//�Ӻ���
//{
//	int temp = 0;//(temp���壺��ʱ)
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
////��ָ���й�
//int main(void)//������
//{
//	int a = 10, b = 20;
//
//	printf("����ǰ��a =%d , b = %d\n", a, b);
//	swap(&a, &b);
//	printf("������a =%d , b = %d\n", a, b);
//	return 0;
//}

//һ��дһ�����������ж�һ�����ǲ�������
 
//#include<stdio.h>
//#include<math.h>
////������
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
//			//printf("%d�������� ", n);
//			return 0;
//		}            //�������ں����м��ϴ�ӡ����Ϊ����������������
//	}
//	//printf("%d������ ", n);
//	return 1;
//}
//
//
////��100 - 200֮�������
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
//		}//���˴����ſ���ȥ������Ȼ���Ǻܼ�࣬��д���벻�׳�������
//	}
//	printf("\ncount = %d ", count);
//	return 0;
//}
// 
 
 
//����дһ�������ж�һ���ǲ������꣬����ӡ1000�ꡪ��2000��������
//�ж�������1.�ܱ�4�����������ܱ�100������2.�ܱ�400����
//������֮������ض�Ϊ�ĵı����������ܱ�100����������������⣺�ܱ�400������

//#include<stdio.h>
//int leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
// }

//����Ϊ�Ż��汾��

//int leap_year(int n)
//{
//	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
//}
// 
//int main(void)
//{
//	int y = 0;
//	int count = 0;
//	printf("1000�ꡪ��2000���������У�\n");
//	for (y = 1000; y <= 2000; y+=4)//����ض�Ϊ4�ı���
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


//����дһ������������ʵ��һ��������������Ķ��ֲ��ң��±�/Ԫ�أ���

//#include<stdio.h>
//int binarysearch(int arr[], int num, int sc)
//{
//	int left = 0, right = sc - 1;
//	int mid = 0;
//	
//	while(left <= right)
//	{
//		mid = (left + right) / 2;
//		//�±���м�ֵҪ����ѭ���������ѭ����������
//		//����Գ�������bug�������޸İɡ���
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
//	//ѭ�������˺��Ҳ����Ļ����ͷ���-1
//	return -1;
//}
//
//int main(void)
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//��������Ԫ�ظ���
//	int sc = sizeof(arr) / sizeof(arr[0]);
//	//������Ҫ�ҵ�Ŀ������
//	int num = 0;
//	scanf("%d", &num);
//	//�ҵ�������±꣬������ʾ�Ҳ���
//	if (binarysearch(arr, num, sc) == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", binarysearch(arr, num, sc));
//	}//��֪ʶ�㣺       ��ʽ���ʣ���binarysearch()�����ķ���ֵ��Ϊprintf()�����Ĳ���
//	return 0;
//}


//�ġ�дһ��������ÿ����һ������������ͻὫnum��ֵ��1.
////�����ڲ��ı亯���ⲿ��ֵ�����ԵĴ���ַ������
//#include<stdio.h>
//void add(int* num)
//{
//	(*num)++;
//	//�����⣺(*num)++��*num++������
//	//*�������ã���++���Լӣ����ǵ�Ŀ����������մ��ҵ���Ľ����
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


//                                   ������Ƕ�׵�������ʽ����

//��������Ƕ�׶��壬������Ƕ�׵���
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


//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

//int printf( const char *format [, argument]... );
//Each of these functions returns the number of characters printed, or a negative value if an error occurs.
//printf���������ش�ӡ���ַ��ĸ�����������������򷵻ظ�ֵ

//������ʽ������Ŀ��
//#include<stdio.h>
//int main(void)
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//����Ϥ���������˽⺯���ķ���ֵ����

//����������������Ҫ���ں����ĵ���ǰ�����������󣬲��Ҷ�����ǿ����������
//����������ʵ�ʷ���ͷ�ļ��У������ĺ��ı����йء�
//���磺      "Add.h"��������Add.c


//                                          �����ݹ�
//�ݹ����Ҫ˼����ʽ���Ѵ��»�С
//������Ҫ������1.���������������������������������ʱ�򣬵ݹ�Ͳ��ٽ��С�
//              2.ÿ�εݹ����֮��Խ��Խ�ӽ�����������
//���⣬����������ջ������һ��ռ䣬���εݹ���ܵ���ջ����Ӷ���������ʧ��
//��⺯���ݹ����÷������ǻ�ͼ��

//��ϰһ������һ���޷������Σ�����ѭ���ӡ����ÿһλ��
//����������1234�������1 2 3 4 ��
//˼·���Ȱ�˳����� 4 - 3 - 2 - 1��Ȼ��˳���ӡ 1 - 2 - 3 - 4��
//���ƣ�print��1234��-> print(123) + 4 -> print(12) + 3 + 4 -> print(1) + 2 + 3 + 4
//�ع飺1 -> 2 -> 3 -> 4
//#include<stdio.h>
//
//void print(unsigned int num)
//{
//	//��������
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main(void)
//{
//	//����������һ���޷�������
//	unsigned int num = 0;
//	scanf("%u", &num);//  %u �����޷�������
//	//���ú���print��ӡ
//	print(num);//��ֵ����
//
//	return 0;
//}

//����2��ջ���
//0x00007FF697C118AE ����δ��������쳣(�� ����.exe ��): 0xC00000FD: Stack overflow (����: 0x0000000000000001, 0x000000710B6B3FF0)��
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


//������3����дһ�����������ַ������ȣ��������ڲ�����������ʱ����
//ģ�⺯��strlen�������ӡ��bit��
//���������ָ��������Ԫ�ص�ַ
//1 + my_strlen("it")
//1 + 1 + my_strllen("t")
//1 + 1 + 1 + my_strllen("\0")



//int my_strllen(char* str)
//{
//	if (*str != '\0')
//	{
//		//return 1 + my_strllen(++str);������ʹ��ǰ��/����++���и�����
//		return 1 + my_strllen(str + 1);
//	}
//	else
//		return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//char arr[] = { 0 };�൱������ֻ��һ��Ԫ�أ���ɵ��
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	printf("%d\n", my_strllen(arr));
//	return 0;
//}


////������4��дһ�����������N��쳲�������

#include<stdio.h>
//int f(unsigned int n)
//{//�ݹ��ʱ����ûɶ�ã�������ѭ������
////��������ã����д����ظ���û�б�Ҫ�ļ��㣬Ч��̫�ͣ�����
//	if (n > 2)
//	{
//		return f(n - 1) + f(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
////�Ż�һ�����������ˣ����������������
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
//�Ż���
//int f(unsigned int n)
//{
//	int a = 1;//��һ��
//	int b = 1;//�ڶ���
//	int c = 1;//��n<2ʱ����Ϊ1
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//ѭ���Ǵ�ǰ�����Ƶģ���Ϊ�����ѭ������������n--��
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

//������5����ŵ������
// ����Ļ�ϴ�ӡn�����ӵ��ƶ�����
// A����ʼλ��
// B����תλ��
// C���յ�λ��

////�ݹ鷽��

//void hanoi(int num, char pos1, char pos2, char pos3)
//{
//	if (num == 1)
//		////printf("%d -> %d ",pos1, pos3);
//		////�ַ���ռλ����%c������������������
//		printf("%c -> %c ",pos1, pos3);
//	else
//	{
//		////��C����Ϊ��תλ�ã���n - 1�����ӷŵ�B������
//		hanoi(num - 1, pos1, pos3, pos2);
//		////��A�����ϵĵ�N�����ӷŵ�C������
//		////printf("%d -> %d ", pos1, pos3);
//		printf("%c -> %c ",pos1, pos3);
//		////��ʣ�µ�n - 1�����Ӵ�B��������A����Ϊ�м�λ���ƶ���C������
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

/////�ǵݹ�ĵ����ķ���
/*�����ƶ����жϱ�׼��
1.��������� �����С ���������������ƶ�һ�����ӣ�����Ѿ������Ҷˣ��ͷ��������
2.�����ƶ������Ǹ����������Ӳ����ƶ�����ʣ�µ��������ӣ����˱�Ž�С�ĵ����ӷ��ڶ��˱�Žϴ��������
3.��ѭ��ѹС��ԭ��
*/
/*����������ʵ�����ӵ��ƶ������Ұ�ÿһ�ƶ����趼��ӡ������

*/



//#include<stdio.h>
//int main()
//{
//
//	int num = 0;
//	scanf("%d", &num);//����Բ�̸���
//	
//	//���ȿ϶�Ҫ'A''B''C'����ʾ����
//	char pos1 = 'A';
//	char pos1 = 'A';
//	char pos1 = 'A';
//	 
//	return 0;
//}





//������6��������̨������





/*ʵ���ַ�������*/
////���磺abcdef -> fedcba
/* �ݹ� */
/*���庯�����ַ�������*/
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
/*���庯��ʵ���ַ������򣬵ݹ�*/
/*����*/
/* a  b  c  d  e  f  \0*/
/* f  b  c  d  e  \0 \0*/
/* f  e  c  d  \0 \0 \0*/
/* f  e  d  \0 \0 \0 \0*/
/*�ع�*/
/* f  e  d  c  \0 \0 \0*/
/* f  e  d  c  b  \0 \0*/
/* f  e  d  c  b  a  \0*/
//void string_inversion(char* str)
//{ 
//	/*�����ڲ��ı��ⲿ��ֵ����ָ��*/
//
//	char temp = *str;//1.������ʱ���������Ԫ��
//	/*arr[right] ���Ա�ʾΪ *(arr + right) == *(arr + my_strlen(arr) - 1) */
//	int len = my_strlen(str);
//	*str = *(str + my_strlen(str) - 1);//2.�� ����> β Ԫ��
//	*(str + my_strlen(str) - 1) = '\0';//3.��βԪ�ظ�Ϊ \0 �Ա�ⳤ�ȿ��Լ���
//	if(my_strlen(str + 1) > 1)
//	    string_inversion(str + 1);//ʣ�µ��ĸ�Ԫ���ٽ�������
//	//*(str + my_strlen(str) - 1) = temp;//4.
//	/*�����д��my_strlen(str)�ں����ع��ʱ�������ˣ���Ϊ��ַ�����˸ı�*/
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





/* �ǵݹ� */
////˼·����β������
////1.�ҵ�֪���ַ������ȣ�2.�����ַ�λ��

/*���庯�����ַ�������*/
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
//	/*�����ַ��������ַ���*/
//	char arr[] = "abcdef";
//
//	int left = 0;
//	int right = my_strlen(arr)  - 1;//���ұߵ�Ԫ�ص��±� = ���� - 1
//	int temp = 0;
//	/*����ѭ����������*/
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


/*�ݹ�ʵ�ּ���һ�����ĸ�λ֮��*/
/*���ݣ�
дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������֮��
���磺����DigitSum(1729)���򷵻�1+7+2+9����Ϊ19.
*/
//#include<stdio.h>
//
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//		return (n % 10) + DigitSum(n / 10);/*д�������ʱ��о�ȱ��һ��ʲô����n<9��ô��*/
//	else
//		return n;/*�˴�û�п��ǵ���*/
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

/*��д�����ݹ�ʵ��n��k�η�*/

//#include<stdio.h>
//double my_pow(int n, int k)
//{
//	if (k > 0)
//		return n * my_pow(n, k - 1);
//	/*©��k = 0*/
//	else if (k == 0)
//		return 1.0;
//	else 
//		return 1.0 / (my_pow(n, -k));
//	/*���k�Ǹ���,��ô����ֵ����С�����ĳɸ�����*/
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