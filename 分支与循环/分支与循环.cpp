//��PTA���������� 1 - 1/3 + 1/5 - 1/7 + ... ��ǰN��֮�͡�
//#include <stdio.h>
//int main(void)
//{
//    unsigned int n = 0, i = 0;
//    scanf("%d", &n);
//    double sum = 0, sum1 = 0, sum2 = 0;
//    for (i = 1; i <= n; i++)//һ����ֵ���ճ�ǧ�źޣ��̣�
//    {
//        if (0 == i % 2)
//            sum1 -= 1.0 / (2 * i - 1);
//        else
//            sum2 += 1.0 / (2 * i - 1);//                                      ��һ�汾
//    }
//    sum = sum1 + sum2;
//    printf("sum = %0.6lf\n", sum);
//    return 0;
//}
//��������˵����������
//�������� 1 - 1/3 + 1/5 - 1/7 + ... ��ǰN��֮�͡�
//int main(void)
//{
//	unsigned int n = 0, i = 0, j = 1;
//	double sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += j * 1.0 / (2 * i - 1);
//		j *= -1;             //��һ����ŷ����仯���Կ�����ôд                 �ڶ��汾
//	}
//	printf("sum = %0.6lf\n", sum);
//	return 0;
//}���ǲ��˺�ĵڶ��汾



//#include <stdio.h>
//int main()
//{
//    int N, i, flag = 1;
//    double sum = 0;
//    scanf("%d", &N);
//    for (i = 1; i <= N; i++)
//    {
//        sum += flag * 1.0 / (2 * i - 1);                              //���Ǳ��˵Ĵ�
//        flag *= -1;
//    }
//    printf("%.10lf", sum);
//    return 0;
//}



//ѭ��ʵ����Ŀ

//                                             һ������ n �Ľ׳�

#include <stdio.h>

//����һ��ѭ����
//int main(void)
//{
//	int i = 1,n = 1;
//	double factorial = 1;
//	scanf("%d", &n);
//	if (0 == n)
//		printf("0 �Ľ׳�Ϊ 1");
//	else
//	{
//		for (i = 1; i <= n; i++)
//			factorial *= i;
//		printf("%d �Ľ׳�Ϊ %0.0lf",n,factorial);
//	}
//	return 0;
//}

//�������������ݹ�
//#include <stdio.h>
//double fun(int n)
//{
//	if (0 == n || 1 == n)
//		return 1;
//	else
//		return fun(n - 1) * n;
//}
//int main(void)
//{
//	int n = 0;
//	double factorial = 0;
//	scanf("%d", &n);
//	factorial = fun(n);
//	printf("%d �Ľ׳�Ϊ %0.0lf\n", n, factorial);
//	return 0;
//}


//                                       ��������1��+ 2! + 3��+ ���� + n��
//������ѭ��
//   ���ȣ�Ƕ��ѭ��
//#include <stdio.h>
//int main(void)
//{
//	int n = 0, i = 0, ret = 1,j = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)//�Ƿ���� n Ҫ�������!!!
//			ret *= i;
//		sum += ret;
//	}
//	printf("ǰ%d��Ľ׳�֮��Ϊ%0.0lf\n", n, sum);
//	return 0;
//}


//         �㷨�Ż�
//#include <stdio.h>
//int main(void)
//{
//	int n = 0, i = 0, ret = 1;
//	double sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)//�Ƿ���� n Ҫ�������!!!
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("ǰ%d��Ľ׳�֮��Ϊ%0.0lf\n", n, sum);
//	return 0;
//}



//                            ������д���룬��ʾ����ַ��������ƶ������м��ۡ�
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main(void)
//{
//	char arr1[] = "welcome to language C!!!!!!";
//	char arr2[] = "###########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//1.���̫�죬�Ӿ�Ч�������ã�ʹ��˯�ߺ���sleep()���ú����Ժ���Ϊ��λ��{�º���}
//2.������治����࣬���ʹ�ú�������system("cls");
//3.��ֹ����û�ˣ�ѭ�������������һ��
//                                 �˴���ʶ�������µĺ������Լ�һ���µ��ļ��⡣���



//                                 �ġ���д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½���Ρ�
//                              ֻ���������������룬���������ȷ����ʾ��½�ɹ��������˳�����
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main(void)
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (0 == strcmp(password, "12574680"))
//		{
//			printf("������ȷ����½�ɹ���\n");
//			break;
//		}
//		else
//			switch (i)
//			{
//			case 0:
//				printf("��һ��������������������������룡\n");
//				Sleep(800);
//				system("cls");
//				break;
//			case 1:
//				printf("�ڶ���������������������������룡\n");
//				Sleep(800);
//				system("cls");
//				break;
//			case 2:
//				printf("����������������󣬻��������꣡\n");//    switch�����һ����䣬else����Բ��ô�����������
//			}
//	}
//	Sleep(1000);
//	system("cls");
//	if (i == 3)
//		
//		printf("����������������󣬼����˳�����\n");
//	return 0;
//}
//




//                                           ѭ��дһ����������Ϸ
//��Ϸ���ݣ�
// ��Ϸ����һ�� 1 - 100 ֮������������ҿ�������һ�������ڵ�����
// a. �¶��ˣ��͹�ϲ�㣬������Ϸ����
// b. �´��ˣ��ͻ�����㣬�´��˻��ǲ�С�ˣ�Ȼ������£�ֱ���¶�
// c. ��Ϸ����һֱ�棬������ѡ�������˳���Ϸ
// 
// 1. ���ɲ˵�
// 2. ������������ѣ�ûѧ����صĿ⺯����
// 3.����ѭ��
//

