
#define _CRT_SECURE_NO_WARNINGS
///*指针初阶
//1.指针是什么？
//
//在计算机科学中，指针(Pointer)是编程语言中的一个对象，利用地址，它的值直接指向( points to )存在电脑存储器中另一个地方的值。
//由于通过地址能找到所需的变量单元，可以说，地址指向该变量单元。因此，将地址形象化的称为“指针”。
//意思是通过它能找到“以它为地址”的内存单元。
//那我们就可以这样理解它——内存。
//总结:指针就是变量，用来存放地址的变量。( 存放在指针中的值都被当成地址处理)。
//那这里的问题是:
//    一个小的单元到底是多大 ?(1个字节 )
//    如何编址 ?
//经过仔细的计算和权衡我们发现一个字节给一个对应的地址是比较合适的。
//对于32位的机器，假设有32根地址线，那么假设每根地址线在寻址的是产生一个电信号正电/负电(1或者0)
//    这里我们就明白:
//在32位的机器上，地址是32个0或者1组成二进制序列，那地址就得用4个字节的空间来存储，所以一个指针变量的大小就应该是4个字节。
//在64位的机器上，地址是64个地址线，那一个指针变量的大小是8个字节，才能存放一个地址。
//总结:
//指针是用来存放地址的，地址是唯一标示一块地址空间的
//指针的大小在32位平台是4个字节，在64位平台是8个字节.
//
//2.指针和指针类型
//变量有类型，指针变量同样有！
//指针类型的意义：
//1.类型发生变化，解引用（*）的访问权限（字节数）发生变化！
//2.指针的类型决定了，指针走一步的步长！
//
//3.野指针
//概念：指针指针指向的位置是未知、随机、不确定的、没有明确限制的
//成因：
//1.指针未初始化！
//2.指针越界访问！
//3.指针指向的空间释放——与动态内存开辟有关
//
//如何避免野指针：
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放即NULL
//4.指针使用之前检查有效性
//
//
//4.指针运算
//指针 +- 整数
//指针 - 指针——前提：两个指针指向同一块空间
//     解释：对其结果除以该指针所代表的数据类型的字节数
//指针的关系运算
//
//
//5.指针和数组
//6.二级指针
//7.指针数组
//*/
//
//
//
///*4.指针的关系运算*/
////#define NUM 5
////#include<stdio.h>
////int main()
////{
////    int arr[NUM] = {0};
////    int* pa = NULL;
////    for (pa = &arr[0]; pa < &arr[NUM];pa++)
////    {
////        *pa = 0;
////        //*pa++ = 1;
////    }
////    arr[NUM] = { 0 };
////    pa = NULL;
////    for (pa = &arr[NUM]; pa > &arr[0]; pa--)
////    {
////        *pa = 1;
////        //*pa++ = 1;
////    }
/////*
//// 实际在绝大部分的编译器上，第二种方法 是可以顺利完成任务的，然而我们还是应该避免这样写，因为标准并不保证它可行。
////标准规定:
////允许指向数组元素的指针与指向数组最后一个元素后面（一）的那个内存位置的指针比较，
////但是不允许与指向第一个元素之前（二）的那个内存位置的指针进行比较。*/
////    return 0;
////}
//
///*指针和数组*/
//
////#include<stdio.h>
////int main()
////{
////    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////    int* p = arr;//数组名
////    printf("*d\n", arr[2]);
////    printf("%d\n", p[2]);//p[2] --> *(p+2)
////    //[] 是一个操作符，2和arr是两个操作数
////    //a+b
////    //b+a    加法交换律
////    printf("ed\n", 2[arr]);
////    printf("d\n", arr[2]);
////    //arr[2] --> *(arr+2)-->*(2+arr)-->2[arr]
////    //arr[2]<==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]//2[arr] <==> *(2+arr)
////    return 0;
////     
////}
//
/////*二级指针*/
////
////int main()
////{
////    int a = 10;  //变量a ，int类型
////    int *pa = &a;//指针变量pa，int类型，一级指针
////    //ppa就是一个二级指针变量，int* 类型
////    int* *ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址
////    return 0;
////}
////
////
////int main()
////{
////    int arr[10];//整形数组 - 存放整形的数组就是整形数组
////    char ch[5];//字符数组 - 存放的是字符
////
////    //指针数组- 存放指针的数组
////    int* parr[5];//整形指针的数组
////    /*
////        | int*
////        | int*
////    parr| int*
////        | int*
////        | int*
////
////    */
////    char* pch[5];//字符型指针数组
////
////    return 0;
////}
//
//
///*指针进阶内容*/
///*
//1.字符指针
//2.数组指针
//3.指针数组
//4.数组传参和指针传参
//5.函数指针
//6.函数指针数组
//7.指向函数指针数组的指针
//8.回调指针
//9.指针和数组面试题的全面解析
//*/
//
////一、字符指针（char*）
//
////一般使用
////#include<stdio.h>
////int main(void)
////{
////    char ch = 'w';
////    char* pc = &ch;
////    *pc = 's';
////
////    printf("%c\n", ch);
////    return 0;
////}
//
////还有一种使用方法
////#include<stdio.h>
////int main(void)
////{
////    const char* pc = "hello world!";
////    printf("%c\n", *pc);//h
////    //本质：把字符串的首字符的地址存在了 指针变量pc 中
////
////    char arr[] = "hello world!";
////    printf("%c\n", *arr);//h
////    //本质：把整个字符串存储进 字符数组arr 中
////
////    printf("%s\n", pc); //hello world!
////    printf("%s\n", arr); //hello world!
////    //知道字符串的起始地址就可以打印整个字符串
////
////    return 0;
////}
//
////#include<stdio.h>
////int main(void)
////{
////    char str1[] = "hello world!";
////    char str2[] = "hello world!";
////    const char* str3 = "hello world!";
////    const char* str4 = "hello world!";
////
////    if (str1 == str2)
////        printf("str1 and str2 are same\n");
////    else
////        printf("str1 and str2 are not same\n");
////
////    if (str3 == str4)
////        printf("str3 and str4 are same\n");
////    else
////        printf("str3 and str4 are not same\n");
////
////    return 0;
////}
///*结果：
//str1 and str2 are not same
//str1和str2是两个独立的数组，虽然内容相同，但在内存中的位置各不相同。
//str3 and str4 are same
//"hello world!"为常量字符串，不可更改，为避免权限冲突，因此用const修饰指针变量
//本质上是两个指针变量指向内存中的同一块空间
//
//这里str3和str4指向的是一个同一个常量字符串。
//C/C++会把常量字符串存储到单独的一个内存区域当几个指针。
//指向同一个字符串的时候，他们实际会指向同一块内存。
//但是用相同的常量字符串去初始化不同的数组的时候就会开辟出不同的内存块。
//所以str1和str2不同，str3和str4不同。
//*/
//
//
//
//
////二、指针数组
////顾名思义，就是存放同类型指针变量的数组
//
////分析一下下面3个例子：
////int* arr1[10];//数组名arr1，里面有10个元素，每个元素都是int*类型 （一级整型指针数组）
////char* arr2[5];//数组名arr2，里面有 5个元素，每个元素都是char*类型（一级字符指针数组）
////int** arr3[4];//数组名arr3，里面有 4个元素，每个元素都是int**类型（二级整型指针数组）
//
////应用：
////#include<stdio.h>
////int main(void)
////{
////    //int a = 10;
////    //int b = 20;
////    //int c = 30;
////    //int* arr[3] = { &a, &b, &c };
////
////    //int i = 0;
////    //for (i = 0; i < 3; i++)
////    //{
////    //    printf("%d ", *(arr[i]));
////    //}
////    //打印结果：10 20 30
////    //能够应用，但是该应用不够好，少见，且显得复杂
////
////    //指针数组模拟实现二维数组
////    int a[5] = { 1,2,3,4,5 };
////    int b[5] = { 2,3,4,5,6 }; 
////    int c[5] = { 3,4,5,6,7 };
////    int* arr[3] = { a, b, c };
////
////    int i = 0;
////    for (i = 0; i < 3; i++)
////    {
////        int j = 0;
////        for (j = 0; j < 5; j++)
////        {
////            printf("%d ", *(arr[i]) + j);
////            //printf("%d ", arr[i][j]);这两种写法是完全等价的
////        }
////        printf("\n");
////    }
////    //*的对象必须是地址，外层循环控制指向数组a，b，c，内层循环控制指向单个数组中的各个元素
////
////    return 0;
////}
//
//
//
//
//
//
////三、数组指针
////数组指针不是数组，而是能够指向数组的指针
////#include<stdio.h>
////int main(void)
////{
////    int a = 10;
////    int* pa = &a;//整型指针
////
////    char b = 'W';
////    char* pb = &b;//字符指针
////
////    int arr[10] = { 0 };
////    int(*parr)[10] = &arr;//数组指针
////
////    double* c[10] = { NULL };
////    double* (*pc)[10] = &c;
////    //double* [10](*pc) = &c;错误写法 err
////
////    return 0;
////}
//
////上面用到了&arr，那么 数组名 与 &+数组名 有什么区别？
////#include<stdio.h>
////int main(void)
////{
////    int arr[10] = { 0 };
////
////    printf("arr = %p\n", arr);  //  arr = 00000031BA95F818
////    printf("&arr = %p\n", &arr);// &arr = 00000031BA95F818
////
////    //看起来是一样的，但是来看这个呢
////
////    printf("arr+1 = %p\n", arr + 1);  // arr + 1 = 000000714B9DFABC
////    printf("&arr+1 = %p\n", &arr + 1);//&arr + 1 = 000000714B9DFAE0
////
////    //arr 与 arr+1 之间相差4，arr是数组首元素地址
////    //&arr 与 &arr+1 之间相差40，&arr是整个数组的地址
////    //二者仅在数值上相同，但意义完全不一样
////
////    return 0;
////}
//
////另外一个使得数组名表示整个数组的地址的例子是
//// sizeof(数组名) - 数组名表示整个数组，计算的是整个数组的大小，单位是字节
//
//
////数组指针的使用
////看一段代码：
////#include<stdio.h>
////int main(void)
////{
////    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////    int(*parr)[10] = &arr;//把数组arr的地址付给数组指针parr
////
////    int i = 0;
////    for (i = 0; i < 10; i++)
////    {
////        printf("%d ", *((*parr) + i));
////    }    //但一般很少用这种写法，操作复杂化，属于是可以使用，但完全没必要
////
////    return 0;
////}
//
////一个数组指针的使用：一般用在二维以上数组
////#include<stdio.h>
////void print1(int arr[][5], int row, int col)//传统打印方法
////{
////    int i = 0;
////    int j = 0;
////    for (i = 0; i < row; i++)
////    {
////        for (j = 0; j < col; j++)
////        {
////            printf("%d ", arr[i][j]);
////        }
////        printf("\n");
////    }
////}
////void print2(int (*p)[5], int row, int col)//应用数组指针
//////传过来的是二维数组arr的首元素地址，指向二维数组的 第一行，形参用指针来接收
////{
////    int i = 0;
////    int j = 0;
////    for (i = 0; i < row; i++)
////    {
////        for (j = 0; j < col; j++)
////        {
////            printf("%d ", *(*(p + i) + j));//应用的难点在于理解 *(*(p + i) + j)
////                                           //p是一个指针变量，指向二维数组的第一行
////        }                                  //*(p + i)仍为一个 int*类型 的值，指向第一行的第一个元素
////        printf("\n");
////    }
////}
////int main(void)
////{
////    int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
////
////    print1(arr, 3, 5);//创建函数打印数组
////
////    print2(arr, 3, 5);//创建函数打印数组
////    return 0;
////}
//
//////学了数组指针和指针数组，来理解一下下面几行代码的意思
////int arr[5];
//////一维数组，名字arr，有5个元素，每个元素都是int类型
////
////int* parr1[10];
//////一维指针数组，名字parr1，有10个元素，每个元素都是int*类型
////
////int(*parr2)[10];
//////数组指针，名字parr2，指向的数组有10个元素，每个元素都是int类型
////
////int(*parr3[10])[5];
//////数组指针数组，一个存放数组指针的数组
//////parr3[10]说明他是数组，int(* )[5]说明它的类型
//////该数组能够存放10个数组指针
//////每个数组指针都能够指向一个数组，该数组有5个元素，每个元素都是int类型
//
//
//
//
////四、数组传参、指针传参
////在写代码时难免要把【数组】或者【指针】传给函数，那么函数的形参该如何设计呢？
//
//
////一维数组传参
////#include <stdio.h>
////void test(int arr[])//ok?
////{}//实参是数组首元素地址，形参用数组接收，ok
//
////void test(int arr[10])//ok?
////{}//形参的数组的[]无意义，可写可不写，ok
//
////void test(int* arr)//ok?
////{}//数组名是数组首元素地址，形参用指针变量，ok
////
//
////void test2(int* arr[20])//ok?
////{}//实参是指针数组，创建指针数组接收，ok
//
////void test2(int** arr)//ok?
////{}//指针数组数组名表示数组首元素地址，首元素是int*类型的指针，要创建二级指针变量接收，ok
////int main(void)
////{
////    int arr[10] = { 0 };
////    int* arr2[20] = { 0 };
////
////    test(arr); 
////
////    test2(arr2);
////    return 0;
////} 
//
//
//
////二维数组传参
////void test(int arr[3][5])//ok
////{}
////void test(int arr[][])//no
////{}
////void test(int arr[][5])//ok
////{}
//////总结: 二维数组传参，函数形参的设计只能省略第一个门]的数字。
//////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
//////这样才方便运算。
////void test(int* arr)//ok?
////{}//实参是数组指针，应该创建数组指针接收，不ok
////
////void test(int* arr[5])//ok?
////{}//形参是指针数组，    不ok
////
////void test(int(*arr)[5])//ok?
////{}//形参：数组指针，指向的数组5个元素，每个元素是int类型
////
////void test(int** arr)//ok?
////{}//形参：二级指针，实参的数组的元素是int类型，不是int*类型，不ok
////
//////二维数组的首元素地址指向的是二维数组的第一行，是第一行的地址（把第1行看做一个数组，有5个元素）
////int main(void)
////{
////    int arr[3][5] = {0};
////    test(arr);
////    return 0;
////}
//
//
//
////一级指针传参
////例子：
////#include<stdio.h>
////void print(int arr[], int sz)
////{
////    int i = 0;
////    for (i = 0; i < sz; i++)
////    {
////        printf("%d ", arr[i]);
////    }
////}
////int main(void)
////{
////    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////    int* p = arr;
////    int sz = sizeof(arr) / sizeof(arr[0]);
////
////    print(p, sz);
////
////    return 0;
////}
//////print(p, sz);
//////把一级指针变量p作为函数参数使用
////
//////思考一下：当一个函数的参数部分为一级指针的时候，函数能接收什么参数？
////void test1(int* p)
////{}
//////1.整型变量的地址    test(&a);   test(a);//a为一级指针变量  
//////2.整型数组的数组名  test(arr)//arr为整型数组
////void test2(char* p)
////{}
//////字符型变量的地址
//////2.字符型数组的的数组名
//
//
//
////二级指针传参
////例子：
////#include<stdio.h>
////void test(int** pp)
////{
////    printf("%d\n", **pp);
////}
////int main(void)
////{
////    int n = 0;
////    int* p = &n;
////    int** pp = &p;
////    test(pp);
////    test(&p);
////
////    return 0;
////}
//////思考一下：当一个函数的参数部分为一级指针的时候，函数能接收什么参数？
////(1)test(pp);传二级指针
////(2)test(&p);传一级指针变量的地址
////(3)int* arr;
////   test(arr)//传一级指针数组的数组名
//
//
//
//
//
///*五、函数指针*/                                  //对比：         
////存放函数地址的指针                                数组名 != &数组名      
////&函数名——取到的就是函数的地址                   函数名 == &函数名
////#include<stdio.h>
////int Add(int x, int y)
////{
////    return x + y;
////}
////int main(void)
////{
////    printf("%p\n", Add);
////    printf("%p\n", &Add);
////    //打印结果：
////    //00007FF6684513DE
////    //00007FF6684513DE
////
////    int(*pf)(int, int) = &Add;
////    //*pf              - 说明变量pf是一个指针变量，变量里存放的是函数的地址
////    //int(*)(int, int) - 说明变量pf指向一个函数
////    //(int, int)       - 说明函数参数的个数、类型
////    //int              - 说明函数的返回类型
////
////    int ret = 0;
////    ret = (*pf)(3, 5);//（1）*pf == Add
////    printf("%d\n", ret);//结果为 8
////    //对函数指针解引用后可以调用函数
////
////
////    //如果我不对pf解引用，尝试直接调用
////    ret = pf(3, 5);//（2）pf == &Add
////    printf("%d\n", ret);//结果同样为 8
////
////    //这就说明 Add == &Add
////    
////    //三种形式（写法）
////    //(*pf)(3, 5);
////    //pf(3, 5);
////    //Add(3, 5);
////
////    return 0;
////}
//
//////阅读两段有趣的代码：（来自《C和指针》）
//////代码1
////(*(void*() ) 0)();
////// void(*)()          - 说明它是一个函数指针
//////( void(*)() )0      - 把数字0强制类型为函数指针类型，让它指向一个函数
//////(* (void*() ) 0 )() - 对0解引用，调用函数
////
//////代码2
////void (*signal(int, void(*)(int)))(int);
//////signal(int, void(*)(int)) - 这是一个函数，参数部分一个是int。一个是函数指针
//////void (*)(int)             - 表明函数的返回类型是函数指针，该函数指针指向一个参数是int，返回类型是void的函数
//
//////代码过于复杂，如何简化？
//////以代码2为例：
////void (*signal(int, void(*)(int)))(int);
//////既然函数的返回类型是函数指针，如果可以写成：void(*)(int)  signal(int, void(*)(int));
//////就容易理解，但是C语言语法不支持这种写法，
//////那么正确的简化方法是 typedef - 对类型重定义!
//
////typedef void(*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t
////pfun_t signal(int, void(*)(int));
//
////接下来看一下函数指针的应用：
///*模拟整数计算器*/
//
////常规方法：
//#include <stdio.h>
//void menu(void)
//{
//    printf("****************************\n");
//    printf("****   1.Add    2.Sub   ****\n");
//    printf("****   3.Mul    4.Div   ****\n");
//    printf("********* 0.Exct ***********\n");
//    printf("****************************\n");
//
//}
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)//无法计算小数
//{
//    return x / y;
//
//}
//int main(void)
//{
//    int input = 0;
//
//    do
//    {
//        int x = 0, y = 0;
//        menu();//打印计算机菜单
//        printf("请选择：>");
//        scanf("%d", &input);
//        int ret = 0;
//
//        switch (input)
//        {
//        case 0:
//            printf("退出程序！\n");
//            break;
//        case 1:
//            printf("请输入两个数字：>");
//            scanf("%d %d", &x, &y);
//            ret = Add(x, y);
//            printf("%d + %d = %d\n", x, y, ret);
//            break;
//        case 2:
//            printf("请输入两个数字：>");
//            scanf("%d %d", &x, &y);
//            ret = Sub(x, y);
//            printf("%d - %d = %d\n", x, y, ret);
//            break;
//        case 3:
//            printf("请输入两个数字：>");
//            scanf("%d %d", &x, &y);
//            ret = Mul(x, y);
//            printf("%d * %d = %d\n", x, y, ret);
//            break;
//        case 4:
//            printf("请输入两个数字：>");
//            scanf("%d %d", &x, &y);
//            ret = Div(x, y);
//            printf("%d / %d = %d\n", x, y, ret);
//            break;
//        default:
//            printf("输入错误，请重新输入！\n");
//            break;
//        }
//
//    } while (input);
//
//    return 0;
//}

