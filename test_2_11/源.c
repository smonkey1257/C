#define _CRT_SECURE_NO_WARNINGS

/*����������������С������*/

//˼·������շת����������Լ����Ȼ�����������=���Լ��*��С������

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
//	return num2;//����д����ͬ���ص��п�����num1��������num2
//}
//
//int main(viod)
//{
//	unsigned int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);//ÿ�ζ�����ȡ��ַ������
//
//	unsigned int temp = Greatest_common_divisor(num1, num2);//�����Լ��
//
//	//���������=���Լ��*��С������
//
//	printf("%d��%d����󹫱���Ϊ%d\n", num1, num2, num1 * num2 / temp);
//
//	return 0;
//}

//����������Ϊ��

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
//			printf("%d��%d����󹫱���Ϊ%d\n", num1, num2, num1 * i);
//			break;
//		}
//		i++;
//
//	}
//
//	return 0;
//}


/*����gets����*/
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


/*��һ�仰�еĵ��ʵ��ã�����㲻����*/
//���磺i like bejing. ����> bejing. like i
//Ҫ���ַ������Ȳ�����100.

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
//	//�����ַ���
//	gets(arr);
//	//scanf("%s", arr);
//	//���У��ַ������пո񣬿ո����ַ���������ȡ��������
//
//	//������ת��
//	//1.�����ַ�������
//	int lenght = strlen(arr);
//	overturn(arr, arr + lenght - 1);//��β�ַ���ַ
//	//printf("%s\n", arr);����
//	 
//	//2.ÿ����������
//	char* start = arr;//���ʵ���ʼ�ַ���ַstart
//
//	while (*start)
//	{
//		char* end = start;//Ѱ��ĩβ�ַ���ַp
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		overturn(start, end - 1);//��ת����
//		if(*end != '\0')
//		    end++;
//		start = end;
//	}
//
//	printf("%s\n", arr);
//	return 0;
//}