//#include <stdio.h>
//
////��;���˵���ʾ
//void menu()
//{
//	printf("***********************************\n");
//	printf("**********    1. PLAY    **********\n");
//	printf("**********    0. EXIT    **********\n");
//	printf("***********************************\n");
//}
//
////��;��������
//#include <stdlib.h>
//#include <time.h> 
//#include <windows.h> 
//void GAME()
//{
//	int guess = 0;
//
//	int set = rand() % 100 + 1;//�������1 - 100���������ʱ���
//
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess > set)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else if (guess < set)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			Sleep(1000);
//			system("cls");
//
//			break;
//		}
//
//	}
//}
//
//int i = 1;
//int main(void)
//{
//	//do-while ѭ����һ��������һ�Ρ�
//	//��һ������ʾ�˵� -> �Զ���һ��void�ͺ���
//	//����һ������������ 1 ��ʼ��Ϸ������ 0 �˳���Ϸ����������Ϊ��Ч����
//	//�Զ���һ������ʵ����Ϸ����
//
//	int input = 0;//����һ������ÿ��ѭ����������input����˷��ں�����
//	srand((unsigned)time(NULL));//��������������ǰ��������ѭ���������ͬ
//
//	do
//	{
//		menu();//�˵�
//		if (1 == i)
//		{
//			printf("��ѡ�������1/0����>");
//		}
//		else
//		{
//			printf("�Ƿ����µ���Ϸ��>");
//		}
//		
//		scanf("%d", &input);
//
//		switch (input)//�����ģ�switch��if-slseʵ��������һ��
//		{
//		case 1:
//			printf("��Ϸ��ʼ\n");
//			GAME();
//			i++;
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("��������ȷ��ָ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//                                                      �������������Լ��
//                                         ����չ����С������ = m * n / ���Լ����
//�ؼ���������ѧ�߼��������Լ��
//����ѧ�߼��ϣ����Լ���϶� <= �������еĽ�Сֵ
//��ˣ����ҳ���Сֵ��Ȼ���ҳ��� min % x�����Լ����== 0

//#include <stdio.h>
//int main(void)
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//
//	int min = 0;
//	if (m > n)
//		min = n;
//	else
//		min = m;
//
//	while (1)
//	{
//		if (m % min == 0 && n % min == 0)
//		{
//			printf("���Լ���ǣ�%d\n", min);
//			break;
//		}
//		min--;
//	}
//
//	return 0;
//}

//���������շת��������߼��ϲ�̫�ö��� �㷨�Ż���
// m % n == t  -->  m = n , n = t  -->  t == 0
//#include<stdio.h>
//int main(void)
//{
//	int m = 0, n = 0, t = 0;
//	scanf("%d %d", &m, &n);
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ���ǣ�%d\n", n);
//	return 0;
//}
//���ˣ���ѧУ������Ŀʱ�о�շת������Ѷ���һ����������⣿ѧУ���ң�



//                                         goto��� �� �� �� �ػ�
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(void)
//{
//	char input[20] = { 0 };
//
//	//һ�򿪳���͹ػ�
//	system("shutdown -s -t 120");
//
//again:
//	printf("��ĵ��Խ��������Ӻ�ػ���������룺�����������»س���ĵ��Ծͻ�ȡ���ػ�");
//	scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");//ȡ���ػ�ָ��
//		}
//		else
//		{
//			goto again;//goto��佨��ѭ��
//		}
//	return 0;
//}



//                               ���100 - 200�ڵ�����

//ʲô��������
//���� = ���� --> �ܹ���1����������������
//������֮�����ܹ��� 2 - n-1 ����
//
//int main(void)
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 2;
//		for(j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//����ѭ�������j = i����i������
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//���������㷨�Ż�ʱ��
//1.ż���ز�������������i �����ų�ż��
//2.�ɣ�1���ã�j �ز�������ż��
//3. һ���� i = a * b����a��b��������һ�� <= i�ı�������
//I�����С�ڱ�������������������������ô���ڱ�����������Ҳ���޿���
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)//�޸�һ
//	{
//		int j = 0;
//		int flag = 1;
//		for(j = 3; j <= sqrt(i); j+=2)//�޸Ķ�+��
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//����ѭ�������j = i����i������
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}


///*
//��10���������ֵ
//*/
//
//int main()
//{
//	////����������ʮ����
//	int arr[10] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	/*�������max������ֵ*/
//
//	/*Ȼ�����뻹��������ģ��������ڴ�����Ǹ���ʱ�������0*/
//	/*int max = 0;*/
//	int max = arr[0];//�ĺ󣡣�
//
//	/*����ѭ��Ѱ�����ֵ*/
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//
//	return 0;
//}



/*
��ӡ9 * 9 �˷��ھ���
��������˵���Ǵ�ӡ���С���ӡ���е�����
*/
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 9; i++)
//	{
//		/*��ӡ��*/
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			/*��ӡ��*/
//			//printf("%d * %d = %d", i, j, i * j);
//			/*���Դ�ӡ�����ң�*/
//			//printf("%d*%d=%2d ", i, j, i * j);
//			/* %d ��ʾ���Ϊ���������ÿո񲹳䣬�Ҷ���*/
//			printf("%d*%d=%-2d ", i, j, i * j);
//			/* %d ��ʾ���Ϊ���������ÿո񲹳䣬'-'��ʾ�����*/
//		}
//		/*ÿ��ӡ��һ�к���*/
//		printf("\n");
//	}
//
//	return 0;
//}