//该程序可以运行，但switch-case语句冗余，以下使用函数指针进行优化
//int main(void)
//{
//    int input = 0;
//
//    do
//    {
//        int x = 0, y = 0;
//        int ret = 0;
//        int (*parr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//
//        menu();//打印计算机菜单
//        printf("请选择：>");
//        scanf("%d", &input);
//        if (input >= 1 && input <= 4)//input在1到4的闭区间上执行
//        {
//            printf("请输入两个操作数：>");
//            scanf("%d %d", &x, &y);
//            ret = parr[input](x, y);
//            printf("ret = %d\n", ret);
//        }
//        else if(input == 0)
//        {
//            printf("程序退出！\n");
//        }
//        else
//        {
//            printf("输入错误，请重新输入！\n");
//        }
//    } while (input);
//
//    return 0;
//}





/*六、回调函数*/
////除了函数指针，我们也可以尝试使用【回调函数】的方式优化switch语句中的冗余代码
////回调函数就是一个通过函数指针调用的函数。
//// 如果你把函数的指针i(地址作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。
////回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进行响应。

//int Calc(int (*pf)(int, int))//通过回调函数的方式把冗余代码简化处理
//{
//    int x = 0, y = 0;
//    printf("请输入两个数字：>");
//    scanf("%d %d", &x, &y);
//    return pf(x, y);
//}
//int main(void)
//{
//    int input = 0;
//
//    do
//    {
//        menu();//打印计算机菜单
//        printf("请选择：>");
//        scanf("%d", &input);
//        int ret = 0;
//
//        switch (input)
//        {
//        case 0:
//            printf("退出程序！\n");
//            break;
//        case 1:
//            ret = Calc(Add);
//            printf("result = %d\n", ret);
//            break;
//        case 2:
//            ret = Calc(Sub);
//            printf("result = %d\n", ret);
//            break;
//        case 3:
//            ret = Calc(Mul);
//            printf("result = %d\n", ret);
//            break;
//        case 4:
//            ret = Calc(Div);
//            printf("result = %d\n", ret);
//            break;
//        default:
//            printf("输入错误，请重新输入！\n");
//            break;
//        }
//    } while (input);
//
//    return 0;
//}


////接下来为了深刻学习，并尝试使用回调函数，我们来理解并使用qsort()函数（库函数，快速排序）

////以冒泡排序整型数组的代码为引子
//#include<stdio.h>
//void paopao_sort(int* arr, int sz)//两两比较，有必要就交换
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)//确认要跑多少趟
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//确认一趟要跑多少次
//		{
//			if (arr[j] > arr[j + 1])//不满足升序就交换
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//void print_arr(int* arr, int sz)//打印数组
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//
//}
//
//int main(void)
//{
//	int arr[] = { 9,8,7,4,5,6,3,2,1,0 };//创建数组，存放十个元素
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//
//	paopao_sort(arr, sz);//调用函数进行排序
//
//	print_arr(arr, sz);//调用函数打印验证
//
//	return 0;
//}

////该冒泡排序函数有很大缺陷，只能排序整数，对字符数据，结构体数据不适用
////然而，qsort()函数就没有这种限制，那么qsort()函数是怎么实现的呢？

//void qsort(void* base, //告诉函数待排序数据中的第一个数据的地址 - 因为void* 可以接受来自任意类型的指针
//           size_t num, //告诉函数有几个数据要排序
//           size_t size,//告诉函数待排序数据中一个元素的大小，单位是字节 - 因为知道了一个元素的大小才知道数据的类型
//           int (*compar)(const void*, const void*)//告诉函数【你写了一个什么样的函数】来比较待排序数据中的2个元素的函数，此处乃精髓！
//          );

////我们来尝试使用一下qsort()函数
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////---------------------------------------------------------------------
//struct stu//结构体创建放在调用前
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void test2()
//{
//	//创建结构体变量并初始化
//	struct stu s[] = { {"zhangsan", 45}, {"lisi", 75}, {"wangwu", 20} };
//	//求结构体数组长度
//	int sz = sizeof(s) / sizeof(s[0]);
//	//调用函数进行排序
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);//以年龄为排序标准
//	qsort(s, sz, sizeof(s[0]), sort_by_name);//以名字为排序标准
//}
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
//void print_arr(int* arr, int sz)//打印数组
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int bubble_sort_arr(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;//返回正数 - e1 > e2;//返回0 - e1 = e2;//返回负数 - e1 < e2;
//}
//
//void test1(void)//排序整型数据
//{
//	int arr[] = { 9, 7, 5, 3, 1, 2, 4, 6, 8, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), bubble_sort_arr);
//
//	print_arr(arr, sz);
//}
//--------------------------------------------------------------------------------------------
//int main(void)
//{
//	//先尝试排序整型数据
//	//test1(NULL);

//	//再尝试排序结构体数据
//	test2();

//	return 0;
//}


////经过理解、使用之后，我们来尝试模拟一个qsort()函数
//--------------------------------------------------------------------------------
#include<stdio.h>
void swap(char* p1, char* p2, int width)//传过来的是char类型的地址，用char类型接收
{
	int i = 0;
	for (i = 0; i < width; i++)//为了提高通用性，把指针转换成char类型，再乘于单个元素的字节数，并且把每个字节的内容都交换
	{
		char temp = *p2;
		*p2 = *p1;
		*p1 = temp;
		p1++;
		p2++;
	}
}
void bubble_sort(void* base,
				int sz,
				int width,
				int(*compare)(const void* e1, const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz-1; i++)
	{
		//一趟的排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素比较
			//类似arr[j] arr[j+1]
			if (compare( (char*)base + j * width, (char*)base+(j+1)*width ) > 0)//把地址传给函数，进行比较
			{
				//交换这两个指针指向的元素的内容
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
//------------------------------------------------------------------------------------

void print_arr(int* arr, int sz)//打印数组
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
}
int bubble_sort_arr(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;//返回正数 - e1 > e2;//返回0 - e1 = e2;//返回负数 - e1 < e2;
}
int main(void)
{
	int arr[] = { 9, 7, 5, 3, 1, 2, 4, 6, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz, sizeof(arr[0]), bubble_sort_arr);

	print_arr(arr, sz);


	return 0;
}