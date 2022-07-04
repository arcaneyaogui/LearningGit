

**我们学习c语言,关键就是学习它的函数库该如何使用.**

C 语言能够让用户更轻松完成自顶向下，结构化编程 和 模块化设计
C 拥有具有汇编能力才具有的微调控能力

​     main函数总是第一个被调用的函数
​     函数是C语言的构造块

// 声明两个变量可以一起声明,但是再Java中这样不推荐.
     int feet,fathoms;



~~~C
-------  目前学过的头文件 ------
//_Bool 头文件：
    #include<stdbool.h>  
// 可移植头文件
    #include <stdint.h> 
    #include <inttypes.h>
 // 提供strlen();
	#include <string.h> 
 // 提供数学计算等
    #include<math.h>
//    头文件提供的字符分析函数系列
	#include <ctype.h>
//  提供rand()随机数等函数
    #include<stdlib.h>    
    ASCII码:
    A -- 65  a -- 97  0 -- 48    

~~~



# 第一章 初识C语言

## C语言起源
1972年，贝尔实验室的丹尼斯·里奇（Dennis Ritch）和肯·汤普逊（Ken Thompson）在开发UNIX操作系统时设计了C语言

## C语言六大特性
### 1.设计特性 
C语言的设计理念让用户能轻松地完成自顶向下的规划、结构化编程和模块化设计

### 2.高效性

- 强大的控制结构
- 快速
- 代码紧凑 -----代表程序更小 
- 可以移植到其他计算机 

在设计上，它充分利用了当前计算机的优势，因此 C程序相对更紧凑，而且运行速度很快。实际上，C 语言具有通常是汇编语言才具有的微调控制能力

### 3.可移植性

各种平台都可以找到合适的C语言编译器，可以直接运行或者简单修改后就可以运行。

### 4.强大而灵活 

例如 UNIX操作系统大部分都是由C语言写的

C程序还可以用于解决物理学和工程学问题，甚至可以用于制作电影的动画特效。

### 5.面向程序员

程序员利用C语言可以访问硬件，操作内存中的位。

C语言还具有非常丰富的位运算符和众多C函数供程序员使用。

### 6.设计程序步骤

- 定义程序目标
- 设计程序
- 编写代码
- 编译
- 运行程序
- 测试和调试程序
- 维护和修改代码



## C语言运行步骤

![image-20201223222203549](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20201223222203549.png)

一个文件名为concrete后缀为 .c 的c语言文件,经过编译器编译后编程后缀为 .obj 的目标代码文件,

然后衔接器在库代码(调用的函数库)和启动代码(系统标准启动代码)的作用下

**链接器的作用是，把你编写的目标代码、系统的标准启动代码和库代码这 3 部分合并成一个文件，即可执行文件。对于库代码，链接器只会把程序中要用到的库函数代码提取出来**



## C语言程序设计

1. 什么是计算机程序?

   答 : 所谓**程序**就是一组计算机能够识别和执行的**指令** .

   

2. 什么是计算机语言?

   答 : 首先 计算机能够识别和接收的二进制代码被称为**机器指令**.
   		**机器指令的集合**就是该计算机的**机器语言**.

   - **非机构语言**  : 
      - BASIC ALGOL 等都是非结构语言
      - 没有严格规范要求,随意跳转,难以阅读和维护
   - **结构化语言** : 
      - 如: C语言 FORTRAN 77  等都是属于结构化语言.
      - 规定程序需要具有良好的基本结构(顺序结构  基本结构  循环结构)
   - **面向对象语言** :
      - 如: Java  C++  C#  等等
      - 对于处理规模较大的问题时使用更加方便.

   

3. C语言有以下一些特点:

   - 语言简洁 使用方便灵活
   - 运算符丰富
   - 数据类型丰富
   - 具有结构化的控制语句
   - 语法限制不太严格
   - C语言允许直接访问物理地址
   - C语言移植性好
   - 生成目标代码质量高,程序执行效率高







## 第一章习题

1.对编程而言，可移植性意味着什么？

源代码不需要任何修改就可以在不同计算机系统中成功编译的程序。

2.解释源代码文件、目标代码文件和可执行文件有什么区别？

- 源代码文件：包含程序员使用的任何编码语言编写的代码
- 目标代码：包含机器语言 不必是完整的程序代码
- 可执行文件：包含组成可执行程序的完整机器语言代码。

3.编程的7个主要步骤是什么？

- 定义程序目标
- 设计程序
- 编写代码
- 编译
- 运行程序
- 测试和调试程序
- 维护和修改代码

4.编译器的任务是什么？

把源代码翻译成等价的机器语言代码（目标代码）。

5.链接器的任务是什么？

**链接器的作用是，把你编写的目标代码、系统的标准启动代码和库代码这 3 部分合并成一个文件，即可执行文件。**



# 第二章 C语言概述

![C代码理解图](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\C代码理解图.png)

1. **main（） 函数总是第一个被调用的函数** 
2. 函数是C语言的构造块
3. C语言中的六种语句
   1. 标识语句
   2. 复合语句
   3. 表达式语句
   4. 选择语句
   5. 迭代语句
   6. 跳转语句
4. < stdio.h >  是C编译器软件包的标准部分，它提供键盘输入和屏幕输出的支持。
5. int表明main()函数返回一个整数，void表明main()不带任何参数。
6. \#include这行代码是一条C预处理器指令,通常，C编译器在编译前会对源代码做一些准备工作，即预处理



### C语言中的注释 

1. /* 第一种注释 */
2.  // 像这种的单行注释



### C语言的声明

~~~ C
int num；  		// 这代码叫做声明
int num2,num3; 	  // 也可以像这样一次性声明几个
/* 
    int 是C语言中的数据类型
    num 叫做标识符
*/
~~~

声明完成两件事情

**声明就是特定的标识符和计算机内存中的特定位置联系起来，同时也确定了储存在某位置的信息类型或数据类型。**

1. C语言中的所有变量必须先声明才能够使用
2. 在函数中有一个名为num的变量 
3. int 表明 num 变量是一个整数 

### C语言有效命名

**用小写字母、大写字母、数字和下划线 “_” 来命名。**

**而且，名称的第1个字符必须是字符或下划线，不能是数字。**

在C语言中，实际参数（简称实参）是传递给函数的特定值，形式参数（简称形参）是函数中用于储存值的变量

- C语言得名称时区分大小写的
- name 			// 纯英文
- name2           // 英文后面接数字	
- name_three   // 英文下划线接英文



### 多个函数

~~~c
#include <stdio.h>
int main(void)
{
     printf("我说我好不好?\n");
     butler();
     printf("原来我真的折磨好\n");
     return 0 ;
}
void butler(void)
{
     printf("你好啊\n");
}
~~~



### C语言中的关键字和保留标识符 

![image-20201231150148625](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20201231150148625.png)



![image-20201231150206193](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20201231150206193.png)



![image-20201231212539024](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20201231212539024.png)



### C语言第二章概念小结

~~~c
/*  
	\t 表示Tab键 
	\b BAck pace 键( 退格键 )
	\n 表示换行
	%d相当于是一个占位符，其作用是指明输出变量值的位置.
	% 提醒程序要在该处打印一个变量，d表明把变量作为十进制整数打印.
	
	如果遗漏 main()函数中的 return 语句，程序在运行至最外面的右花括号（}）时会返回0。因此，可以省略	main()函数末尾的return语句。但是，不要在其他有返回值的函数中漏掉它。
	
	程序由一个或多个函数组成，必须有 main()函数。
	
	#include<stdio.h> // 这个库提供键盘输入和屏幕输出的支持。

     #include<stdio.h>
     int main(void)		-- 函数头
     {
     // 以下为函数体
          语句; //语句一般都用 ; 结尾
          return 0;  -- main()方法以return结束.
     }
     
     查错题细节:
     1.变量声明错误  如 int a,int b;  // 这种申明时错误的 
     2.用 ( 代替 { 括号 
     3.语句后面没有写分号
     4.注释是否写错 
     
      C程序由一个或多个C函数组成。每个C程序必须包含一个main()函数，这是C程序要调用的第1个函数。简单的函数由函数头和后面的一对花括号组成，花括号中是由声明、语句组成的函数体。

在C语言中，大部分语句都以分号结尾。声明为变量创建变量名和标识该变量中储存的数据类型。变量名是一种标识符。赋值表达式语句把值赋给变量，或者更一般地说，把值赋给存储空间。函数表达式语句用于调用指定的已命名函数。调用函数执行完毕后，程序会返回到函数调用后面的语句继续执行。

printf()函数用于输出想要表达的内容和变量的值。

一门语言的语法是一套规则，用于管理语言中各有效语句组合在一起的方式。语句的语义是语句要表达的意思。编译器可以检测出语法错误，但是程序里的语义错误只有在编译完之后才能从程序的行为中表现出来。检查程序是否有语义错误要跟踪程序的状态，即程序每执行一步后所有变量的值。

最后，关键字是C语言的词汇。

return 在C语言中是一种跳转语句
     
*/  
~~~



### C语言第二章练习

1. C语言的基本模块是什么？

​    函数头   函数体

​    2.什么是语法错误？什么是语义错误？

**语法错误** 可以看作是编码出现了违反C语言规则的错误.

**语义错误** ,也可以叫逻辑错误.它符合C语言编写规则,但是逻辑上会问题.

3.在main、int、function、char、=中，哪些是C语言的关键字？

​		答 : int 和 char 



# 第三章 数据和C语言

## 关键字

**int 、short、long、unsigned、char、float、double、**

_ Bool、_ Complex、_Imaginary

本章新学 :

运算符 :  sizeof();     函数 : scanf();

~~~C
/* 
%d占一个位置,十进制输出  
%f占一个位置 , 然后小数形式输出 .
%.2f  中的 .2 用于精确控制输出 
*/
~~~



## getchar  putchar  and  scanf()

**scanf()在读取数字时会跳过空格、制表符(Tab)和换行符(Enter)！**

scanf（）函数是格式输入函数，即按用户指定的格式从键盘上把数据输入到指定的变量中。

在scanf（）语句的格式串中由于没有非格式字符在“%d%d%d”之间作为输入时的间隔，因此在输入时要用一个以上的空格或回车符作为每两个输入数之间的间隔。

~~~C
#include<stdio.h>
int main(void)
{
     printf("=============================================================");
     int age;
     float high;
     double weight;
     char name[20];
     printf("请依次填写你的年龄,身高,体重,名字");
     /* scanf()输入double时要用%lf不能用%f 但是输出可以,因为编译器自动double转float了 */
     // 变量前需要加 & 符号 , 并且接受多个变量时自动跳过空格和回车.
     scanf("%d%f%lf%s",&age,&high,&weight,&name);      
     printf("你的名字是:%s\n 体重是:%lf\n 身高是:%.2f\n 年龄:%d",name,weight,high,age);

     printf("=============================================================");
     printf("你最喜欢哪些字符? -- #号结束输入");
     char sign;
    
    /*
	    getchar() 有缓冲区回车结束接收字符, 空格和回车都会被算作符号.
	    putchar() 用来显示参数所需表示的字符 
    */
     while ((sign = getchar())!='#')
          putchar(sign);
	return 0;
}
~~~

## C语言数据类型关键字

~~~C
int main(void)
{
     int age;
     char name[30];
     printf("please enter your first name \n");
     scanf ("%s",&name);
     printf("please enter your age: \n");
     scanf ("%d",&age);
     printf("your name is : %s \n",name);
     printf("your age: %d\n",age);
     return 0;
    
    // 接受和输出都要对应好，比如%s接受的数组用%c输出就会使 ？ 号
    // 用%f 接收整数 %d输出就会是0.000000
}
~~~







![image-20201231212539024](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20201231212539024.png)



### 全局变量和局部变量

~~~C
#include<stdio.h>

int age = 20; /* 全局变量 都可以使用这个 */

int emm(int hisage);

int main(void){
    int myage = age - 2;
    int hisage;     
    hisage = emm(myage);
    printf("my age : %d , his age : %d",myage,hisage);
}

int emm(int age){
    int hisage = age + 5;  // 局部变量 只能在函数块中使用 
    return hisage;
}
~~~









### 整数

- 整数
   - long , short , int , unsigned , signed(用于提供基本整数类型的变式).
   - float , double , long double.表示带小数的数
   - _Bool 类型表示布尔类型
   - _complex 和 _imaginary 分别表示复数和虚数.
   - **char关键字用于指定其他字符,也可表示较小的整数.**

![image-20201231215548255](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20201231215548255.png)



### 十进制 八进制 十六进制

~~~C
int main(void){
    int i = 20;
    // %d 十进制输出 %o 8进制输出  %x 16进制输出
    printf("%d,%o,%x \n",i,i,i);
    // 带格式输出 就是数字头有表明他是那个进制得符号
    printf("%d,%#o,%#x \n",i,i,i);
    return 0;
}

输出结果:
20,24,14    
20,024,0x14 

~~~







### 浮点数

### 位(bit)  字节(byte) 和  字(word)

位(bit)  计算机最小储存单位,可以储存 0 或 1, 是计算机内存的基本构建块.

字节(byte)  一字节为8位 如 :  00000001 

字(word) : 是设计计算机时给定的自然储存单位,个人计算机从 最开始8位--16位--32位--到现在的64位,计算机的子长越大,其数据转移越快,允许内存访问也更多.

![image-20201231215644776](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20201231215644776.png)



~~~C
#include<stdio.h>
int main(void)
{
     double a = 2.348898;
     printf("%2.2f",a);   // 限定小数点未熟后，会有个四舍五入的结果。
     return 0;
}
~~~



### int类型

~~~C
// %d 10进制显示  %o 8进制显示  %x 16进制显示
/*
要清楚，使用不同的进制数是为了方便，不会影响数被储存的方式。也就是说，无论把数字写成16、	 020或0x10，储存该数的方式都相同，因为计算机内部都以二进制进行编码。

// 那么后面两个%d由于没有对应的变量,输出的就是内存中的任意数据.
printf("%d minus %d is %d\n", ten);　// 遗漏2个参数
*/
~~~

**在C语言中，用特定的前缀表示使用哪种进制。0x或0X前缀表示十六进制值，所以十进制数16表示成十六进制是0x10或0X10。与此类似，0前缀表示八进制**



C语言提供3个附属关键字修饰基本整数类型：short、long和unsigned。应记住以下几点。

short int类型（或者简写为short）占用的存储空间可能比int类型少，常用于较小数值的场合以节省空间。与int类似，short是有符号类型。

long int或long占用的存储空间可能比int多，适用于较大数值的场合。与int类似，long是有符号类型。

long long int或long long（C99标准加入）占用的储存空间可能比long多，适用于更大数值的场合。该类型至少占64位。与int类似，long long是有符号类型。

**unsigned int或unsigned只用于非负值的场合。**这种类型与有符号类型表示的范围不同。例如，16位unsigned int允许的取值范围是0～65535，而不是-32768～32767。用于表示正负号的位现在用于表示另一个二进制位，所以无符号整型可以表示更大的数。

在C90标准中，添加了unsigned long int或unsigned long和unsigned int或unsigned short类型。C99标准又添加了unsigned long long int或unsigned long long。

在任何有**符号类型**前面添加关键字signed，**可强调使用有符号类型的意图**。例如，short、short int、signed short、signed short int都表示同一种类型。



可以在整数后面加L后缀表示是long类型  **variablename -- 变量名的意思**  

long　int 	variablename;  long　variablename;  short　int　variablename;   short　variablename;

unsigned　int　variablename;   unsigned　variablename;   unsigned　long　variablename;

unsigned　short　variablename;    long　long　variablename (为了储存64位引进)  -- 后缀 LL;



![img](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\v2-1a44e17045c656512a49f95cc0568030_720w.jpg)





### 打印short、long、long long和unsigned类型

**打印unsigned int类型的值，使用%u转换说明；打印long类型的值，使用%ld转换说明。如果系统中int和long的大小相同，使用%d就行**

**%lx表示以十六进制格式打印long类型整数，%lo表示以八进制格式打印long类型整数。**

**对于short类型，可以使用h前缀。%hd表示以十进制显示short类型的整数，%ho表示以八进制显示short类型的整数。h和l前缀都可以和u一起使用，用于表示无符号类型。例如，%lu表示打印unsigned long类型的值。**



### 整数溢出

有符号类型整数溢出  是从最小复数从新开始.

无符号整数溢出,则是从 0 从新开始.

~~~c
#include　<stdio.h>
int　main(void)
{
int　i　=　2147483647;
unsigned　int　j　=　4294967295;
printf("%d　%d　%d\n",　i,　i+1,　i+2);
printf("%u　%u　%u\n",　j,　j+1,　j+2);
return　0;
}
/*
    在我们的系统下输出的结果是：
    2147483647　　　-2147483648　 -2147483647
    4294967295　　　0　　 1
*/
~~~



### 使用正确的转换   --    重点:  截断

~~~C

#include　<stdio.h>
int　main(void)
{
unsigned int un = 3000000000; /* int为32位和short为16位的系统 */
short　end　=　200;
long　big　=　65537;
long　long　verybig　=　12345678908642;
printf("un　=　%u　and　not　%d\n",　un,　un);
printf("end　=　%hd　and　%d\n",　end,　end);
printf("big　=　%ld　and　not　%hd\n",　big,　big);
printf("verybig=　%lld　and　not　%ld\n",　verybig,　verybig);
return　0;
}
/*
    在特定的系统中输出如下（不同系统输出的结果可能不同）：
    un = 3000000000 and not -1294967296
    end = 200 and 200
    big = 65537 and not 1
    verybig= 12345678908642 and not 1942899938
    该例仅仅表明，使用错误的转换说明会得到意想不到的结果。
    
        使用h修饰符可以显示较大整数被截断成 short 类型值的情况。第 3 行输出就演示了这种情况。把 65537 以二进制格式写成一个 32 位数是00000000000000010000000000000001。使用%hd，printf()只会查看后 16 位，所以显示的值是 1。
*/
~~~

**程序员必须确保转换说明的数量和待打印值的数量相同。以上内容也提醒读者，程序员还必须根据待打印值的类型使用正确的转换说明。**

**在使用 printf()函数时，切记检查每个待打印值都有对应的转换说明，还要检查转换说明的类型是否与待打印值的类型相匹配。**





### char类型

通常，char类型被定义为8位的存储单元，因此容纳标准ASCII码绰绰有余

char类型用于储存字符（如，字母或标点符号），但是从技术层面看，char是整数类型。因为char**类型实际上储存的是整数而不是字符**

给char 赋值字符串的时候要打  '  '  , 不然他会以为式变量 

~~~ C
char broiled;　　 /* 声明一个char类型的变量 */
broiled = 'T';　　/* 为其赋值，正确 */
broiled = T;　　　/* 错误！此时T是一个变量 */
broiled = "T";　　/* 错误！此时"T"是一个字符串 */
~~~



~~~C
#include <stdio.h>
int main(void)
{
     // char一般为一个字符， 往后面加他会存最后一个字符。
     char name ='n';
     // char name ='name';  如这个最后输出的字符是 e 
     printf("我的名字:%c or %d",name,name);
     return 0;
}
~~~

有些C编译器把char实现为有符号类型，这意味着char可表示的范围是-128～127。而有些C编译器把char实现为无符号类型，那么char可表示的范围是0～255。请查阅相应的编译器手册，确定正在使用的编译器如何实现char类型

那么考试时因为编译器不同，结果也是不同的？以考试教材为主。





### 转义字符 

![image-20210103161032557](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210103161032557.png)



~~~C
printf("1\v2")  // \v垂直制表符
/*    输出结果 
1
12
 2
 */
    
     printf("nihao \r wobuhao");
/*输出结果
wobuhao
// 因为\r回到首行居然会把前面的覆盖掉.
*/
~~~

~~~C
#include<stdio.h>
int main(void)
{
     float salary;
     printf("\aEnter your desired monthly salary:");
    // 使用\b 我可以在下划线哪里输入,哪怕换成其他东西
     printf("$_______\b\b\b\b\b\b\b");  
     scanf("%f",&salary);
     printf("\n\t$%.2f a month is $%.2f a year",salary,salary*12.0);
     printf("\rGood!\n");
     return 0;
   /*
        第4条printf()语句以\r开始。这使得光标回到当前行的起始处。然后打印Gee!，接着\n		使光标移至下一行的起始处。屏幕最后显示的内容应该是：
        Enter　your　desired　monthly　salary:　$4000.00
        Gee!　$4000.00　a　month　is　$48000.00　a　year.
    */
}
~~~



### _Bool

**C语言用值1表示true，值0表示false，所以_Bool类型实际上也是一种整数类型。但原则上它仅占用1位存储空间，因为对0和1而言，1位的存储空间足够了。**

**把其他非零数值赋给_Bool类型的变量，该变量会被设置为1。这反映了C把所有的非零值都视为真。**

~~~C
#include<stdbool.h>  // 可以把_Bool 写成 bool false true变成关键字。
~~~





### 可移植头文件

~~~C
#include <stdint.h> 
#include <inttypes.h>

/*C 语言提供了许多有用的整数类型。但是，某些类型名在不同系统中的功能不一样。C99 新增了两个头文件stdint.h和inttypes.h，以确保C语言的类型在各系统中的功能相同。

C语言为现有类型创建了更多类型名。这些新的类型名定义在stdint.h头文件中。例如，int32_t表示32位的有符号整数类型。在使用32位int的系统中，头文件会把int32_t作为int的别名。不同的系统也可以定义相同的类型名。例如，int为16位、long为32位的系统会把int32_t作为long的别名。然后，使用int32_t类型编写程序，并包含stdint.h头文件时，编译器会把int或long替换成与当前系统匹配的类型。*/
~~~

### 浮点型的一点扩充

C标准规定，float类型必须至少能表示6位有效数字，且取值范围至少是10-37～10+37。

![image-20210103165129869](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210103165129869.png)

C语言提供的另一种浮点类型是double（意为双精度）。double类型和float类型的最小取值范围相同，但至少必须能表示10位有效数字。一般情况下，double占用64位而不是32位。一些系统将多出的 32 位全部用来表示非指数部分，这不仅增加了有效数字的位数（即提高了精度），而且还减少了舍入误差。另一些系统把其中的一些位分配给指数部分，以容纳更大的指数，从而增加了可表示数的范围。无论哪种方法，double类型的值至少有13位有效数字，超过了标准的最低位数规定。



-1.56E+12    =  - 1.56 乘 10 的正12次方  = -1.56E12 (E和12的正号可以省去)

  2.87e-3   =  正数 2.87 乘以 10 的负的3次方  = 2.87e-3  (但是如果时负号就不能够省略 )

**E 和 e 都是一样的,但是E/e与后面的数字之间不能有空格 !!!**

~~~C
float a1 = -1.5E+12;  // float a1 = -1.5E12; 正号可省略 
float a2 = .5E-12;	// .5E 表示 0.5E 那个0省略了
float a3 = 4e16;
float a4 = 100.; // 小数点后买你的0可省略  100.000000
// C语言只保证了float类型小数的前六位精度
// 和Java一样 没有后缀f/F 或者 l/L 一般默认double 和 int

/*
0xa.1fp10
十六进制a等于十进制10，.1f是1/16加上15/256（十六进制f等于十进制15），p10是210或1024。0xa.1fp10表示的值是(10 + 1/16 + 15/256)×1024（即，十进制10364.0）。
注意，并非所有的编译器都支持C99的这一特性。
*/
~~~

#### 浮点值的上溢和下溢

**-- 这个都不太懂 , 先放一放 . 后面百度理解理解.**

### 虚数和复数类型

简而言之，C语言有3种复数类型：float_Complex、double_Complex和long double _Complex。例如，float _Complex类型的变量应包含两个float类型的值，分别表示复数的实部和虚部。类似地， C语言的3种虚数类型是float _Imaginary、double _Imaginary和long double _Imaginary。

如果包含complex.h头文件，便可用complex代替_Complex，用imaginary代替_Imaginary，还可以用I代替-1的平方根。



第三章小结 

**基本数据类型由11个关键字组成：int、long、short、unsigned、char、float、double、signed、_Bool、_Complex和_Imaginary。**

有符号整型可用于表示正整数和负整数。

int ——系统给定的基本整数类型。C语言规定int类型不小于16位。

short或short int ——最大的short类型整数小于或等于最大的int类型整数。C语言规定short类型至少占16位。

long或long int ——该类型可表示的整数大于或等于最大的int类型整数。C语言规定long类型至少占32位。

long long或long long int ——该类型可表示的整数大于或等于最大的long类型整数。Long long类型至少占64位。

一般而言，long类型占用的内存比short类型大，int类型的宽度要么和long类型相同，要么和short类型相同。例如，旧DOS系统的PC提供16位的short和int，以及32位的long；Windows 95系统提供16位的short以及32位的int和long。就是说int 和short相同就不会和long相同 , 反之亦然.

无符号整型只能用于表示零和正整数，因此无符号整型可表示的正整数比有符号整型的大。**在整型类型前加上关键字unsigned表明该类型是无符号整型**：unsignedint、unsigned long、unsigned short。**单独的unsigned相当于unsignedint。**

~~~C
/* 这个例子中的a,明明时100.但是我们声明是float,整数输出程序认为是float类型的值,并不会帮我们转化成int 类型 , 它最后输出的数字是其他的错误输出结果.*/
#include <stdio.h>
#include <inttypes.h>  // 支持可移植类型
int main(void)
{
     float aa = .1E1;
     float a = 100.;
     float b = 2.87e-3;
     printf(" %d, %f , %f" ,a,b,aa);
     return 0;
} 
~~~

# 第四章 字符串 格式化输入\输出

~~~C
#include <stdio.h>
#include <string.h>  // 提供strlen()函数
#define DENSITY 62.4 // 用C预处理器把字符常量DENSITY定义为62.4。
int main(void)
{
     float weight,volume;
     int size,letters;
     char name [50];  // 不能像java char [] name , 会报错
     printf("hi what's your first name ? \n");
     scanf("%s",name);
     printf("%s what's your weight in pounds?\n",name);
     scanf("%f",&weight);
     size = sizeof name;      //计算这个数组有多少个字节
     letters = strlen(name);  // 用C函数strlen()获取字符串的长度。
     volume = weight/DENSITY;
     // %2.2f 这两个2分别代之整数有效数和小数有效数.
     printf("well,%s,your volume is %2.2f cubic feet,\n",name,volume);
     printf("Also, your first name has %d letters,\n",letters);
     printf("and we have %d bytes to store it.\n",size);
}
~~~

C语言中的null不是没有字符,它是非打印字符.

~~~C
#include <stdio.h>
#include <string.h>  // 提供strlen();
#define PRAISE " You are an extraordinary begin. "
int main(void)
{
     int namebyte;
     int namelenght;
     char name[40];
     printf("what's your name ?\n");
    // 当scanf只接受一个变量字符时,遇见空格 回车 制表符就不会在读取
     scanf("%s",name); 
     namelenght = sizeof name;
     namebyte = strlen(name);
     printf("hello , %s.%s\n",name,PRAISE);
     printf("it are %d words for your name.\n", namelenght);
     printf("\t\t we store your name consume %d bytes", namebyte);
     printf("\rGood a name!!!");  //这个在上面一句前面,并且把它的\t覆盖了.
     return 0;
}

//  -----------输出结果如下----------------------------------
//    what's your name ?
//    111
//    hello , 111. You are an extraordinary begin.
//    it are 40 words for your name.
//    Good a name!!!   we store your name consume 3 bytes
~~~

## 字符串和字符的区别

![image-20210103234215232](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210103234215232.png)

~~~C
// 头文件不以分号结尾 emmm....
#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary begin."
int main(void)
{
     char name[40];
     printf("What's your name? ");
     scanf("%s",name);
     printf("Hello, %s.%s\n", name, PRAISE);
     // %zd  格式符z和整数转换说明符一起使用，表示对应数字是一个size_t值。属于C99
     printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name), sizeof name);
     printf("The phrase of praise has %zd letters ",strlen(PRAISE));
     printf("and occupies %zd memory cells.\n", sizeof PRAISE);
     return 0;
     /*
     What's your name?
     LYG  ggg            // 忽略了 ggg 因为scanf只接受一个变量,所以遇见空格会停止.
     Hello, LYG.You are an extraordinary begin.
     Your name of 3 letters occupies 40 memory cells.
     
     // 不一样是因为sizeof将字符串最为的空字符串也计算了,而strlen()只是计算数组个数.
     
     The phrase of praise has 31 letters and occupies 32 memory cells.
     */
}
~~~

## const 预处理 和 常量

在程序中，最好用#define 定义数值常量，用 const 关键字声明的**变量**为只读变量。在程序中使用符号常量（明示常量），提高了程序的可读性和可维护性。

**注意，在C语言中，用const类型限定符声明的是变量，不是常量**

~~~C
#include <stdio.h>
#define PI 3.14159       // 使用预处理定义一个常量
int main(void)
{
     float area,circum,radius;
     printf("What is the radius os your pizza?\n");
     scanf("%f",&radius);
     area = PI * radius*radius;    // 面积
     circum = 2.0*PI*radius;       // 周长
     printf("your basic pizza parameters（参数） are as follow: \n");
     printf("circumference = %1.2f,area = %1.2f\n",circum,area);
     return 0;
    
    /*
    const int MONTHS = 12; // MONTHS在程序中不可更改，值为12
    这使得MONTHS成为一个只读值。也就是说，可以在计算中使用MONTHS，可以打印MONTHS，但是	  不能更改MONTHS的值。const用起来比#define更灵活
    */
}
~~~

##  limit.h  float.h  明示常量

**C头文件limits.h和float.h分别提供了与整数类型和浮点类型大小限制相关的详细信息。每个头文件都定义了一系列供实现使用的明示常量**

**#include<limits.h>**

![image-20210104194128020](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210104194128020.png)

**#include<float.h>**

![image-20210104194142478](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210104194142478.png)

~~~C
#include<stdio.h>
#include<limits.h>       //整数限行
#include<float.h>        //浮点限行

int main(void)
{
     printf("Some number limits for this system:\n");
     printf("Biggest int: %d\n", INT_MAX);
     printf("Smallest long long: %lld\n", LLONG_MIN);
     printf("One byte = %d bits on this system.\n", CHAR_BIT);
     printf("Largest double: %e\n", DBL_MAX);
     printf("Smallest normal float: %e\n", FLT_MIN);
     printf("float precision = %d digits\n", FLT_DIG);
     printf("float epsilon = %e\n", FLT_EPSILON);
     return 0;
}

/*  -- 输出结果如下:
    Some number limits for this system:
    Biggest int: 2147483647
    Smallest long long: -9223372036854775808
    One byte = 8 bits on this system.
    Largest double: 1.797693e+308
    Smallest normal float: 1.175494e-038
    float precision = 6 digits
    float epsilon = 1.192093e-007
*/

~~~

## printf()函数说明



**printf()函数也有一个返回值，它返回打印字符的个数。如果有输出错误，printf()则返回一个负值**



**像 %d  %c 这些符号被称为 转换说明**

<img src="E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210104194610971.png" alt="image-20210104194610971" style="zoom: 200%;" />



如果编译器不支持C99,那么就对下列所有项不支持.

![image-20210104195246149](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210104195246149.png)

~~~C

#include <stdio.h>
#define PAGES -100
// blure-模糊的  Authentic(真实的) imitation(模仿) - 真实的模仿
#define BLURE "Authentic imitation!"  
int main(void)
{
     printf("*%+d*\n", PAGES);    // %+d 中的 + 表示显示数字正负符号           
     printf("*%2d*\n", PAGES);     //只用两个字段宽打印,但是打印的常量有三个,自动扩大符合打印长度.
     printf("*%10d*\n", PAGES);    //有10个,但是这是默认把数字位于右边
     printf("*%-10d*\n", PAGES);   // 这个 - 号表示数值位于左边

     printf("=========================================\n");

     const double RENT = 3852.99;
     printf("*%f*\n", RENT);
     printf("*%e*\n", RENT);
     printf("*%4.2f*\n", RENT);
     // 结果进行了四舍五入, . 左边如若实际小于,它会自动扩充.
     printf("*%3.1f*\n", RENT);
     printf("*%10.3f*\n", RENT);
     //结果进行了四舍五入,小数点左边对10代表10个位置用来答应,长度没有10个就会空着.
     printf("*%10.3E*\n", RENT);
     printf("*%+4.2f*\n", RENT);
     //%010.2f  这个10 前面的0表示以0填充多出来的
     printf("*%010.2f*\n", RENT);

     printf("=========================================\n");
     // 只给两个打印,但是打印的东西大于两个就会扩充
     printf("[%2s]\n",BLURE);
     // 给24个空位给你打印
     printf("[%24s]\n",BLURE);
     // give you 24 blank and limit five lenght to printf 
     printf("[%24.5s]\n",BLURE);
     // give you 24 blank and limit five lenght to printf ,"-" left printf. 
     printf("[%-24.5s]\n",BLURE);
     return 0;
}
~~~



## scanf（）说明

**scanf()函数返回输入正确变量得个数,遇到文件结束就返回EOF.**



**scanf()函数所用的转换说明与printf()函数几乎相同。主要的区别是，对于float类型和double类型，printf()都使用%f、%e、%E、%g和%G转换说明。而scanf()只把它们用于float类型，对于double类型时要使用l修饰符**

![image-20210107143942024](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210107143942024.png)

![image-20210107143959267](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210107143959267.png)

![image-20210107144015271](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210107144015271.png)

~~~C
#include <stdio.h>
int main(void)
{
    // "%d,%d" 那么你输入字符时也需要打中间得逗号
    scanf("%d,%d",num1,num2);
}
~~~

## printf （）and scanf（）  修饰符



~~~C
#include<stdio.h>
int main(void)
{
     // printf 中的 * 号 是待自己设置.--------------------------小重点
     unsigned width,precision;
     int number = 256;
     double weight = 242.5;
     printf("Enter a field width :\n");
     scanf("%d",&width);
     printf("the number is:%*d\n ",width,number);
     printf("Now enter a width and a percision:\n");
     scanf("%d %d",&width,&precision);
     printf("weidth = %*.*f\n",width,precision,weight);

     int n1,n2,n3;
     printf("Please enter three integers:\n");
     // * 跳过输入的类容
     scanf("%*d %*d %d",&n1,&n2,&n3);
     printf("The last integer was %d %d %d\n", n1,n2,n3);

     return 0;
}


/*、
    Enter a field width :
    3
    the number is:256
     Now enter a width and a percision:
    8 3
    weidth =  242.500
    Please enter three integers:
    2011 2012 2013 2014 2015
    The last integer was 2013 2014 2015 // 因为2011 2012 被跳过了
*/
~~~



'' -13.45e12# 0" // 注意 最前面有个空格

如果其对应的转换说明是%d，scanf()会读取3个字符（-13）并停在小数点处，小数点将被留在输入中作为下一次输入的首字符。如果其对应的转换说明是%f，scanf()会读取-13.45e12，并停在#符号处，而#将被留在输入中作为下一次输入的首字符；然后，scanf()把读取的字符序列-13.45e12转换成相应的浮点值，并储存在float类型的目标变量中。如果其对应的转换说明是%s，scanf()会读取-13.45e12#，并停在空格处，空格将被留在输入中作为下一次输入的首字符；然后，scanf()把这 10个字符的字符码储存在目标字符数组中，并在末尾加上一个空字符。如果其对应的转换说明是%c，scanf()只会读取并储存第1个字符，该例中是一个空格

空格在ASCII表中是 0 

~~~C
#include<stdio.h>
#include<string.h>  // strlen() 需要映入头文件.
#define Q "His Hamlet was funny without being vulgar."
int main(void)
{
     double a = 2.348898;
    /*
    '\41'是八进制'\041'的一种写法，转换成10进制是（4*8^1+1*8^0）就是33，
	‘\41’即 33，33是字符‘!’所对应的ASCII码。所以printf( "%c ", '\41 ')等于				printf( "%c ",33)，那么最后输出的就是字符 '! ' 。
	*/
     printf("%c%c%c\n",'H',105,'\41');

     printf("%s\nhas %d characters.\n", Q, strlen(Q));
     // %2.3e用科学计数法输出小数
     printf("Is %2.3e the same as %2.2f?\n", 1201.0, 1201.0);
    
    // 如果将Q输出想带有双引号该如何输出
    /* 用转义符号或者把 ” 作为字符输出。
    1.printf("%c%s%c \nhas %d characters.\n",'"', Q , '"',strlen(Q));
    2.printf("  \" %s \"  \n has %d characters.\n", Q , strlen(Q));
    3."  \"His Hamlet was funny without being vulgar.\"  "
    */
     return 0;
}


~~~

~~~
\40--空格  表示八进制 还有\41 --"!"等等... 自己去试试. 
~~~









## 第四章习题

**1.打印下列各项内容要分别使用什么转换说明？**

a.一个字段宽度与位数相同的十进制整数			-- %d

b.一个形如8A、字段宽度为4的十六进制整数	  --**%4x**

c.一个形如232.346、字段宽度为10的浮点数	   --%10.3f

d.一个形如2.33e+002、字段宽度为12的浮点数   --%12.2e

e.一个字段宽度为30、左对齐的字符串				 --%-30s 



a.字段宽度为15的unsigned long类型的整数								--%15ul

b.一个形如0x8a、字段宽度为4的十六进制整数							--%4x

c.一个形如2.33E+02、字段宽度为12、左对齐的浮点数				--**%-12.2E**

d.一个形如+232.346、字段宽度为10的浮点数							   --%+10.3f

e.一个字段宽度为8的字符串的前8个字符										--%8.8s



a.一个字段宽度为6、最少有4位数字的十进制整数					--**%6.4d**

b.一个在参数列表中给定字段宽度的八进制整数						--**%*o**

c.一个字段宽度为2的字符														  --%2c

d.一个形如+3.13、字段宽度等于数字中字符数的浮点数		   --**%+0.2f**

e.一个字段宽度为7、左对齐字符串中的前5个字符					--%-7.5s



**2.分别写出读取下列各输入行的scanf()语句，并声明语句中用到变量和数组。**

a.101		

~~~C
-- int a ; scanf("%d",&a);
~~~



b.22.32      8.34E−09	

~~~C
-- float b1,b2; scanf("%f %f",&b1,&b2);
~~~



c.linguini	

~~~C
 -- char c [ 10 ]; scanf("%s",&c);
~~~



d.catch 22(跳过catch)

~~~C
     char arr[10];	//我的
     scanf("%*c %*c %*c %*c %*c %s",&arr);
     printf("%s",arr);

    int value;	//网络
    scanf("%*s %d", &value);
~~~



e.catch 22 

~~~c
char zifu[20]; //网络
    int value;
    scanf("%s %d", zifu, &d);     

char arr[10];	// 我的 
     scanf("%s",&arr);
     printf("%s",arr);
~~~



#### 3.printf(“The double type is %z bytes…\n”, sizeof(double));这个语句有什么问题？如何修正？

​	答：

1.  %z是修饰符，需要后面加转换字符。如%zd  %zx

   扩充：sizeof() 是一个获取数据类型 或者 表达式长度的运算符。

~~~C
// sizeof(double) 获取double长度  sizeof(arr) -- 显示 100 byte（字节）
char arr[100];  // [] 有多少数字 就占多少字节
~~~

**4.假设要在程序中用圆括号代替花括号，以下方法是否可行？**

\#define ( {

\#define ) }

*可以，但编译器无法识别哪些该换哪些不该换，所有的()都会被替换为{}*

![image-20210107192831529](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210107192831529.png)

虽然我不知道网上说的可以是不是编译器不一样，我的编译器这样些直接报错。





# 第五章 控制流

## C语言计算指数

~~~
// 有一个函数pow（3.5，2.2）  返回3.5的2.2次幂
~~~

  dozen = +12; 编译器不会报错。但是在以前，这样做是不允许的

  整数除法最后结果如果带有小数，小数位会被截断。

## 优先级

递增运算符和递减运算符都有很高的结合优先级，只有圆括号的优先级比它们高。因此，x*y++表示的是(x)*(y++)，而不是(x+y)++。不过后者无效，因为递增和递减运算符只能影响一个变量（或者，更普遍地说，只能影响一个可修改的左值），而组合x*y本身不是可修改的左值



**C 表达式的一个最重要的特性是，每个表达式都有一个值。**



## 类型转换

类型的级别从高至低依次是long double、double、float、unsignedlong long、long long、unsigned long、long、unsigned int、int。例外的情况是，当 long 和 int 的大小相同时，unsigned int比long的级别高。之所以short和char类型没有列出，是因为它们已经被升级到int或unsigned int。

~~~C
    int x , y ,z;
    x = y = 10;
    printf("%d",x);    // 输出结果为 10 ，居然可以这样复制

    x = (int)3.8 + 3.3;  //输出6
    x = (2 + 3) * 10.5;  //输出52
    x = 3/5 * 22.0;     // 0
    y = 22.0 * 3/5;     // 13
~~~



~~~C
#include <stdio.h>
#define FORMAT "%s! C is cool!\n"
int main()
{
    printf(FORMAT,FORMAT);
    
    /*输出结果如下：
    %s! C is cool!
    ! C is cool!
     说前一个变量中的%s对于后一个变量时生效的，直接打印出来了*/ 
    
    int num = 10;
    printf(FORMAT,FORMAT);
    printf("%d\n",++num);   //11
    printf("%d\n",num++);   //11
    printf("%d\n",num--);   //12
    printf("%d\n",num);     //11
}



~~~



## 循环

~~~C
// while 出口循环
while (/* condition */)
     {
          /* code */
     }

// for循环
     for (size_t i = 0; i < count; i++)
     {
          /* code */
     }
//do while 入口循环，就它最后有个分号。
     do
     {
          /* code */
     } while (/* condition */);

// 如果scanf()成功读取一个整数，就把该数存入num并返回1
	scanf("%d",&a)==0
// 值先被存入num中，然后然后1，这个1存入status
     status　=　scanf("%ld",　&num);    

        
~~~

## 什么为真？

对C而言，表达式为真的值是1，表达式为假的值是0

### 其他 “真值”

~~~C
// 以下可见 其实数值不为0的都可算作是真（1）
int n = 3;
while(n)
{
    printf("%2d　is　true\n",　n--);
}
/* 输出结果：
        3　is　true
        2　is　true
        1　is　true
        0　is　false
*/
~~~

## 优先级 运算符

关系运算符的优先级比算术运算符（包括+和-）低，比赋值运算符高。这意味着x > y + 2和x > (y+ 2)相同，x = y > 2和x = (y > 2)相同。换言之，如果y大于2，则给x赋值1，否则赋值0。y的值不会赋给x。

关系运算符比赋值运算符的优先级高，因此，x_bigger = x > y;相当于x_bigger = (x > y);。

关系运算符之间有两种不同的优先级。

高优先级组： <    <=     >    >=

低优先级组： ==  !=

与其他大多数运算符一样，关系运算符的结合律也是从左往右。因此：

ex != wye == zee与(ex != wye) == zee相同

首先，C判断ex与wye是否相等；然后，用得出的值1或0（真或假）再与zee比较。我们并不推荐这样写，但是在这里有必要说明一下。

![image-20210108155621914](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210108155621914.png)

**+=    -=     *=     /=     %=** 

例如 X+=20；  等价于  X = X+20;	



### 逗号运算符

**逗号运算符的优先级是所有运算符中最低的** 

~~~
格式：表达式1，表达式2
~~~



逗号运算符确保操作数被顺序地处理：先计算左边的操作数，再计算右边的操作数。右操作数的类型和值作为整个表达式的结果。左操作数只是为了副作用需要而被计算，它其值会被丢弃。

~~~
x = 2.7, sqrt( 2*x )
~~~

在上述表达式中，在 sqrt（）函数被调用之前，赋值运算会首先发生。整个表达式的值是此函数的返回值。





逗号运算符的优先级是所有运算符中最低的。因此，前述例子中的表达式 x=2.7 不需要括号。然而，如果希望逗号运算的结果用于另一个赋值运算中，就需要使用括号：

```
y = ( x = 2.7, sqrt( 2*x ));  //把 5.4 的平方根赋值给 y。
```





在初始化列表或函数参数列表中的逗号是列表元素的分隔符，它不是逗号运算符。在这些地方，也可以使用逗号运算符，但必须使用括号：

```
y = sqrt( (x=2.7, 2*x) );
```


这个语句等效于前面例子的语句。逗号运算符允许将多个表达式组合成为一个表达式。这个特点使得它适用于在 for 循环头部初始化或递增多个变量，如下例所示：

```
int i; float fArray[10], val;
for ( i=0, val=0.25; i < 10; ++i, val *= 2.0 )   
	fArray[i] = val;
```



## 字符串 和 字符数组

**如果char类型的数组末尾包含一个表示字符串末尾的空字符\0，则该数组中的内容就构成了一个字符串**

~~~c
     char arr [] = "ninini";
     char arr2 [] = "mamama\0";			
     printf("%s , %s",arr,arr2);	//结果： ninini , mamama 
     return 0; 
~~~

## 带返回值函数（方法）

~~~C
double power(double n,int p)  // 返回值类型为double
{
     double pow = 1;
     int i ;
     for (int i = 1; i <= p; i++) pow*= n;  
     return pow;	// 返回double类型的pow的值
}
~~~



## 分支和跳转控制语句

~~~C
关键字：if、else、switch、continue、break、case、default、goto
if  ， else
else 如果没有花括号，else 与它上面最近的一个匹配
	1.continue、2.break、
1.跳出此次循环执行下一次循环，2.跳出包含自身的循环。

switch ， case ， default
// switch开关条件不是布尔值！！！
switch (number)  //switch(开关语句)的case不一定要求是break，也可以是return

{
    case 1: printf("That's a good choice.\n");
    	break;
    case 2: printf("That's a fair choice.\n");
    	break;
    default: printf("That's a poor choice.\n");
}
switch 我们思考一个问题!
   	/*我们每一个case里面都会加一个break或者return
   	但是如果我们不加的话,case会执行表达式锁匹配的case以及这个case下面所有的语句.*/
    
    在case后的各常量表达式的值不能相同，否则会出现错误。
    在case后，允许有多个语句，可以不用{}括起来。
    各case和default子句的先后顺序可以变动，而不会影响程序执行结果。
    default子句可以省略不用。


continue语句：
跳过此次循环 执行下一次循环.

goto：
    goto label ;
	label : statement;


运算符：&&、||、?:

函数：getchar()、putchar()、ctype.h系列

使用C的字符I/O函数：getchar()和putchar()

ctype.h头文件提供的字符分析函数系列
~~~



~~~C
#include <stdio.h>
#define SPACE ' '
int main(void)
// 	此题的putchar用法很具有新手参考性
{
     char ch;
     ch = getchar();// 读取一个字符
     while (ch != '\n')// 当一行未结束时
     {
          if (ch==SPACE)// 留下空格
          putchar(ch);// 该字符不变
     else
          putchar(ch + 1);// 改变其他字符
          ch = getchar();// 获取下一个字符
     }
     putchar(ch);// 打印换行符
     return 0;

}
~~~



##  #include<ctype . h>



![image-20210112144943937](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210112144943937.png)



 ~~~C
#include <stdio.h>
#include<ctype.h>
int main(void)
{
     char ch;
     while ((ch=getchar())!= '\n')// 当一行未结束时
     {
          if (isalpha(ch))// 留下空格
          putchar(ch+1);// 该字符不变
     else
          putchar(ch);// 改变其他字符
     }
     putchar(ch);// 打印换行符
     return 0;
}
 ~~~

##   #include<iso646.h> 

~~~C
如果在程序中包含该头文件，便可用and代替&&、or代替||、not代替!。
~~~

### 逻辑运算符      

**C保证逻辑表达式的求值顺序是从左往右。&&和||运算符都是序列点，所以程序在从一个运算对象执行到下一个运算对象之前，所有的副作用都会生效。而且，C 保证一旦发现某个元素让整个表达式无效，便立即停止求值。**



！（非） 的优先级比括号低，比乘法等运算符都高，与递增运算符优先级相同。



**&&运算符的优先级比||运算符高，但是两者的优先级都比关系运算符低，比赋值运算符高。**

~~~C
!(6 > 2 && 3 == 3)　　　// 假 ！（非） 还可以这样写 不一定就是 ！= 这样写。

if (90 <= range <= 100)　　// 千万不要这样写！

printf("Good show!\n");

/*这样写的问题是代码有语义错误，而不是语法错误，所以编译器不会捕获这样的问题（虽然可能会给出警告）。由于<=运算符的求值顺序是从左往右，所以编译器把测试表达式解释为：

(90 <= range) <= 100

子表达式90 <= range的值要么是1（为真），要么是0（为假）。这两个值都小于100，所以不管range的值是多少，整个表达式都恒为真。因此，在范围测试中要使用&&。*/
~~~

#### **范围请务必用   &&  符号；**



## 三元运算符

~~~c
x = (y < 0) ? -y : y;   // expression1 ? expression2 : expression3;
~~~





# 第六章     字符输入  /  输出 和   字符验证

### 有缓冲区和没有缓冲区

有缓冲区又分为  行缓冲 和  完全缓冲

完全缓冲就是缓冲区被填满在刷新缓冲区，缓冲区的大小取决于系统。

行缓冲就是出现换行符时刷新缓冲区。



## putchar and getchar

在C语言中，用getchar()读取文件检测到文件结尾时将返回一个特殊的值

即EOF（end of file的缩写）。

scanf()函数检测到文件结尾时也返回EOF。



#### getchar（）

通常getchar（）函数返回值在0-127之间，这些值对应标准的字符集。

如果系统能够实别扩展字符集的话，getchar（）返回值范围可以时0-255之间。

所以我们getchar（）标记文章结尾返回值定义为  -1( #define EOF (-1) )，因为不属于以上区间。

getchar()函数实际返回值的类型是int，所以它可以读取EOF字符。

EOF是一个值，标志着检测到文件结尾，并不是在文件中找得到的符号。

#### 如何使用EFO判断文件是否结尾

我们看如下代码:
我们自定义一个  '#' 来结束输入

~~~C
#include<stdio.h>
int main(void)
{
     char ch;
     while (( ch = getchar() ) != '#')
         putchar(ch);
     return 0;
}
~~~



如果你和我一样是windows系统,按下ctrl+z就可以结束输入.

~~~C
#include<stdio.h>
int main(void)
{
     int ch;
     while (( ch = getchar() ) != EOF)
         putchar(ch);
     return 0;
}
~~~





## 重定向和文件

~~~
一个程序和文件之间
$　echo_eof　<　words

$　echo_eof　>　mywords

命令与重定向顺序无关,文件名不能相同.
echo_eof < mywords > savewords  echo_eof > savewords < mywords

还有>>运算符，该运算符可以把数据添加到现有文件的末尾，而 | 运算符能把一个文件的输出连接到另一个文件的输入。
~~~



# 第七章 数组 (array)

如果flizy是一个数组

那么 array == & array [ 0 ];
每一个数组的数组名就是该数组首元素的地址.



**使用数组尽量像下面这样去使用数组长度,这样就不会因为脑袋一抽而下标越界.**

~~~C
.........
#define　SIZE　5
int　main(void)
{
    int　arr[SIZE];
    for　(i　=　0;　i　<　SIZE;　i++)
        ............
        ............
    return 0;
}
~~~



~~~C
     int bbb [10] = {1,2,3,4,5};   // 可以像这样
     
// 但是下面这个样子是错误的
/*	
	int aaa [10];
     aaa[10] = {1,2,3,4,5}; 或 aaa[] = {1,2,3,4,5};
     这样赋值是不起作用的.
 */
~~~



### 数组的下标:

数组下标必须大于 0 而且必须是整数.

~~~C
int m = 5,n = 10;
	array [5*2+1]        		//可以 
	array [sizeof(int)+1]        //可以 
     array [(int)2.5]     		//可以 
    array [m] or array[n]  //C之前不行,现在可以 
~~~





与变量一样,使用数组之前应该首先初始化它.

**当初始化不完全时,编译器会把剩余没有初始化的数组元素自动初始化为0**

~~~C
#include<stdio.h>
#define size 4
int main(void)
{
    // 直接打印未初始化的数组,内容是内存里的垃圾数据.
     int a [size];	
     printf("%2s%14s\n","i","a[i]");
     for(int i = 0 ; i < 4 ; i++)
          printf("%2d%14d\n",i,a[i]);
    // 如下面这样单独有针对性的初始化两个数组原属后,未初始化的依旧是内存哪里数据
     a[0] = 10;
     a[1] = 11;
     printf("*******************************\n");
     for(int i = 0 ; i < 4 ; i++)
          printf("%2d%14d\n",i,a[i]);
    
    // 但是如下再声明时初始化后,未被初始化的元素将自动被编译器初始化为 0
     printf("*******************************\n");   
     int b [size] = {10,11}; 
     for(int i = 0 ; i < 4 ; i++)
          printf("%2d%14d\n",i,b[i]);
     return 0;
}


// 输出结果为:

     i          a[i]
     0             8
     1             0
     2            60
     3             0
    *******************************
     0            10
     1            11
     2            60
     3             0
    *******************************
     0            10
     1            11
     2             0
     3             0
~~~



那初始化多于数组长度呢?

书上说会报错,但是我没有报错耶...(迷惑,难道是我理解错了?

以下为书中原话:

**如上所示，编译器做得很好。当初始化列表中的值少于数组元素个数时，编译器会把剩余的元素都初始化为0。也就是说，如果不初始化数组，数组元素和未初始化的普通变量一样，其中储存的都是垃圾值；但是，如果部分初始化数组，剩余的元素就会被初始化为0。**

**如果初始化列表的项数多于数组元素个数，编译器可没那么仁慈，它会毫不留情地将其视为错误。但是，没必要因此嘲笑编译器。其实，可以省略方括号中的数字，让编译器自动匹配数组大小和初始化列表中的项数**



我的C语言环境是:

 **MinGW-w64**(编译器)  +  vscode(编辑器)  

~~~C
#include<stdio.h>
int main(void)
{
     int array[3] = {1,2,3,4,5};
     for(int i = 0 ; i < 3 ; i++)
          printf("%2d%14d\n",i,array[i]);
     return 0;
}
/*

输出结果如下:
 0             1
 1             2
 2             3
 */
~~~



### 指定初始化器

~~~C
int arr[6] = {0,0,0,0,0,212}; // 传统的语法
int arr[6] = {[5] = 212}; // 把arr[5]初始化为212
~~~

~~~C
#include<stdio.h>
int main(void)
{
     int array[5] = {1,2,3,[2]=13};
     for(int i = 0 ; i < 5 ; i++)
          printf("%2d%14d\n",i,array[i]);
     return 0;
}

/*
输出结果:
     0             1
     1             2
     2            13    //原本是3 但是被后面这样
     3             0
     4             0
*/
~~~

我们再看看下面代码:

当用初始化器时给第几个数组元素初始化后, 初始化列表中其后面赋值将从这个被初始化器复制的元素下标开始再依次往后赋值.

~~~C
#include<stdio.h>
int main(void)
{
     int array[10] = {[4] =  40,5,6,7,[2]=13};
     for(int i = 0 ; i < 10 ; i++)
          printf("%2d%14d\n",i,array[i]);
     return 0;
}

/*
     0             0
     1             0
     2            13
     3             0
     4            40  
     5             5
     6             6
     7             7
     8             0
     9             0
*/
~~~



## 一维数组 :



~~~C
数据类型 数组名 [数组长度]  //其中数组长度要大于0
    double balance [5];   // 现在balance是一个可用数组 , 长度为 5
	// 声明数组元素
	double apple[3] = {1,2.5,3};
	// 不填确定长度的话数组长度就会默认是元素个数.
	double banana[] = {1,2.2,3.3};

   
~~~

### 创建只读数组

一但声明为 const 就不能再给这个数组赋值.

~~~C
const int days[MONTHS] = {1,2,3,4,5,6,7,8,9,10,11,12};
~~~



~~~C
// 下面这样是可以的
int lenght = 10;
int array[lenght];

// 但是这样却有问题,试了试.
int lenght;
scanf("%d",&lenght);
int array[lenght];

所以为了能够应付接收长度作为数组长度
    // 就需要使用到malloc()函数来动态分配内存
    int *array;
	array = (int*)malloc(lenght * sizeof(int));
~~~







## 二维数组

**C语言中二维数组作为参数时必须至少指定第二维长度**

1、可以同时指定第一维和第二维的长度；

2、可以只指定第二维的长度；

3、不可以只指定第一维的长度；

4、不可以第一维和第二维的长度都不指定。

综上所述，至少指定第二维的长度。

原因：一维数组存放在一段连续的内存中，二维数组的维度是逻辑上的概念，而实际上，二维数组在内存中也是一段连续的空间，与一维数组相同。



~~~C
int array [3] [5] ; // 有三个int类型数组,这三个数组长度都是5

// 初始化数组
int a[3][4]={
     {0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
     {4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
     {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
};

// 这样写也可以,但是不如上面那样美观,不推荐.
int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

~~~



C语言中的多维数组不允许包含长度不一的数组
但是创建一个指针数组,然后指针数组里的每一个指针都指向一个数组,这样就可以相当于一个多维数组,并且里面这个多维数组里面的数组的长度可以不一样.

~~~C
int* Array[3];  // 创建指针数组.

int array01 = {1,3,5,7,9};
int array02 = {2,4,6,8,10,12,14,16,18,20};
int array03 = {2,4,6,8,10,12,14,16,18,20,11,13,15,17,19};

Array[0] = array01;
Array[1] = array02;
Array[2] = array03;


#include<stdio.h>
int main(void)
{
     int* Array[3];  // 创建指针数组.

     int array01 = {1,3,5,7,9};
     int array02 = {2,4,6,8,10,12,14,16,18,20};
     int array03 = {22,4,6,8,10,12,14,16,18,20,11,13,15,17,19};

     Array[0] = array01;
     Array[1] = array02;
     Array[2] = array03;

     printf("Array[0] = array01 :%d\n",Array[0]);
     printf("Array[1] = array02 :%d\n",Array[1]);
     printf("Array[2] = array03 :%d\n",Array[2]);

     return 0;
}
~~~



## 变长数组

**变长数组必须是自动存储类别，这意味着无论在函数中声明还是作为函数形参声明，都不能使用static或extern存储类别说明符**

**double sales[regions] [quarters];**

**int sum2d(int rows, int cols, int ar[rows][cols]);**



## 复合字面量

因为复合字面量是匿名的,所以必须**在创建的同时在使用它**;

~~~C
int array[3] = {1,2,3};   // 正常数组声明

(int [3]) = {1,2,3};  // 复合字面量 >> 相当于数组的常量  int [3]>>即是复合字面量的类型名

// 初始化复合字面量同样可以省略自定义长度 计算机会自动计算
(double []) = {1.1,2.2,3.3,4.4,5.5};   // 会自动自己算长度 

// 指针 指向复合字面量
int * pt1;
pt1 = (int [2]) {10, 20};

// 把复合字面量做参数,传给带有匹配形式参数的函数
int　sum(const　int　ar[],　int　n);
...
int total3;
total3 = sum((int []){4,4,4,5,5,5}, 6);
// 好处是把信息传入函数前,不用先创建数组.
~~~





## enum(枚举)

枚举是 C 语言中的一种基本数据类型

枚举一般被定义为 int  或者  unsigned int 类型 , 所以不能定义字符 浮点等类型.

枚举里面用逗号隔开,大括号后面要打分号结尾.

~~~C
 //定义第一个变量后,后面的变量被赋予的值都是在前一个变量的基础上 +1
 // 如果不定义第一个变量的值,就会默认值为 0 
 enum CHARATER
 { 
     A = 1,B,C,D,E,F,G 
 };

// 定义枚举的同时定义枚举变量
 enum CHARATER
 { 
     A = 1,B,C,D,E,F,G 
 }letter;
// 也可省略枚举名
 enum
 { 
     A = 1,B,C,D,E,F,G 
 }letter;
~~~

见如下代码,可知可以直接对枚举成员调用:

~~~C
#include <stdio.h>
    //定义第一个变量后,后面的变量被赋予的值都是在前一个变量的基础上 +1
    // 如果不定义第一个变量的值,就会默认值为 0 
    enum CHARATER
    { 
        A1 = 1,B1,C1,D1,E1,F1,G1 
    };
    // 定义枚举的同时定义枚举变量
    enum CHARATER2
    { 
        A2 = 11,B2,C2,D2,E2,F2,G2 
    }letter_2;
    // 也可省略枚举名
    enum
    { 
        A3 = 21,B3,C3,D3,E3,F3,G3
    }letter_3;

int main()
{
    // 创建一个枚举,在main方法里面声明他的变量,
    // 可以创建一个CHARATER的变量用来接收枚举元素的值.
    enum CHARATER letter;
    letter = C1;

//  不声明 一样可以直接输出
//    enum CHARATER2 letter_2;
    letter_2 = D2;
    
    // 枚举名不定义 一样可以直接用
    letter_3 = D3;

    printf("******************************************************\n");
    printf("letter is %d %d\n",D1,C1); 
    printf("******************************************************\n");
    printf("letter_2 is %d \n",letter_2); 
    printf("******************************************************\n");
    printf("letter_3 is %d \n",letter_3); 
    return 0;
}
~~~

###  遍历枚举

正因为连续 我们用For循环可以遍历它

~~~c
// 遍历 CHARATER 这个枚举 
for (letter = A1; letter < G1; letter++)
        printf("%d",letter);
~~~

但是像如下这种没规律的枚举则不可遍历:

~~~C
enum No_regular
{
    n_regular_one,			// 默认为 0
    n_regular_three = 33,
    n_regular_eleven 		// 值是34 默认前位加1
};
~~~

### 对枚举赋值

既然我们说过枚举是一种变量类型,那么当然我们给枚举赋值时需要转换类型

~~~c
#include <stdio.h>
    enum No_regular
    {
        n_regular_one,
        n_regular_three,
        n_regular_eleven
    };
int main()
{
    printf("没赋值之前:%d\n",n_regular_eleven);
    int a = 10;
/*
	下面这样直接赋值是不对的!!!
	n_regular_eleven = a;
*/    
    
    
// 显得声明这个枚举和他的变量
    enum No_regular n_regular_eleven;
    n_regular_eleven = (enum No_regular) a;
    
    printf("赋值之后:%d\n",n_regular_eleven);
    return 0;
}
~~~



对于 C 语言而言，不能把整个数组作为参数传递给函数，但是可以传递数组的地址。然后函数可以使用传入的地址操控原始数组。如果函数没有修改原始数组的意图，应在声明函数的形式参数时使用关键字const。在被调函数中可以使用数组表示法或指针表示法，无论用哪种表示法，实际上使用的都是指针变量。

# 第八章 指针(pointer)

& * 这两个都表示一元
&   >>  地址与那算符



flizny 是一个数组

flizny == &flizny[0]; // 数组名是该数组首元素的地址
转换说明%p通常以十六进制显示指针的值

在指针前面使用*运算符可以得到该指针所指向对象的值。

~~~C
int　urn[5]　=　{　100,　200,　300,　400,　500　};
ptr1 = urn;　　　　　　　// 把一个地址赋给指针
ptr2 = &urn[2];　　　　 // 把一个地址赋给指针
~~~



至于C语言，ar[i]和*(ar+i)这两个表达式都是等价的。无论ar是数组名还是指针变量，这两个表达式都没问题。但是，只有当ar是指针变量时，才能使用ar++这样的表达式。

~~~C
dates + 2 == &date[2]　　　 // 相同的地址
    
*(dates + 2) == dates[2]　 // 相同的值
    
/*

*(dates + 2):到内存dates的地址,向后移动2个单检索存储在哪的数据的值.

*/
~~~

一个指针未被初始化时,铁定不要使用.
当一个指针不知道赋给它何值时,那么赋 null 值 是个好习惯.

~~~
  int  *ptr = NULL;
~~~



下面就是严重的错误例子:

~~~C
int * pt;// 未初始化的指针
*pt = 5;　　　// 严重的错误
~~~

~~~C
    int i = 3;
    int *j = &i;  //*j表示一个指针变量, 将变量i的地址赋给它
    printf("*j = %d\n", *j);  //此时*j完全等同于i
    printf("j = %d\n", j);    //j里面存储的是变量i的地址
~~~

~~~C
有效语句　　　　　　　　　　无效语句
ptr1++;　　　　　　　　　　　　 urn++;
ptr2　=　ptr1　+　2;　　　　　 ptr2　=　ptr2　+　ptr1;
ptr2　=　urn　+　1;　　　　　　 ptr2　=　urn　*　ptr1;
~~~

指针数组

函数指针

指向指针的指针数组

指向函数的指针数组





### 函数 数组 和 指针

在声明一个要使用数组作为参数的函数时,以下四种方法都可以:

~~~C
int sum(int *ar, int n);
int sum(int *, int);
int　sum(int　ar[],　int　n);
int　sum(int　[],　int);
~~~

但是,在定义函数的时候,不能省略参数名:

~~~C
int sum(int *ar, int n)
{
	// 其他代码已省略
}

int　sum(int　ar[],　int　n);
{
	//其他代码已省略
}
~~~



~~~C
#include<stdio.h>
#define SIZE 10
// 声明时省略参数名
int SUM(int *start,int *end );   

int main(void)
{
     int marbles[SIZE] = { 30, 10, 5, 39, 4, 16, 19, 26, 31, 20};
     long answer;
     answer = SUM(marbles,marbles + SIZE);
     printf("The　total　number　of　marbles　is　%ld.\n", answer);
     return 0;
}

int SUM(int *start,int *end )
{
     int total = 0;
     while(start < end){
          total = total + *start;  //数组元素的总和
          start++;	//指向下一个元素
     }
     return total;
}
~~~



指针与整数相加：

可以使用+运算符把指针与整数相加，或整数与指针相加。
无论哪种情况，整数都会和指针所指向类型的大小（以字节为单位）相乘，然后把结果与初始地址相加。
因此 p1 + 4与&urn[4]等价。如果相加的结果超出了初始指针指向的数组范围，计算结果则是未定义的。
除非正好超过数组末尾第一个位置，C保证该指针有效。

同一个int类型的数组中两个元素指针之间的差值表示这两个元素之间相隔几个int

**C 只能保证指向数组任意元素的指针和指向数组后面第 1 个位置的指针有效。**



**使用关系运算符可以比较两个指针的值，前提是两个指针都指向相同类型的对象。**
**注意，这里的减法有两种。可以用一个指针减去另一个指针得到一个整数，或者用一个指针减去一个整数得到另一个指针。**

~~~C
// total = total + *start++;  先把原值用来运算 在指向下一个元素
// total = total + *++start;  先指向下一个元素 在把值用来运算
// total = total + (*start)++; 先指向值用来运算,再再原来的值上加一
// *(start++) 和这个  *start++  效果一样的 
~~~



## 保护数组中的数据

**如果函数的意图不是修改数组中的数据内容，那么在函数原型和函数定义中声明形式参数时应使用关键字const**

这个const并不是表示把数组定义为常量,而是指函数在处理数组时会将这个数组视为常量.这样使用const可以保护数组的数据不被修改，就像按值传递可以保护基本数据类型的原始值不被改变一样。

~~~C
int sum(const int ar[], int n); /* 函数原型 */
int sum(const int ar[], int n) /* 函数定义 */
{
    int i;
    int total = 0;
    for(i=0;i<n;i++)
    	total += ar[i];
    return total;
}
~~~

### const 运用

虽然用#define指令可以创建类似功能的符号常量，
但是const的用法更加灵活。可以创建const数组、const指针和指向const的指针。

~~~C
/*第2行代码把pd指向的double类型的值声明为const，这表明不能使用pd来更改它所指向的值*/

double　rates[5]　=　{88.99,　100.12,　59.45,　183.11,　340.5};
const double * pd = rates;　　 // pd指向数组的首元素
// 虽然pd不可改变其指向的指,但是可以让它指向别处
// 如 : pd++; 表示指向rates[1]  -- 没问题

~~~




const关键字初始化了的指针.可以给他赋值 const关键字声明过的 数组,也可以给它赋值普通(没用const声明)数组元素,都是表示这个const声明的指针它不可改变.
但是 普通的指针就只能够接收普通的数组,变量之类的.

~~~C
double　rates[5]　=　{88.99,　100.12,　59.45,　183.11,　340.5};

const　double　locked[4]　=　{0.08,　0.075,　0.0725,　0.07};

const double * pc = rates; // 有效

pc = locked;　　　　　　　　 //有效

pc = &rates[3];　　　　　　　//有效

// 然而，只能把非const数据的地址赋给普通指针：

double　rates[5]　=　{88.99,　100.12,　59.45,　183.11,　340.5};

const　double　locked[4]　=　{0.08,　0.075,　0.0725,　0.07};

double * pnc = rates;　// 有效

pnc = locked;　　　　　 // 无效

pnc = &rates[3];　　　　// 有效
~~~

#### const关键字可以声明并初始化一个不能指向别处的指针

~~~
double * const pc = rates;
~~~


表示只能指向这个rates数组(也就是数组第一个rates[0]),不可以更改成其他地址,但是可以更改rates[0]的值.

~~~C
double　rates[5] = {88.99,　100.12,　59.45};
double * const pc = rates;// pc指向数组的开始
pc = &rates[2];// 不允许，因为该指针不能指向别处
*pc = 92.99;// 没问题 -- 更改rates[0]的值
~~~



那么 你既希望一个指针只指向一个地址,并且还不能够修改这个指向地址的值,那么可以用const声明两次.

~~~C
double　rates[5]　=　{88.99,　100.12,　59.45,　183.11};
const double * const pc = rates;
pc = &rates[2];　　//不允许赋值其他地址
*pc = 92.99;　　　//不允许修改其地址上的数据.
~~~





## 指针和多维指针

处理多维数组时,我们需要用到多维指针.

int zippo[4] [2]; /* 内含int数组的数组 */
在本例中，zippo的首元素是一个内含两个int值的数组，所以zippo是这个内含两个int值的数组的地址。

因为zippo是数组首元素的地址，所以zippo的值和&zippo[0]的值相同。而zippo[0]本身是一个内含两个整数的数组，所以zippo[0]的值和它首元素（一个整数）的地址（即&zippo[0] [0]的值）相同。简而言之，zippo[0]是一个占用一个int大小对象的地址，而zippo是一个占用两个int大小对象的地址

~~~C
#include<stdio.h>

int main(void)
{
     int array[3][2] = {
          {1,2},    // -- array[0]
          {3,4},
          {5,6}
     };
     printf("array = %p,array+1 = %p\n",array,array+1);
     printf("array[0] = %p,array[0]+1 = %p\n",array[0],array[0]+1);
     printf("*array = %p,*array+1 = %p\n",*array,*array+1);
     printf("array[0][0] = %d\n",array[0][0]);
     printf("*array[0] = %d\n",*array[0]);
     printf("**array = %d\n",**array);
     printf("array[2][1] = %d\n",array[2][1]);
     printf("*(*(array+2)+1) = %d \n",*(*(array+2)+1));

     return 0;
}
~~~



## 指向多维数组的指针

如何声明一个指针变量pz指向一个二维数组（如，zippo）？在编写处理类似zippo这样的二维数组时会用到这样的指针。把指针声明为指向int的类型还不够。因为指向int只能与zippo[0]的类型匹配，说明该指针指向一个int类型的值。但是zippo是它首元素的地址，该元素是一个内含两个int类型值的一维数组。因此，pz必须指向一个内含两个int类型值的数组，而不是指向一个int类型值，其声明如下：

int (* pz)[2];　　// pz指向一个内含两个int类型值的数组

以上代码把pz声明为指向一个数组的指针，该数组内含两个int类型值。为什么要在声明中使用圆括号？因为[]的优先级高于*。考虑下面的声明：

int * pax[2];　　
 // pax是一个内含两个指针元素的数组，每个元素都指向int的指针

由于[]优先级高，先与pax结合，所以pax成为一个内含两个元素的数组。然后*表示pax数组内含两个指针。最后，int表示pax数组中的指针都指向int类型的值。因此，这行代码声明了两个指向int的指针。而前面有圆括号的版本，*先与pz结合，因此声明的是一个指向数组（内含两个int类型的值）的指针。程序清单10.16演示了如何使用指向二维数组的指针。

~~~C
#include<stdio.h>

int main(void)
{

     int array[4][2] = {
          {1,2},    // -- array[0]
          {3,4},
          {5,6},
          {7,8}
     };
     int(*pz)[2];
     pz=array;
     printf("pz=%p,pz+1=%p\n",pz,pz+1);
     printf("pz[0]=%p,pz[0]+1=%p\n",pz[0],pz[0]+1);
     printf("　*pz = %p,　 *pz + 1 = %p\n",*pz, *pz + 1);
     printf("pz[0][0]　=　%d\n",pz[0][0]);
     printf("　*pz[0] = %d\n", *pz[0]);
     printf("　 **pz = %d\n", **pz);
     printf("　pz[2][1]　=　%d\n",pz[2][1]);
     printf("*(*(pz+2) + 1) = %d\n", *(*(pz + 2) + 1));
     return 0;

}
~~~



~~~
zippo[m][n] == *(*(zippo + m) + n)
pz[m][n] == *(*(pz + m) + n)
~~~



## 数组的兼容性 

创建一个指针时,一定要明确这个指针的指向.

~~~C
指针之间的赋值比数值类型之间的赋值要严格。例如，不用类型转换就可以把 int 类型的值赋给double类型的变量，但是两个类型的指针不能这样做。

int　n　=　5;
double　x;
int * p1 = &n;
double * pd = &x;
x = n;　　　　　　　// 隐式类型转换
pd = p1;　　　　　　// 编译时错误

更复杂的类型也是如此。假设有如下声明：
int * pt;
int (*pa)[3];
int　ar1[2][3];
int　ar2[3][2];
int **p2; // 一个指向指针的指针

有如下的语句：
pt = &ar1[0][0];　// 都是指向int的指针
pt = ar1[0];　　　 // 都是指向int的指针
pt = ar1;　　　　　 // 无效
pa = ar1;　　　　　 // 都是指向内含3个int类型元素数组的指针
pa = ar2;　　　　　 // 无效
p2 = &pt;　　　　 // both pointer-to-int *
*p2 = ar2[0];　　 // 可以 都是指向int的指针

/*下面式子无效,因为ar2是指向数组的指针,p2时指向指针的指针,但是它指向 int 类型,为不是数组类型*/
p2 = ar2;



*********************************************************


int　x　=　20;
const　int　y　=　23;
int * p1 = &x;
const int * p2 = &y;
const int ** pp2;
p1 = p2;　　　 // 不安全 -- 把const指针赋给非const指针
p2 = p1;　　　 // 有效 -- 把非const指针赋给const指针
pp2 = &p1;　　// 不安全 –- 嵌套指针类型赋值
前面提到过，把const指针赋给非const指针不安全，因为这样可以使用新的指针改变const指针指向的数据。编译器在编译代码时，可能会给出警告，执行这样的代码是未定义的。但是把非const指针赋给const指针没问题，前提是只进行一级解引用：

p2 = p1; // 有效 -- 把非const指针赋给const指针

但是进行两级解引用时，这样的赋值也不安全，例如，考虑下面的代码：
const int **pp2;
int *p1;
const　int　n　=　13;
pp2 = &p1;　　// 允许，但是这导致const限定符失效（根据第1行代码，不能通过*pp2修改它所指向的内容）
*pp2 = &n;　　// 有效，两者都声明为const，但是这将导致p1指向n（*pp2已被修改）
*p1 = 10;//有效，但是这将改变n的值（但是根据第3行代码，不能修改n的值）

/*
发生了什么？如前所示，标准规定了通过非const指针更改const数据是未定义的。例如，在Terminal中（OS X对底层UNIX系统的访问）使用gcc编译包含以上代码的小程序，导致n最终的值是13，但是在相同系统下使用clang来编译，n最终的值是10。两个编译器都给出指针类型不兼容的警告。当然，可以忽略这些警告，但是最好不要相信该程序运行的结果，这些结果都是未定义的
*/

const int x = 10;
// int *p1 = &x 错误,只能把非const数据地址赋值给普通指针
const int *p1 = &x;
int *p2 = p1;
/*
1. 但是 const指针接收const 数据地址却可以赋值给普通指针,如果这样做的话会非常不安全,因为可以普通指针就变得可以修改用const 声明的数据的值了
 */




~~~



##  变长数组

~~~C
int sum2d(int ar[rows][cols], int rows, int cols); // 无效的顺序

C99/C11标准规定，可以省略原型中的形参名，但是在这种情况下，必须用星号来代替省略的维度：

int sum2d(int, int, int ar[*][*]); // ar是一个变长数组（VLA），省略了维度形参名



#include<stdio.h>
#define ROWS 3
#define COLS 4
// 变长数组 声明方式,先声明变量参数,再声明数组.
int sum(int row,int clos , int ar[row][clos]);
/*
int sum(int ar[rows][cols], int rows, int cols); // 无效的顺序

可以省略参数,在定义函数的时候再写
int sum(int, int, int ar[*][*]);
*/
int main(void)
{
     int i,j;
     int rs = 3;
     int cs = 10;
     int junk[ROWS][COLS] = {
          {2,4,6,8},
          {3,5,7,9},
          {12,10,8,6}
     };

     int morejunk[ROWS-1][COLS+2] = {
          {20,30,40,50,60,70},
          {5,6,7,8,9,10}
     };
     
     int varr[rs][cs];  //变长数组

     for(i = 0;i<rs;i++){  //给varr数组初始化
          for(j=0;j<cs;j++)
               varr[i][j] = i*j+j;
     }


     printf("3 X 4  array\n");
     printf("Sum　of　all　elements　=　%d\n",sum(ROWS,COLS,junk));
     printf("2x6　array\n");
     printf("Sum　of　all　elements　=　%d\n",sum(ROWS-1,COLS+2,morejunk));
     printf("3x10　VLA\n");
     printf("Sum　of　all　elements　=　%d\n",sum(rs,cs,varr));

     
     return 0;
}

int sum(int row,int clos , int ar[row][clos])
{
     int total = 0;
     for(int i = 0;i<row;i++){  //给varr数组初始化
          for(int j=0;j<clos;j++)
               total += ar[i][j];
     }
     return total;
}

~~~



## 复合字面量

假如要给一个int类型的函数传一个值,这个值可以是一个变量,也可以是一个常量,但是如果传数组,你会发现没有常量的数组,所以就出现了复合字面量.

~~~
int diva[2] = {10, 20};  //普通数组声明
(int [2]){10, 20}　　　// 复合字面量
(int []){50, 20, 90} // 和数组一样,可以省略[]中的长度.
~~~

复合字面量必须在创建的同时使用它,不能创建之后再使用
与数组名类似,复合字面量的类型名也带表首元素地址.

~~~
int * pt1;
pt1 = (int [2]) {10, 20};
~~~

~~~C

#include　<stdio.h>
#define　COLS　4
int　sum2d(const　int　ar[][COLS],　int　rows);
int　sum(const　int　ar[],　int　n);
int　main(void)
{
    int　total1,　total2,　total3;
    int * pt1;
    int(*pt2)[COLS];
    pt1　=　(int[2])　{　10,　20　};
    pt2　=　(int[2][COLS])　{　{1,　2,　3,　-9},　{　4,　5,　6,　-8　}　};
    total1　=　sum(pt1,　2);
    total2　=　sum2d(pt2,　2);
    total3　=　sum((int　[]){　4,　4,　4,　5,　5,　5　},　6);
    printf("total1　=　%d\n",　total1);
    printf("total2　=　%d\n",　total2);
    printf("total3　=　%d\n",　total3);
    return　0;
}
  
int　sum(const　int　ar　[],　int　n)
{
    int　i;
    int　total　=　0;
    for　(i　=　0;　i　<　n;　i++)
    total　+=　ar[i];
    return　total;
}

int　sum2d(const　int　ar　[][COLS],　int　rows)
{
    int　r;
    int　c;
    int　tot　=　0;
    for　(r　=　0;　r　<　rows;　r++)
    for　(c　=　0;　c　<　COLS;　c++)
    tot　+=　ar[r][c];
    return　tot;
}
~~~





~~~c
#include<stdio.h>

void str_print(const char * str){
    puts(str);
}

void sum(const int arr[]){
    int total=0;
    for(int i=0;i<6;i++) total+=arr[i];
    printf("%d\n",total);
}

int main(){
    /*如果不使用复合字面量，则需要以下代码
    char * str1="良い世、来いよ!";
    int arr1[]={1,1,4,5,1,4};
    str_print(str1);
    sum(arr1);
    */

   //使用复合字面量，代码如下：
    str_print((char *)"良い世、来いよ!"); 
    sum((int []){1,1,4,5,1,4}); 
    system("pause");
    return 0;
}
~~~



复合字面量是提供只临时需要的值的一种手段。复合字面量具有块作用域，也就是说，一旦离开定义复合字面量的块，程序将无法保证该字面量是否存在



## 指针复习题 和编程题

~~~C
4.在下面的代码中，*ptr和*(ptr + 2)的值分别是什么？

a.
int *ptr;
//第一个为{12,14} 第二个数组为{16,0}
int　torf[2][2]={12,14,16}; 
ptr　=　torf[0];
// *ptr : 12      *(ptr + 2) : 16


b.
int * ptr;
//声明数组其中元素后,其他元素默认变为0
//第一个为{12,0} 第二个数组为{14,16}
int　fort[2][2]　=　{{12},{14,16}};
ptr　=　fort[0];
//           *ptr : 12      *(ptr + 2) : 14


//**********************************分割线*******************************//

5.在下面的代码中，**ptr和**(ptr + 1)的值分别是什么？

a.
//指向含有两个int类型元素的数组指针
int　(*ptr)[2]; 
//第一个为{12,14} 第二个数组为{16,0}
int　torf[2][2]　=　{12,14,16};
ptr　=　torf;
//          **ptr: 12         **(ptr + 1):16

b.

int　(*ptr)[2];
//第一个为{12,0} 第二个数组为{14,16}
int　fort[2][2]　=　{　{12},　{14,16}　};
ptr　=　fort;
//          **ptr: 12         **(ptr + 1): 14

//**********************************分割线*******************************//
6.假设有下面的声明：

Suppose you have the following declaration: int grid[30][100];.
a. Express the address of grid[22][56] one way. 
b. Express the address of grid[22][0] two ways. 
c. Express the address of grid[0][0] three ways. 
    
a. 用1种写法表示gird[22][56]的地址
	&grid[22][56]
b. 用2种写法表示gird[22][0]的地址
	&gird[22][0], 
	gird[22]		
c. 用3种写法表示gird[0][0]的地址
	&gird[0][0]
	(int *) gird			//注意看下面字，强制转换为指向int类型的指针，
								//gird[0][0]也指向int类型
     gird[0]
        
注意这里fird是内含100个元素的gird[0]数组的地址，这两个地址的值，相同但是类型不同，使用强制类型转换将其转换成相同的类型
        
//**********************************分割线*******************************//

7. Create an appropriate declaration for each of the following variables: 
a. digits is an array of 10 ints .   					-- int digits[10];
b. rates is an array of six floats . 					-- float rates[6];
c. mat is an array of three arrays of five integers. 	  -- int mat [3][5];
d. psa is an array of 20 pointers to char . 			 -- char* psa[20]
e. pstr is a pointer to an array of 20 chars . 			 -- char (*pstr)[20]
    
//**********************************分割线*******************************//
8.
a.声明一个内含6个int类型值的数组，并初始化各元素为1、2、4、8、16、32
	int array[6] = {1,2,4,8,16,32};
b.用数组表示法表示a声明的数组的第3个元素（其值为4）
	array[2];
c.假设编译器支持C99/C11标准，声明一个内含100个int类型值的数组，并初始化最后一个元素为-1，其他元素不考虑
    int array[100] = {[99=-1]}; 
d.假设编译器支持C99/C11标准，声明一个内含100个int类型值的数组，并初始化下标为5、10、11、12、3的元素为101，其他元素不考虑    
    int array[100] = {[5=101],[11=101],[12=101],[10 = 101],[3=101]};

//**********************************分割线*******************************//
9.内含10个元素的数组下标范围是什么？  是 (0-9)
    
//**********************************分割线*******************************//
10.假设有下面的声明：
float rootbeer[10], things[10][5], *pf, value = 2.2;
int i = 3;
判断以下各项是否有效：
a.rootbeer[2] = value;			//有效
b. scanf("%f", &rootbeer ); 		 无效	应该指定一个下标元素的
c. rootbeer = value; 				无效	应该指定一个下标元素的
d. printf("%f", rootbeer); 			 无效	应该指定一个下标元素的
e.things[4][4] = rootbeer[3];	//有效
f.things[5] = rootbeer;			//无效
g.pf = value;				   //无效 
h.pf = rootbeer;			   // 有效
//**********************************分割线*******************************//
11. 太简单 不写了
    
12.下面声明了3个数组：
double trots[20];
short clops[10][30];
long shots[5][10][15];

  /*  
  这题启示我们多维数组作为参数,数组中一定要有二维长度,因为C语言中将数组作为参数本质是把数组起始的一个元素或者自己将要操作数组的哪一部分段里的第一个元素的地址传过去,然后直接程序指向该数组直接对原数组做手脚.然后既然当作参数是作为数组指针,那么就是指向这个多维数组的第一个数组,那么就需要这个多维数组第一个数组的长度,也就是为啥多维数组的第二长度必须要有.因为这个多维数组中哥哥数组的寻址,都是基于这个第一个指向的数组来的.
 
 然后再定义一个变量是用来传入行数的,也就是代表这个多维数组有几个数组.
  
  */


a.分别以传统方式和以变长数组为参数的方式编写处理trots数组的void函数原型和函数调用
    
traditional:   	
void function1 (double *p,int lenght);
function1(trots,20);
new mode : 
void function1 (int row,double arr[row]); 
function1 (20,trots);
    
b.分别以传统方式和以变长数组为参数的方式编写处理clops数组的void函数原型和函数调用
    
traditional:   	
//多维数组作为参数,必须要有第二维度的长度
void function2 (short arr[][30],int row); 
function2(clops,10);

new mode : 
void function2(int row, int col, short arr[row][col]);
function2(10, 30, clops);


    
c.分别以传统方式和以变长数组为参数的方式编写处理shots数组的void函数原型和函数调用
    
traditional:   	
//多维数组作为参数,必须要有第二维度的长度,所以定义变量n.
void function3(long * [][10][15], int row);
function3(shots, 5);
new mode : 
void function3(int x, int y, int z, long arr[x][y][z]);
function3(5, 10, 15, shots)；


//*********************************************************//    
    
    
    
13.下面有两个函数原型：
void show(const double ar[], int n);　// n是数组元素的个数
void show2(const double ar2[][3], int n);// n是二维数组的行数
a.编写一个函数调用，把一个内含8、3、9和2的复合字面量传递给show()函数。
    show((double []) {8,3,9,2});
	show((double [4]) {8,3,9,2});
b.编写一个函数调用，把一个2行3列的复合字面量（8、3、9作为第1行，5、4、1作为第2行）传递给show2()函数。
    show2((double [][3]){{8,3,9},{5,4,1});
    show2( (int [2][3]) { {8, 3, 9}, {5, 4, 1} } );
~~~











# 第九章 字符串 和字符串函数

~~~
1.C语言中什么叫做字符串?
	字符串是以空字符（\0）结尾的char类型数组
2.字符串函数如何使用?
3.字符串和字符数组有什么区别?

~~~

## 关于字符串

函数：

gets()、fgets()、puts()、fputs()、 gets_s()、

strcat()、strncat()、strcmp()、strncmp()、strcpy()、strncpy()、sprintf()、strchr() 





如果不用修改字符串,一般就不要用指针指向字符字面量.



char　greeting[50]　=　"Hello,　and""　how　are"　"　you"
"　today!";
与下面的代码等价：
char greeting[50] = "Hello, and how are you today!";

### 使用刷个双引号

如果要在字符串内部使用双引号，必须在双引号前面加上一个反斜杠（\）：
printf("\"Run, Spot, run!\" exclaimed Dick.\n");

~~~C
printf(%c\n,*"space farers"); 
// 表示打印出这个字符串地址上的值,也就是首字母s

const char pets[12] = "nice cat."  // 多于位置自动初始化为 \0
const char m2[] = "If you can't think of anything, fake it."; //这样自动计算大小
~~~



![img](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\0EI%JTI3V_NC7RE_8OIOXBF.png)



**字符数组名和其他数组名一样，是该数组首元素的地址。因此，假设有下面的初始化：**

**char car[10] = "Tata";**

**那么，以下表达式都为真：**

**car == &car[0]、*car == 'T'、*(car+1) == car[1] == 'a'。**

**const char * pt1 = "Something is pointing at me.";**
**该声明和下面的声明几乎相同：**
**const char ar1[] = "Something is pointing at me."**

~~~C
#include <stdio.h>
#define SLEN 40
#define LIM 5
int main(void)
{
     const char *mytalents[LIM] = {
          "Adding numbers swiftly",
          "Multiplying accurately",
          "Stashing data",
          "Following instructions to the letter",
          "Understanding the C language"
     };

     char yourtalents[LIM][SLEN] = {
     "Walking　in　a　straight　line",
     "Sleeping",
     "Watching　television",
     "Mailing　letters",
     "Reading　email"
     };
     
     int i;
     puts("Let's　compare　talents.");
     printf("%-36s %-25s\n","My　Talents","Your　Talents");
     for(i=0;i<LIM;i++)
     printf("%-36s　 %-25s\n",mytalents[i],yourtalents[i]);
     printf("\nsizeof　mytalents:　%zd,　sizeof　yourtalents:　%zd\n",sizeof(mytalents),sizeof(yourtalents));
     return 0;
}

/*
mytalents数组是一个内含5个指针的数组，在我们的系统中共占用40字节。而yourtalents是一个内含5个数组的数组，每个数组内含40个char类型的值，共占用200字节。所以，虽然mytalents[0]和yourtalents[0]都分别表示一个字符串，但mytalents和yourtalents的类型并不相同。
*/
~~~

![img](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\(5H2]`_J`2SKNU(G5]1)RRS.png)

## 字符串输出和输入

~~~
char *name;          //这个指针并没有初始化
scanf("%s", name);   //这样使用未初始化的指针式错误的

简单得方法就是声明时提前定义长度
char name [10];
scanf("%s", name);

// 由于数组名就相当于数组首元素地址 (即是指针)
#include<stdio.h>
int main(void)
{
     char array[100];
     scanf("%s",array);  // 不用在name前加 &
     printf("%s\n",array);
     return 0;
}
~~~



### gets()

gets()函数简单易用，它读取整行输入，直至遇到换行符，然后丢弃换行符，储存其余字符，并在这些字符的末尾添加一个空字符( \0 )使其成为一个 C 字符串。

~~~C
#include<stdio.h>
int main(void)
{
     char array[100];
     gets(array);
     puts(array);
     return 0;
}
~~~



gets()函数得缺点:
由于gets() 函数它不会去计算你输入得大小会不会超过数组得长度,所以容易超过数组下标,倘若超过的数据只是占用尚未使用的内存则没什么,但是如何占用了已经使用得内存,擦出了原本得数据,就会导致程序异常终止

### fgets()

由此 我们引进来了另一个替代它的函数: fgets()函数

fgets()函数的第2个参数指明了读入字符的最大数量。如果该参数的值是n，那么fgets()将读入n-1个字符，或者读到遇到的第一个换行符为止。

**如果fgets()读到一个换行符，会把它储存在字符串中。这点与gets()不同，gets()会丢弃换行符。**

fgets()函数的第3 个参数指明要读入的文件。如果读入从键盘输入的数据，则以stdin（标准输入）作为参数，该标识符定义在stdio.h中。

fgets()函数返回指向 char的指针。如果一切进行顺利，该函数返回的地址与传入的第 1 个参数相同。
如果fgets()返回 NULL 就表示文件读到结尾或者读取错误.



#### fgets()简单用法

~~~c
#include<stdio.h>
int main(void)
{
     char array[10];
     puts("please enter string:");
     // fgets(输出对象,输出长度,stdin);
     fgets(array,5,stdin);
     puts(array);
     // fputs就两个参数 要输出的东西, 
     fputs(array,stdout);
     return 0;
}
~~~



#### fgets()用循环,缓冲区

~~~C

#include<stdio.h>
#define STLEN 10
int main(void)
{
     char words[STLEN];
     puts("enter String (empty line to quit);");
     // fgets() 读到结尾和错误都会返回空值.
     while (fgets(words,STLEN,stdin)!=NULL && words[0]!='\n')
          fputs(words,stdout);
     puts("Done.");
     return 0;
}


/*
I write the C language that I like the C language. --输入
I write the C language that I like the C language. --输出

可见 哪怕fgets()函数每次都只读9个,但是它会循环接收这一句话,直到将这一句话接收完,然后fgets()也是按照缓冲区的顺序循环输出,完整打印这一句话.
*/
~~~



由于fgets()函数会保存回车符号,所以为了去除最后的回车符号,使用fgets()函数时要添加额外代码来将这个回车变成空格.

~~~c
#include<stdio.h>
#define STLEN 10
int main(void)
{
     char words[STLEN];
     int i;
     puts("enter String (empty line to quit);");
     // fgets() 读到结尾和错误都会返回空值.
     while (fgets(words,STLEN,stdin)!=NULL && words[0]!='\n')
     {
          i = 0;
          while (words[i]!='\n'&&words[i]!='\0')
               i++;
          if(words[i] == '\n')
               words[i] = '\0';
          else
               while (getchar() != '\n')
                    continue;  
          puts(words);
     }
     puts("Done.");
     return 0;
}
~~~







### puts()

**该函数只能输出字符串字符**

与printf()不同的是，puts()函数只显示字符串，而且自动在显示的字符串末尾加上换行符

puts(地址)  括号内只用传送地址就可以了

~~~C
#include<stdio.h>
#define MSG "I am a symbolic string constant."  //字符串常量
#define MAXLENGTH 81
int main(void)
{
     char words[MAXLENGTH] = "i am a string in an array.";  // 类型数组
     const char* pt1 = "Something is pointing at me.";  //指向char的指针
     puts("here are some strings:");
     puts(MSG);
     puts(words);
     puts(pt1);     // 打印指针是直接打印指向的字符串
     words[8] = 'P';
     puts(words);
     return 0;
}
~~~





那么 既然只用传送地址,puts()函数就可以从地址处开始打印,那么puts()函数,它如何知道什么时候停止呢?

这就就字符串后面的 '\0'作用了,一般字符串都会在末尾添加一个'\0',puts()遇见这个'\0'之后,就会停止.

你肯定又想问,如果没有'\0'呢?

~~~c
#include　<stdio.h>
int　main(void)
{
    char　side_a[]　=　"Side　A";
    char　dont[]　=　{　'W',　'O',　'W',　'!'　};
    char　side_b[]　=　"Side　B";
    puts(dont); /* dont 不是一个字符串 */
    return　0;
}

/*
由于dont缺少一个表示结束的空字符，所以它不是一个字符串，因此puts()不知道在何处停止。它会一直打印dont后面内存中的内容，直到发现一个空字符为止。为了让puts()能尽快读到空字符，我们把dont放在side_a和side_b之间。下面是该程序的一个运行示例：

WOW!Side A

我们使用的编译器把side_a数组储存在dont数组之后，所以puts()一直输出至遇到side_a中的空字符。你所使用的编译器输出的内容可能不同，这取决于编译器如何在内存中储存数据。如果删除程序中的side_a和side_b数组会怎样？通常内存中有许多空字符，如果幸运的话，puts()很快就会发现一个。但是，这样做很不靠谱。

--------------------摘抄自书上内容
*/
~~~



### fput()

fputs()函数的第 2 个参数指明要写入数据的文件。如果要打印在显示器上，可以用定义在stdio.h中的stdout（标准输出）作为该参数。

**与puts()不同，fputs()不会在输出的末尾添加换行符。**

**puts()应与gets()配对使用，fputs()应与fgets()配对使用。**

~~~c
#include <stdio.h>
#define LENGHT 30
int main(void)
{
     char array[LENGHT];
     puts("please input string on last line: ");
     fgets(array,LENGHT,stdin);
     printf("you input string are :\n");
     fputs(array,stdout);
     return 0;
}
~~~



###  printf()

与puts()不同的是，printf()不会自动在每个字符串末尾加上一个换行符。因此，必须在参数中指明应该在哪里使用换行符。例如：

printf("%s\n", string);

和下面的语句效果相同：

puts(string);

如上所示，printf()的形式更复杂些，需要输入更多代码，而且计算机执行的时间也更长（但是你觉察不到）。然而，使用 printf()打印多个字符串更加简单。例如，下面的语句把 Well、用户名和一个#define定义的字符串打印在一行：

printf("Well, %s, %s\n", name, MSG);



### gets_s()



get() fgets() gets_s() 小总结

get() 接收字符数量大于字符串数组长度时,多余的数据可能会擦除已使用的数据内存,倒是出现问题.

fgets() 它会保留输入的 回车符 , 需要写额外代码来消除它保留的回车符

**gets_s(接收对象,接收长度 );**  //  他不需要第三个参数.



### scanf()函数

![image-20210208160539130](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210208160539130.png)

scanf()函数返回一个整数值，该值等于scanf()成功读取的项数或EOF（读到文件结尾时返回EOF）。



### strlen()函数

**strlen()函数用于统计字符串的长度**

~~~C
#include<stdio.h>
#include<string.h>

// 函数用来缩短字符串长度
void fit(char * , unsigned int);

int main (void)
{
     /* ---- strlen()---------------------------*/
     char mesg [] = "Things should be as simple as possible,"            "but not simpler.";
     puts(mesg);
     fit(mesg,38);
     puts(mesg);
     puts("Let's　look　at　some　more　of　the　string.");
     // 表达式mesg + 39是mesg[39]的地址该地址上储存的是空格字符。
     //所以put()显示该字符并继续输出直至遇到原来字符串中的空字符
     puts(mesg+39); 
     return 0;
}
//strlen函数  
void fit(char*string , unsigned int size)
{
     if(strlen(string)>size)
          string[size] = '\0'; 
}
~~~



strlen()计算时 并不会计算字符串中末尾得 \0

~~~C
#include<stdio.h>
#include<string.h>
int main(void)
{
     char array[100];
     puts("please enter string:");
     // fgets(输出对象,输出长度,stdin);
     fgets(array,5,stdin);
     puts(array);
     // fputs就两个参数 要输出的东西, 
     fputs(array,stdout);
     printf("\n");
     // strlen计算字符串长度并不会把最后得 \0 纳入计算
     printf("strlen计算得长度为:%d",strlen(array));
     return 0;
}
~~~







### strcat()函数

strcat()用于拼接字符串,它将两个字符串作为参数.
它会把字符串二拼接在字符串一的身后,并返回这个拼接完成的字符串一.
stracat()函数类型是 char*(即是指向char的指针)
但是 strcat()函数无法检查第1个数组是否能容纳第2个字符串

~~~C
#include<stdio.h>
#include<string.h>

#define SIZE 10

// 函数用来缩短字符串长度
void fit(char * , unsigned int);

//拼接字符串
char *s_gets(char*st,int n);

int main (void)
{
     /* ---- strlen()---------------------------*/
     char mesg [] = "Things should be as simple as possible,"            "but not simpler.";
     puts(mesg);
     fit(mesg,38);
     puts(mesg);
     puts("Let's　look　at　some　more　of　the　string.");
     // 表达式mesg + 39是mesg[39]的地址该地址上储存的是空格字符。
     //所以put()显示该字符并继续输出直至遇到原来字符串中的空字符
     puts(mesg+39); 

     /* ---- strcat()---------------------------*/
     char flower[SIZE];
     char addon [] = "s smell like old shoes.";
     puts("What　is　your　favorite　flower?");
     if(s_gets(flower,SIZE)) // 接收flower字符串
     {
          strcat(flower,addon);
          puts(flower);
          puts(addon);
     }
     else
          puts("End of file encountered!");
     puts("bye");

     return 0;
}
//strlen函数  
void fit(char*string , unsigned int size)
{
     if(strlen(string)>size)
          string[size] = '\0'; 
}

// strcat函数
// 返回
char *s_gets(char*st,int n)
{
     char * ret_val;
     int i = 0;
     ret_val = fgets(st,n,stdin);
     // 检验接收的字符串是否到结尾
     if(ret_val){
          while (st[i] != '\n' && st[i] !='\0')
               i++;
          // 如果接收了回车符 得把它去掉
          if(st[i]=='\n')
               st[i] = '\0';
          else
               while(getchar() != '\n')
                    continue;
     }

     return ret_val;
}
~~~





### strncat() 函数

就是因为strcat()函数拼接时不能计算第一个字符数组长度是否够长,所以我们得strncat()应运而生,strncat()第三个参数可以指定最大添加字符数.

例如，strncat(bugs, addon, 13)将把 addon字符串的内容附加给bugs，在加到第13个字符或遇到空字符时停止

~~~C
#include<stdio.h>
#include<string.h>

#define SIZE 80
#define SIZE2 30
#define BUGSIZE 13

// 函数用来缩短字符串长度
void fit(char * , unsigned int);

//拼接字符串
char *s_gets(char*st,int n);

int main (void)
{
     /* ---- strlen()---------------------------*/
     char mesg [] = "Things should be as simple as possible,"            "but not simpler.";
     puts(mesg);
     fit(mesg,38);
     puts(mesg);
     puts("Let's　look　at　some　more　of　the　string.");
     // 表达式mesg + 39是mesg[39]的地址该地址上储存的是空格字符。
     //所以put()显示该字符并继续输出直至遇到原来字符串中的空字符
     puts(mesg+39); 

     /* ---- strcat()---------------------------*/
     // char flower[SIZE];
     // char addon [] = "s smell like old shoes.";
     // puts("What　is　your　favorite　flower?");
     // if(s_gets(flower,SIZE)) // 接收flower字符串
     // {
     //      strcat(flower,addon);
     //      puts(flower);
     //      puts(addon);
     // }
     // else
     //      puts("End of file encountered!");
     // puts("bye");


     /* ---- strncat()---------------------------*/
     char flower[SIZE2];
     char addon [] = "s smell like old shoes.";
     char bug[BUGSIZE];
     int available;
     puts("What　is　your　favorite　flower?");
     s_gets(flower,SIZE);
     if((strlen(addon)+strlen(flower)+1)<=SIZE)
          strcat(flower,addon);
     puts(flower);
     puts("What　is　your　favorite　bug?");
     s_gets(bug,BUGSIZE);
     // 计算bug最大能存储得字符
     available = BUGSIZE - strlen(bug) - 1;
     strncat(bug,addon,available);
     puts(bug);
     return 0;
}
//strlen函数  
void fit(char*string , unsigned int size)
{
     if(strlen(string)>size)
          string[size] = '\0'; 
}

// strcat函数
char *s_gets(char*st,int n)
{
     char * ret_val;
     int i = 0;
     ret_val = fgets(st,n,stdin);
     // 检验接收的字符串是否到结尾
     if(ret_val){
          while (st[i] != '\n' && st[i] !='\0')
               i++;
          // 如果接收了回车符 得把它去掉
          if(st[i]=='\n')
               st[i] = '\0';
          else
               while(getchar() != '\n')
                    continue;
     }

     return ret_val;
}
 
~~~



### strcmp() 函数 

strcmp()函数就像比较数字一样。如果两个字符串参数相同，该函数就返回0，否则返回非零值
如果在字母表中第1个字符串位于第2个字符串前面，strcmp()中就返回负数；反之，strcmp()则返回正数

返回值：

- 如果返回值 < 0，则表示 str1 小于 str2。
- 如果返回值 > 0，则表示 str2 小于 str1。
- 如果返回值 = 0，则表示 str1 等于 str2。



比如 abcd  和 abbb  
	先 a和a比较 发现一样大
	再b 和b比较 发现一样大
	再发现c 和 b 比较 发现 c的ASCII码比b大



~~~C
#include<stdio.h>
#define ANSWER "GRANT"
#define SIZE 40

char *s_gets(char* ,int );

/* 
strcmp() 比较两个函数是否一样
strcmp() 函数就像比较数字一样。
如果两个字符串参数相同，该函数就返回0，否则返回非零值
而C语言中非 0 即为真
*/
int main(void)
{
     char try[SIZE];
     puts("Who　is　buried　in　Grant's　tomb?");
     s_gets(try,SIZE);
     while (strcmp(try,ANSWER))
     {
          puts("No,　that's　wrong.　Try　again.");
          s_gets(try,SIZE);
     }
     puts("that's right!");
     return 0;
}

char *s_gets(char*st ,int n)
{
     char *ret_val;
     int i = 0;
     ret_val = fgets(st,n,stdin);
     if(ret_val)
     {
          while (st[i] == '\n' && st[i]=='\0') 
               i++;
          if(st[i]=='\n')
               st[i] = '\0';
          else
               while (getchar() != '\n')
                    continue;
     }
     return ret_val;
          
}
~~~



### strncmp()函数

strcmp()函数比较字符串中的字符，直到发现不同的字符为止，这一过程可能会持续到字符串的末尾。而strncmp()函数在比较两个字符串时，可以比较到字符不同的地方，也可以只比较第3个参数指定的字符数

~~~c
#include<stdio.h>
#include<string.h>
#define ANSWER "GRANT"
#define SIZE 40

char *s_gets(char* ,int );

/* 
strcmp() 比较两个函数是否一样
strcmp()函数就像比较数字一样。
如果两个字符串参数相同，该函数就返回0，否则返回非零值
而C语言中非 0 即为真
*/
int main(void)
{
     char try[SIZE];
     puts("Who　is　buried　in　Grant's　tomb?");
     s_gets(try,SIZE);
     while (strcmp(try,ANSWER))
     {
          puts("No,　that's　wrong.　Try　again.");
          s_gets(try,SIZE);
     }
     puts("that's right!");


     // 可以自定义strcmp()函数比较内容
     const char *array[6]= {
          "astronomy","astounding",
          "astrophysics","ostracize",
          "asterism","astrophobia"
     };
     int count = 0;
     int i;
     for(i=0;i<6;i++)
     {
          if(strncmp(array[i],"astro",5) == 0)
          {
               printf("Found : %s \n",array[i]);
               count++;
          }
     }
     printf("一共找到了 %d astro 开头得字符串\n",count);

     return 0;
}

char *s_gets(char*st ,int n)
{
     char *ret_val;
     int i = 0;
     ret_val = fgets(st,n,stdin);
     if(ret_val)
     {
          while (st[i] != '\n' && st[i] !='\0') 
               i++;
          if(st[i]=='\n')
               st[i] = '\0';
          else
               while (getchar() != '\n')
                    continue;
     }
     return ret_val;   
}
~~~



### strcpy() 函数

strcpy()函数 用来拷贝字符串   strcpy()函数相当于字符串赋值运算符。

strcpy(qwords[i],temp);  // 将 temp 拷贝至 qwords[i]中.

~~~c
#include<stdio.h>
#include<string.h>
#define SIZE 40
#define  LIM 5

char *s_gets(char *st,int n);

int main(void)
{
     char qwords[LIM][SIZE];
     char temp[SIZE];
     int i = 0;
     printf("Enter　%d　words　beginning　with　q:\n",LIM);
     while (i<LIM && s_gets(temp,SIZE))
     {
          if (temp[0] != 'q')
               printf("%s doesn't begin with q!\n",temp);
          else
          {
               strcpy(qwords[i],temp);
               i++;
          }  
     }
     puts("Here are the words accepted:");
     for ( i = 0; i < LIM; i++)
          puts(qwords[i]);
     return 0;
}

char *s_gets(char*st , int n)
{
     char *ret_val;
     int i = 0;
     ret_val = fgets(st,n,stdin);
     if (ret_val)
     {
          while (st[i] != '\n',st[i] != '\0')
               i++;
          if (st[i] == '\n')
               st[i] = '\0';
          else
               while (getchar() != '\n')
                    continue;
     }
     return ret_val;
}
~~~



strcpy()函数接收两个指针作为参数

~~~
char * str = NULL;   // 使用指针前一定要初始化
strcpy (str, "The C of Tranquility");
~~~

strcpy()接受两个字符串指针作为参数，可以把指向源字符串的第2个指针声明为指针、数组名或字符串常量；而指向源字符串副本的第1个指针应指向一个数据对象（如，数组），且该对象有足够的空间储存源字符串的副本。记住，声明数组将分配储存数据的空间，而声明指针只分配储存一个地址的空间

#### strcpy()函数两个属性

##### 返回值类型

strcpy()的返回类型是 char *，该函数返回的是第 1个参数的值，即一个字符的地址

##### 不必是数组的开始

第 1 个参数不必指向数组的开始。这个属性可用于拷贝数组的一部分

~~~C
#include<stdio.h>
#include<string.h>
#define WORDS "beast"
#define SIZE 40

int main(void)
{
     const char*orig = WORDS;
     char copy [SIZE] = "Be the best that you can be.";
     char*ps;
     puts(orig);
     puts(copy);
     ps = strcpy(copy + 7,orig);
     puts(copy);
     puts(ps);     
     return 0;
}
~~~



如果不理解  ps = strcpy(copy + 7,orig);  请看图:

![image-20210211150848389](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210211150848389.png)





### strncpy()函数

然而 strcpy()和 strcat()都有同样的问题，它们都不能检查目标空间是否能容纳源字符串的副本。

拷贝字符串用 strncpy()更安全，该函数的第 3 个参数指明可拷贝的最大字符数。

strncpy(target, source, n)把source中的n个字符或空字符之前的字符（先满足哪个条件就拷贝到何处）拷贝至target中。
如果拷贝到第n个字符时还未拷贝完整个源字符串，就不会拷贝空字符。所以，拷贝的副本中不一定有空字符。
如果想拥有,可以把该程序把 n 设置为比目标数组大小少1（TARGSIZE-1），然后把数组最后一个元素设置为空字符：

~~~C
strncpy(qwords[i],　temp,　TARGSIZE-1);
qwords[i][TARGSIZE　-　1]　=　'\0';
~~~



##### sprintf()函数

sprintf()函数声明在stdio.h中，而不是在string.h中。
它是把数据写入字符串，而不是打印在显示器上。因此，该函数可以把多个元素组合成一个字符串。

~~~C
#include<stdio.h>
#include<string.h>
#define MAX 40

char*s_gets(char * , int n);

int main(void)
{
     char first [MAX];
     char last [MAX];
     char formal[2*MAX + 10];
     double prize;
     puts("enter you first name:");
     s_gets(first,MAX);
     puts("enter you last name:");
     s_gets(last,MAX);
     puts("enter you prize money:");
     scanf("%lf",&prize);
     sprintf(formal,"%s,%-19s:$%6.2f\n",last,first,prize);
     puts(formal);
     return 0;
}

char *s_gets(char *st,int n)
{
     char *ret_val;
     int i ;
     ret_val = fgets(st,n,stdin);
     if (ret_val)
     {
          while (st[i] != '\n' && st[i] !='\0')
               i++;
          if (st[i]=='\n')
               st[i] = '\0';
          else
          // 用于过滤掉多余得字符得
               while (getchar() != '\n')
                    continue;
     }
     return ret_val;
}
~~~



### 总结字符串函数

char *strcpy(char * restrict s1, const char * restrict s2);

该函数把s2指向的字符串（包括空字符）拷贝至s1指向的位置，返回值是s1。

char *strncpy(char * restrict s1, const char * restrict s2, size_t n);

该函数把s2指向的字符串拷贝至s1指向的位置，拷贝的字符数不超过n，其返回值是s1。该函数不会拷贝空字符后面的字符，如果源字符串的字符少于n个，目标字符串就以拷贝的空字符结尾；如果源字符串有n个或超过n个字符，就不拷贝空字符。

char *strcat(char * restrict s1, const char * restrict s2);

该函数把s2指向的字符串拷贝至s1指向的字符串末尾。s2字符串的第1个字符将覆盖s1字符串末尾的空字符。该函数返回s1。

char *strncat(char * restrict s1, const char * restrict s2, size_t n);

该函数把s2字符串中的n个字符拷贝至s1字符串末尾。s2字符串的第1个字符将覆盖s1字符串末尾的空字符。不会拷贝s2字符串中空字符和其后的字符，并在拷贝字符的末尾添加一个空字符。该函数返回s1。

int strcmp(const char * s1, const char * s2);

如果s1字符串在机器排序序列中位于s2字符串的后面，该函数返回一个正数；如果两个字符串相等，则返回0；如果s1字符串在机器排序序列中位于s2字符串的前面，则返回一个负数。

总结 :
如果两个字符串相等，则返回0(假 -- false)；
如果两个字符不相等则返回非零数(真 -- true).

int strncmp(const char * s1, const char * s2, size_t n);

该函数的作用和strcmp()类似，不同的是，该函数在比较n个字符后或遇到第1个空字符时停止比较。

char *strchr(const char * s, int c);

如果s字符串中包含c字符，该函数返回指向s字符串首位置的指针（末尾的空字符也是字符串的一部分，所以在查找范围内）；如果在字符串s中未找到c字符，该函数则返回空指针。

char *strpbrk(const char * s1, const char * s2);如果 s1 字符中包含 s2 字符串中的任意字符，该函数返回指向 s1 字符串首位置的指针；如果在s1字符串中未找到任何s2字符串中的字符，则返回空字符。
**总结:判断两个函数中的元素是否有交集,有则返回s1首位置指针,没有交集则返回空字符串.**

char *strrchr(const char * s, int c);该函数返回s字符串中c字符的最后一次出现的位置（末尾的空字符也是字符串的一部分，所以在查找范围内）。如果未找到c字符，则返回空指针。

char *strstr(const char * s1, const char * s2);

该函数返回指向s1字符串中s2字符串出现的首位置。如果在s1中没有找到s2，则返回空指针。
**总结:如果s1包含s2,那么在s1中找s2出现得首位置,找到就返回这个首位置,没有找到则返回空指针.**

size_t strlen(const char * s);

**该函数返回s字符串中的字符数，不包括末尾的空字符。**

请注意，那些使用const关键字的函数原型表明，函数不会更改字符串。例如，下面的函数原型：

char *strcpy(char * restrict s1, const char * restrict s2);

表明不能更改s2指向的字符串，至少不能在strcpy()函数中更改。但是可以更改s1指向的字符串。这样做很合理，因为s1是目标字符串，要改变，而s2是源字符串，不能更改。

size_t类型是sizeof运算符返回的类型。C规定sizeof运算符返回一个整数类型，但是并未指定是哪种整数类型，所以size_t在一个系统中可以是unsigned int，而在另一个系统中可以是 unsigned long



## 空指针 and 空字符

空字符是整数类型，而空指针是指针类型。两者有时容易混淆的原因是：它们都可以用数值0来表示。但是，从概念上看，两者是不同类型的0。另外，**空字符是一个字符，占1字节；而空指针是一个地址，通常占4字节**。





  









# 第十章 储存类别 链接 内存管理

关键字：

auto、extern、static、register

const、volatile、restricted、_Thread_local、_Atomic

函数：rand()、srand()、time()、malloc()、calloc()、free()

如何确定变量的作用域（可见的范围）和生命期（它存在多长时间）

设计更复杂的程序



储存类别:

**auto** 局部用来修饰局部变量,一般函数中变量都是默认是auto.

~~~C
int main(void){
    int a = 10;   // 相当于就是 auto int a = 10;
}
~~~



register  寄存器类别

就是它不同款 ,  别人都是放在内存中,他为了提高速度,将数据放在寄存器中.



**entern储存类**

比如A文件中有一个 entern int a = 100;

我可以再B文件中调用 这个变量,就是有entern修饰了的变量可以再其他文件中调用.

**static储存类**

只属于程序本身,不可以被外部调用.
并且改变值后,再次使用会接着是上次改变后的值.



**左值**

**一般而言，那些指定对象的表达式被称为左值**

~~~C
int entity = 3;  
// entity是一个标识符

int ranks[10];

1. ranks + 2*entity;  // 这不是一个左值 
2. *(ranks + 2*entity); //但这个是一个左值
因为 2 相比 1 来说 它明确的指向了一个对象 就是ranks[7].  
    
    const char * pc = "Behold a string literal!";
	// 同样 *pc也是一个左值,但是是一个不可以修改的左值.

可以用存储期（storage duration）描述对象，
    所谓存储期是指对象在内存中保留了多长时间。标识符用于访问对象，
    可以用作用域（scope）和链接（linkage）描述标识符
~~~





### 关于左值的基本了解

~~~C
#include<stdio.h>

int main(void)
{
     // 一般而言 那些指定对象的表达式被称为左值.
     // entity 既是标识符也是左值
     // pointer 既是表达式也是左值
     int entity = 3;
     int *pointer = &entity;
     int ranks[] = {1,2,3,4,5,6,7,8,9,10};
     /*
     按照这个思路，ranks + 2 * entity既不是标识符（不是名称）
     也不是左值（它不指定内存位置上的内容）
     但是表达式*(ranks + 2 * entity)是一个左值
     因为它的确指定了特定内存位置的值，
     */

     int a = *(ranks + 2 * entity);
     // 都指向了ranks[6] 这个元素
     printf("*(ranks + 2 * entity) : %d ,\t a: %d",*(ranks + 2 * entity),a);

     // 由于可以设置pc重新指向其他字符串，所以标识符pc是一个可修改的左值。
     // const只能保证被pc指向的字符串内容不被修改，但是无法保证pc不指向别的字符串。
     //由于*pc指定了储存'B'字符的数据对象，所以*pc是一个左值 但不是一个可修改的左值。
     const char *pointer_char = "Behold a string literal!";
     return 0;
}
~~~



## 作用域

**一个C变量的作用域可以是块作用域、函数作用域、函数原型作用域或文件作用域**

**块作用域** : 
就是花括号里面的作用范围. 
一个语句花括号是一个块作用域,一个函数花括号也是一个块作用域.

**函数原型作用域** :
这个很好理解 , 指的就是函数 () 中的形参,当使用时开辟空间,用完了就销毁.
**函数原型作用域的范围是从形参定义处到原型声明结束。**



**函数作用域**:

~~~C
函数作用域（function scope）仅用于goto语句的标签。这意味着即使一个标签首次出现在函数的内层块中，它的作用域也延伸至整个函数。如果在两个块中使用相同的标签会很混乱，标签的函数作用域防止了这样的事情发生。
~~~

我来跟你解释解释,首先说明了**仅用于goto语句**,也就是对于其他语句来说没有所谓的**函数作用域**.
假如一个函数中有好几个内层块(比如: 循环,循环套循环.if...else...之类)
那么这个goto如果作用知识再块中的话,就很麻烦,不好用.
这也就是为啥说**那个函数里面有 goto 语句 , 作用域就是这个函数,可以再这个函数里面跳.**



**文件作用域**(全局变量) :

~~~
int a = 10;   // 定义再函数外  文件作用域
int main(void){
}
全局变量:就是本文件其他函数都可以使用
~~~







## 链接

**具有文件作用域的变量可以是外部链接或内部链接。**

### 外部链接

int giants = 5;　　　　　　　// 文件作用域，外部链接
在其他文件中可以调用这个变量.

### 内部链接

static int dodgers = 3;　　 // 文件作用域，内部链接
只能够再本身文件中调用这个变量

### 无连接

**具有块作用域、函数作用域或函数原型作用域的变量都是无链接变量**
**这意味着这些变量属于定义它们的块、函数或原型私有。**



## 存储期

作用域和链接描述了标识符的可见性。存储期描述了通过这些标识符访问的对象的生存期。C对象有4种存储期：

### 静态存储期

如果对象具有静态存储期，那么它在程序的执行期间一直存在。**所有的文件作用域变量具有静态存储期**

关键字 static表明了其链接属性，而非存储期。

~~~C
#include <stdio.h>
 /* 函数声明 */
void func1(void);
static int count=10;  /* 全局变量 - static 是默认的 */

int main()
{
  while (count--) {
      func1();
  }
  return 0;
}

void func1(void)
{
/* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
 * 每次调用函数 'func1' 'thingy' 值不会被重置。
 */                
  static int thingy=5;
  thingy++;
  printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}
~~~



### 线程存储期

线程存储期用于并发程序设计，程序执行可被分为多个线程。具有线程存储期的对象，从被声明时到线程结束一直存在

_Thread_local声明一个对象时，每个线程都获得该变量的私有备份。

### 自动存储期

块作用域的变量通常都具有自动存储期。当程序进入定义这些变量的块时，为这些变量分配内存；当退出这个块时，释放刚才为变量分配的内存

变长数组稍有不同，它们的存储期从声明处到块的末尾，而不是从块的开始处到块的末尾。

### 动态分配存储期



### 存储类别

![1](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\1.png)



## 函数添加static

函数前面也是可以添加static , 用来表明是不是本文件自身私有的.



## 动态内存分配

以下函数需要头文件:

~~~
#include <stdlib.h>
~~~





**malloc()**

~~~C
// 一维数组声明
double * ptd;
ptd = (double *) malloc(30 * sizeof(double));

// 多维数组声明
double (*point)[6];
point = ( double * [col] ) malloc (row * col * sizeof(double));

exit(EXIT_FAILURE);
EXIT_SUCCESS（或者，相当于 0）表示普通的程序结束， EXIT_FAILURE 表示程序异常中止。
~~~



**calloc()**

~~~C
long * newmem;
newmem = (long *)calloc(100, sizeof (long));  //和malloc不同 , 中间是 逗号 
~~~



**free()**

malloc()  和  calloc()  都可以用free()函数释放内存.
free()释放的指针可以和  malloc()的指针不同,但是指针上的地址需要一样.



## ANSI C类型限定符

### const

如果对于指针来说,cont再  * 号的左右,作用是不同的,见如下代码:



~~~C

int main(void){
    int a = 10,b = 20,c = 30,d = 40;

// 地址可以改变,但是通过这个地址去改变值就不行.
// 断绝通过地址去修改变量的值这条路
    int const *point_1 = &a;
    printf("%p,%d,%d\n",point_1,*point_1,a);
    point_1 = &b;  //修改指针指向地址
    printf("%p,%d,%d\n",point_1,*point_1,b);
    // 比如修改b的值
    // *point_1 = 400;  直接报错

    printf("********************************************\n");

// 指向的地址不能改变,但是可以在指针上修改值.
// 指针和标识符地址绑定在一起,同生共死,只能修改c的值,不能让地址再指向其他值.
    int * const point_2 = &c;
    printf("%p,%d,%d\n",point_2,*point_2,c);
    *point_2 = 60;
    printf("%p,%d,%d\n",point_2,*point_2,c);
    // 当我们想把指针指向d时 直接报错
    //  point_2 = &d;
    
    return 0;
}

~~~



const 常用的用法就是在函数参数中声明指针.
这样就不会让函数更改主函数里面数据的可能.

~~~C
void display(const int array[], int limit);

char *strcat(char * restrict s1, const char * restrict s2);
~~~







### volatile

~~~C
volatile的语法和const一样：
volatile int loc1;/* loc1 是一个易变的位置 */
volatile int * ploc;　 /* ploc 是一个指向易变的位置的指针 */
~~~





以上代码把loc1声明为volatile变量，把ploc声明为指向volatile变量的指针。

读者可能认为volatile是个可有可无的概念，为何ANSI委员把volatile关键字放入标准？原因是它涉及编译器的优化。例如，假设有下面的代码：

vall =x;
/* 一些不使用 x 的代码*/
val2　=　x

智能的（进行优化的）编译器会注意到以上代码使用了两次 x，但并未改变它的值。于是编译器把 x的值临时储存在寄存器中，然后在val2需要使用x时，才从寄存器中（而不是从原始内存位置上）读取x的值，以节约时间。这个过程被称为高速缓存（caching）。通常，高速缓存是个不错的优化方案，但是如果一些其他代理在以上两条语句之间改变了x的值，就不能这样优化了。如果没有volatile关键字，编译器就不知道这种事情是否会发生。因此，为安全起见，编译器不会进行高速缓存。这是在 ANSI 之前的情况。现在，如果声明中没有volatile关键字，编译器会假定变量的值在使用过程中不变，然后再尝试优化代码。

可以同时用const和volatile限定一个值。例如，通常用const把硬件时钟设置为程序不能更改的变量，但是可以通过代理改变，这时用 volatile。只能在声明中同时使用这两个限定符，它们的顺序不重要，如下所示：

~~~
volatile const int loc;
const volatile int * ploc;
~~~



总结:   **就是加这个修饰符,可以让数据在访问的过程中更快速.**







### restrict

**restrict 关键字允许编译器优化某部分代码以更好地支持计算。它只能用于指针，表明该指针是访问数据对象的唯一且初始的方式。**



### **_Atomic**

~~~
并发程序设计把程序执行分成可以同时执行的多个线程。这给程序设计带来了新的挑战，包括如何管理访问相同数据的不同线程。C11通过包含可选的头文件stdatomic.h和threads.h，提供了一些可选的（不是必须实现的）管理方法。值得注意的是，要通过各种宏函数来访问原子类型。当一个线程对一个原子类型的对象执行原子操作时，其他线程不能访问该对象。例如，下面的代码：

int hogs;// 普通声明

hogs = 12;　　// 普通赋值

可以替换成：

_Atomic int hogs;　　　　　　// hogs 是一个原子类型的变量

atomic_store(&hogs, 12);　 // stdatomic.h中的宏

这里，在hogs中储存12是一个原子过程，其他线程不能访问hogs。

编写这种代码的前提是，编译器要支持这一新特性。
~~~



## 结构体

struct 可以创建像枚举一样但是可以半酣不同数据类型的结构体.
struct 语句语法如下:

~~~C
struct tag { 
    member-list
    member-list 
    member-list  
    ...
} variable-list ;

/*
tag 是结构体标签。
member-list 是标准的变量定义，比如 int i; 或者 float f，或者其他有效的变量定义。
variable-list 结构变量，定义在结构的末尾，最后一个分号之前，您可以指定一个或多个结构变量。
*/
~~~



### 结构体的创建

结构体是定义在方法外面的

就像Java中面向对象的思想,一个对象的相关数据我们封装到一起.

以下代码包含结构体的创建和结构体的初始化.

~~~c
#include<stdio.h>
#include<string.h>

// 体态全齐结构体
struct Book_one
{
     // 不能像枚举一样直接在这个里面赋值
    char bookname[50];
    char author[10];
    float price;
    int book_id;
}book1 = { "aaaaaaaaaaaaa","zxcvb",0.0,0};

// 缺少结构变量结构体
struct Book_two
{
     // 不能像枚举一样直接在这个里面赋值
    char bookname[50];
    char author[10];
    float price;
    int book_id;
};
// 使用Book_two的标签 创建多个结构变量;
struct Book_two b1[20],b2[10],*b3,b4;


// 缺少结构名的结构体
struct
{
     // 不能像枚举一样直接在这个里面赋值
    char bookname[30];
    char author[20];
    float price;
    int book_id;
}book3 = {"<阿强爱情故事>","刘英俊",10.5,133 };

int main(void){
     printf("书名:%-20s \t 作者:%-10s \t 价格:%-5.2f \t 书编号:%-5d\n",book1.bookname,book1.author,book1.price,book1.book_id);
     /*
     -- struct中的字符串是不能够用 = 号来复制的
     book1.bookname = "<C语言修从入门到放弃炼手册大全>";
     book1.author = "YAOGUI";
     */
     // 用拷贝函数 strcpy() 给结构体里面的字符串赋值
     strcpy(book1.bookname,"<C语言修从入门到放弃炼手册大全>");
     strcpy(book1.author,"YAOGUI");
     //但是像int float 等数据类型的值可以像一下这样再赋值.
     book1.price = 50.5;
     book1.book_id = 111;
     printf("书名:%-20s \t 作者:%-10s \t 价格:%-5.2f \t 书编号:%-5d\n",book1.bookname,book1.author,book1.price,book1.book_id);

     /* 声明 book2 book2_2 是Book2类型 */
     struct Book_two book2, book2_2;
     strcpy(book2.bookname,"C++入门到放弃终极路线大全");
     strcpy(book2.author,"yaogui");
     book2.price = 20;
     book2.book_id = 112;
     /* book2_2 he book2 是两个独立的对象 只是用的Book_two这样的房子,各自所代表的房间里的数据是不一样的 */
     strcpy(book2_2.bookname,"C++入门到放弃终极路线大全2");
     strcpy(book2_2.author,"yaogui2");
     book2_2.price = 220;
     book2_2.book_id = 113;
     printf("书名:%-20s \t 作者:%-10s \t 价格:%-5.2f \t 书编号:%-5d\n",book2.bookname,book2.author,book2.price,book2.book_id);
     printf("书名:%-20s \t 作者:%-10s \t 价格:%-5.2f \t 书编号:%-5d\n",book2_2.bookname,book2_2.author,book2_2.price,book2_2.book_id);

     // book3 没有结构体名一样可以直接使用
     puts(book3.bookname);
     int frequency = 0;
     while (frequency<strlen(book3.author)){
          putchar(book3.author[frequency]);
          frequency++;
     }
     printf("\n");
     printf("价格 :%.2f  编号: %d",book3.price,book3.book_id);
     
     return 0;
}
~~~



### 结构体杂糅

当然本身是没有这个结构体杂糅这个概念的,只是我为了方便记忆,自己草率想到的一个词.

为啥叫它结构体杂糅呢?

因为结构体不仅仅向上面那样简单存储数据,还可存储指针,包含自身的指针, 包含其他结构体的指针.

~~~C
#include<stdio.h>
#include<string.h>
// 两个结构体 那个先做了不完整声明就靠后再详细声明
struct B;  //不完整声明 
struct A
{
     struct B *pointer_B;  // 包含指向B结构体的指针
     struct A *pointer_A_own;  // 包含指向本身这个结构体的指针
     int a;
}AAA;
struct B
{
     struct A *pointer_A;  // 指向A结构体的指针
     struct B *pointer_B_own;  // 包含指向本身这个结构体的指针
     int b;
}BBB;
~~~



### 结构体作为函数参数

~~~C
void ShuChu(struct Book_one book);
~~~



~~~C
#include<stdio.h>
#include<string.h>
// 两个结构体 那个先做了不完整声明就靠后再详细声明
// 体态全齐结构体
struct Book_one
{
     // 不能像枚举一样直接在这个里面赋值
    char bookname[50];
    char author[10];
    float price;
    int book_id;
};

void ShuChu(struct Book_one book);

int main(void)
{
     struct Book_one book1,book2;


     strcpy(book1.bookname,"<C语言修从入门到放弃炼手册大全>");
     strcpy(book1.author,"YAOGUI");
     //但是像int float 等数据类型的值可以像一下这样再赋值.
     book1.price = 50.5;
     book1.book_id = 111;


     strcpy(book2.bookname,"C++入门到放弃终极路线大全");
     strcpy(book2.author,"yaogui");
     book2.price = 20;
     book2.book_id = 112;

     ShuChu(book1);
     ShuChu(book2);
     return 0;
}


void ShuChu(struct Book_one book)
{
     printf("书名:%-20s \t 作者:%-10s \t 价格:%-5.2f \t 书编号:%-5d\n",book.bookname,book.author,book.price,book.book_id);
}
~~~



### 使用指针操作结构体

~~~C
#include <stdio.h>
#include <string.h>
 
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
/* 函数声明 */
void printBook( struct Books *book );
int main( )
{
   struct Books Book1;        /* 声明 Book1，类型为 Books */
   struct Books Book2;        /* 声明 Book2，类型为 Books */
   struct Books *pointer_1 = &Book1;
   struct Books *pointer_2 = &Book2;
 
   /* Book1 详述 */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 100000;
 
   /* Book2 详述 */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 1000001;
 
   /* 通过传 Book1 的地址来输出 Book1 信息 */
   printBook( pointer_1 );
 
   /* 通过传 Book2 的地址来输出 Book2 信息 */
   printBook( pointer_2 );
 
   return 0;
}
void printBook( struct Books *book )
{
   printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);
}
~~~







## 位域

用struct 定义一个位域

切记 赋值时不要让值大于自己所规定的位域大小;
比如 a:2 表示 00 两个位,用2就只能够表示 00(0) 01(1) 10(2) 11(3);
这时给a赋值5(101)要用到三位,而a只限制了两位,这时就会出错.

~~~C
#include <stdio.h>
#include <string.h>
int main( )
{

     struct WeiYu
     {
     unsigned  a:4;	// 表示a占有四个位 0000
     unsigned   :4;  /* 空域  不可使用 */
     unsigned  c:3;
     unsigned  d:1;
     }bit,*pointer;

     bit.a = 12;
     bit.c = 4;
     bit.d = 0;
     printf("a:%d c:%d  d:%d\n",bit.a,bit.c,bit.d);
     pointer = &bit;
     pointer->a = 9;
     pointer->c = 3;
     pointer->d = 1;
     printf("a:%d c:%d  d:%d\n",pointer->a,pointer->c,pointer->d);
     return 0;
}
~~~





## 共用体

**共用体**是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。您可以定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值。共用体提供了一种使用相同的内存位置的有效方式。

同一时间只能用到一个成员

~~~C

#include <stdio.h>
#include <string.h>

union Data
{
     int age;
     int height;
     float weight;
     char name[30];
}information,information_two;

 
int main( )
{
     information.age = 20;
     information.height = 166;
     information.weight = 150.5;
     strcpy(information.name,"哈利波特·伏地魔");
     printf("名字:%-10s,\n年龄:%3d,\n身高:%3d,\n体重:%5.2f\n",information.name,information.age,information.height,information.weight);

     puts("*********************************************************************");

     strcpy(information_two.name,"哈利波特·伏地魔");
     printf("%20s\n",information_two.name);

     information_two.age = 20;
     printf("%5d\n",information_two.age);

     information_two.height = 166;
     printf("%5d\n",information_two.height);

     information_two.weight = 150.5;
     printf("%5.2f\n",information_two.weight);
     return 0;
}

/*
输出结果:
    名字:哈利波特·伏地魔,
    年龄:-71237959,
    身高:-71237959,
    体重:-2004174772176159100000000000000000000.00
    *********************************************************************
        哈利波特·伏地魔
       20
      166
    150.50

上面一组数据损坏,问下面一组数据可以输出,就是因为同一时间只能够使用一个成员.

*/


~~~











# 终章 /  C语言文件流 /



### 打开文件

~~~C
FILE *fopen( const char * filename, const char * mode );
~~~



函数：

fopen()、getc()、putc()、exit()、fclose()

fprintf()、fscanf()、fgets()、fputs()

rewind()、fseek()、ftell()、fflush()

fgetpos()、fsetpos()、feof()、ferror()

ungetc()、setvbuf()、fread()、fwrite()



**C把文件看作是一系列连续的字节，每个字节都能被单独读取**
**C提供两种文件模式：文本模式和二进制模式。**

要区分**文本内容和二进制内容**

**文本文件格式和二进制文件格式**

**以及文件的文本模式和二进制模式。**



windows 系统中每行的结尾是<回车><换行> 即是一个 \r \n
Mac系统中每行结尾就是一个<回车>  \r
Uinx系统中结尾每行只有一个<换行>  \n

C程序会自动打开3个文件，它们被称为标准输入（standard input）、标准输出（standard output）和标准错误输出（standard error output）。

~~~C
// 定义一个指针字符串数组
char *array[];
/*
array[] 数组的所有元素都是指针,指针都指向一个字符串.
*/

// 定义一个指向字符型指针数组的指针
char **array;
~~~



**exit()函数关闭所有打开的文件并结束程序。**
通常的惯例是：**正常结束的程序传递0，异常结束的程序传递非零值**。

~~~
exit(0);  //退出程序（结束程序）
~~~





![image-20210219203020723](E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210219203020723.png)



新的C11新增了带x字母的写模式，与以前的写模式相比具有更多特性。第一，如果以传统的一种写模式打开一个现有文件，fopen()会把该文件的长度截为 0，这样就丢失了该文件的内容。**但是使用带 x字母的写模式，即使 fopen()操作失败，原文件的内容也不会被删除。**第二，如果环境允许，x模式的独占特性使得其他程序或线程无法访问正在被打开的文件。

警告

如果使用任何一种"w"模式（不带x字母）打开一个现有文件，该文件的内容会被删除，以便程序在一个空白文件中开始操作。然而，如果使用带x字母的任何一种模式，将无法打开一个现有文件。



## fopen()函数

fopen( *filepointer  , "指定打开文件的模式")
*filepointer 指的是 包含该字符串文件名的字符串地址
可以用该文件名的指针,是不是也可以直接打名字 和 路径之类的?

fopen() 会获取文件信息，包括文件名、文件状态、当前读写位置等，并将这些信息保存到一个 FILE 类型的结构体变量中，然后将该变量的地址返回

所以我们一般要创建一个结构体的变量去接收这个由fopen()函数的返回值.

如果文件打开失败,fopen()函数会返回一个空指针,我们可以还用这个来判断文件是否成功被打开



| 控制读写权限的字符串（必须指明） |                                                              |
| -------------------------------- | ------------------------------------------------------------ |
| 打开方式                         | 说明                                                         |
| "r"                              | 以“只读”方式打开文件。只允许读取，不允许写入。文件必须存在，否则打开失败。 |
| "w"                              | 以“写入”方式打开文件。如果文件不存在，那么创建一个新文件；如果文件存在，那么清空文件内容（相当于删除原文件，再创建一个新文件）。 |
| "a"                              | 以“追加”方式打开文件。如果文件不存在，那么创建一个新文件；如果文件存在，那么将写入的数据追加到文件的末尾（文件原有的内容保留）。 |
| "r+"                             | 以“读写”方式打开文件。既可以读取也可以写入，也就是随意更新文件。文件必须存在，否则打开失败。 |
| "w+"                             | 以“写入/更新”方式打开文件，相当于`w`和`r+`叠加的效果。既可以读取也可以写入，也就是随意更新文件。如果文件不存在，那么创建一个新文件；如果文件存在，那么清空文件内容（相当于删除原文件，再创建一个新文件）。 |
| "a+"                             | 以“追加/更新”方式打开文件，相当于a和r+叠加的效果。既可以读取也可以写入，也就是随意更新文件。如果文件不存在，那么创建一个新文件；如果文件存在，那么将写入的数据追加到文件的末尾（文件原有的内容保留）。 |
| 控制读写方式的字符串（可以不写） |                                                              |
| 打开方式                         | 说明                                                         |
| "t"                              | 文本文件。如果不写，默认为`"t"`。                            |
| "b"                              | 二进制文件。                                                 |





读写权限和读写方式可以组合使用，但是必须将读写方式放在读写权限的中间或者尾部（换句话说，不能将读写方式放在读写权限的开头）。例如：

- 将读写方式放在读写权限的末尾："rb"、"wt"、"ab"、"r+b"、"w+t"、"a+t"
- 将读写方式放在读写权限的中间："rb+"、"wt+"、"ab+"


整体来说，文件打开方式由 r、w、a、t、b、+ 六个字符拼成，各字符的含义是：

- r(read)：读
- w(write)：写
- a(append)：追加
- t(text)：文本文件
- b(binary)：二进制文件
- +：读和写

## getc()   and  putc()

getc() 在文件中获取字符
putc() 在文件中放入字符



从标准输入中获取一个字符”：
ch = getchar();
然而，下面这条语句的意思是“从fp指定的文件中获取一个字符”：

~~~C
ch = getc(fp);
// 把字符ch放入FILE指针fpout指定的文件中
putc(ch, fpout);
~~~





## fclose()函数

close(fp)函数关闭fp指定的文件，必要时刷新缓冲区。对于较正式的程序，应该检查是否成功关闭文件。**如果成功关闭，fclose()函数返回0，否则返回EOF：**

if (fclose(fp) != 0)

printf("Error in closing file %s\n", argv[1]);

如果磁盘已满、移动硬盘被移除或出现I/O错误，都会导致调用fclose()函数失败。



## 指向标准文件的指针

stdio.h头文件把3个文件指针与3个标准文件相关联，C程序会自动打开这3个标准文件。

- 分别是:
   - stdin   (标准输入)    对应键盘
   - stdout (标准输出)    对应显示器
   - stderr  (标准错误)    对应显示器



## ferror()函数

用来判断文件是否出错

~~~
int ferror ( FILE *fp ); //出错返回非0 否则返回0
~~~





## 简单文件读写程序

~~~C
#include<stdio.h>
#include<stdlib.h>  // 提供exit()函数
#include<string.h>  // 提供 strcpy()  strcat()两个函数
#define LEN 40
int main(int argc,char *argv[])
{
     FILE *into,*out;  //声明两个指向FILE的指针
     int ch; //用来判断是否到结尾
     char name[LEN];  //储存输出文件名
     int count = 0;

     // 检查命令行参数
     if(argc < 2){
          fprintf(stderr,"usage : %s filename\n",argv[0]);
          exit(EXIT_FAILURE);
     }

     // 设置输入
     if((into = fopen(argv[1],"r"))==NULL){
          fprintf(stderr, "I couldn't open the file \"%s\"  \n",argv[1]);
          exit(EXIT_FAILURE);
     }

     // 设置输出
     strncpy(name,argv[1],LEN-5);
     name[LEN-5] = '\0';
     strcat(name,".red");  //在文件名后面添加 .red

     if ((out = fopen(name,"w"))==NULL)
     {
          // 以写的模式打开文件
          fprintf(stderr,"Can't create output file.\n");
          exit(3);
     }

     //拷贝数据
     while((ch=getc(into))!=EOF)
          if(count++%3 == 0)
               putc(ch,out);
     
     // 收尾工作
     if(fclose(into)!=0 || fclose(out) != 0)
          fprintf(stderr,"Error in closing files \n");
          
     
     return 0;
}
~~~





# 不会做的题

~~~java
/**
    可能你以后再看会觉得下面这些题你觉得好简单。
    但是可以告诉你的就是你当时第一次看这些提也是折磨想得。
    眼高手低这个毛病在你身上无限放大，当你正真去做你一眼觉得好简单得题目时。
    你才能够知道你自己是 眼高手低 到了何种程度，低效率得看教材花费大把时间就是为了逃避去做题得时间，为了让自己心安理得。
    三分钟热度在你身上时根深蒂固，拖延更是被你展现得淋漓尽致。
    希望你好好看看下面这些简单题，静下心来，让在自己不要过于废物
*/
~~~



- 接收一排数字 循环 + scanf（）函数
- 接收一排字符且不用考虑存储，循环 + getchar（）；
- 记录一个字符串中某个字符，最好不要用数组，容易下标越界，具体见 >> 记录字符文本中特定字符方式的图片代码。



## 打印字母金字塔

~~~C
/*
    A			打印这样的图形，要根据用户输入的字母来决定。
   ABA			例如，左边的图形是在用户输入E后的打印结果。
  ABCBA
 ABCDCBA		
ABCDEDCBA
*/

#include<stdio.h>
int main(void)
{
     int a,b,c,d;
     char capital_leter;
     printf("enter the capital letter:\n");
     scanf("%c",&capital_leter);
     a = capital_leter - 'A' + 1;
     for (int i=0;i<a;i++)
     {
          for(b=0;b<=a-i;b++)
               printf(" ");
          for(c=0;c<=i;c++)
               printf("%c",'A'+c);
          for(d=i-1;d>=0;d--)
               printf("%c",'A'+d);
          printf("\n");
     }
     return 0;
}
~~~

## 反转数组

~~~C
#include<stdio.h>
#define  SIZE 8
/*编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数。*/
int main(void)
{
     int numberarr[SIZE];
     printf("enter the numberarry:\n");  //让我明白c语言出字符串外，不能整排接收数值。
     for (int i=0;i<SIZE;i++)
          scanf("%d",&numberarr[i]);
     printf("instead of the numberarry:\n");
     for (int i=0;i<SIZE;i++)
          printf("%d",numberarr[SIZE-1-i]);
     return 0;
}
~~~

## 输出数组

~~~C
#include<stdio.h>
#include<math.h>
/*创建一个包含8个元素的int类型数组，分别把数组元素设置为2的前8次幂。使用for循环设置数组元素的值，使用do while循环显示数组元素的值。 */
int main(void)
{
	int number[8];
	int i;
	for (i = 0;i < 8;i++)
		number[i] = pow(2,i+1);
	i = 0;
	do
	{
		printf("%d ",number[i]);
		i++;
	}while(i < 8);
	return 0;
}
~~~

## 反转一行字符

~~~C
#include<stdio.h>
#include<string.h>
int main(void)
{
     char oneline[255];
     int size = 0;
     while(scanf("%c",&oneline[size])==1)
     {
          if(oneline[size]=='\n')	// 很有意思
               break;
          size++;
     }
     size = strlen(oneline);
     while (size>=0)
     {
          printf("%c",oneline[size]);
          size--;
     }  
     printf("\n");
     printf("%s",oneline);
}

/*
    读取一行输入，然后把输入的内容倒序打印出来。
    可以把输入储存在char类型的数组中，假设每行字符不超过255。
    根据%c转换说明，scanf()函数一次只能从输入中读取一个字符
    而且在用户按下Enter键时scanf()函数会生成一个换行字符（\n）。
*/
~~~

## 计算空格 换行 其他字符

~~~C
/*
编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。

*** 有点离谱 原本打算用switch写，但是swich不能计算空格 换行，进不去相关的case语句，但是换成if判断就完全没有问题，我就觉得贼几把离谱。关键是网上还看到int 类型变量接收 getchar 然后用int类型和字符串比较，开眼界了.....

     while(container!='#')
     {
     switch (isspace(container))
          {
          case container=='\t':
               blanks = blanks + 4 ;
               break;
          case' ':
               blanks++ ;
               break;  
          case'\n':
               lines++;
               break;   
          default:
               break;
          }
          if (!isspace(container))
               charater++;
          container = getchar();
     }
     
     
// 附上这个人代码 但我觉得我写的比他好。
#include <stdio.h>
#define STOP '#'
int main(void)
{
    int ch, space, enter, others;
    space = enter = others = 0;
    printf("Please enter some characters ('#' to quit):\n");
    while ((ch = getchar()) != STOP)
    {
        if (ch == ' ')
            space++;
        else if (ch == '\n')
            enter++;
        else
            others++;
    }
    printf("Here are the messages\n");
    printf("Space: %d\n", space);
    printf("Linefeed: %d\n", enter);
    printf("Others: %d\n", others);

    return 0;
}
*/
#include<stdio.h>
#include<ctype.h>
int main(void)
{
     int charater;
     int lines = 1;
     int blanks;
     blanks = charater = 0;
     char container;
     container = getchar();
     while(container!='#')
     {
          if (isspace(container))
          {
               if(container == '\t')
                    blanks = blanks + 4;
               if(container == ' ')
                    blanks++;
               if(container == '\n')
                    lines++;
          }      
          if (!isspace(container))
               charater++;
          if(lines==0)
               lines++;
          container = getchar();
     }
     printf("字符:%d   行数:%d  空格:%d",charater,lines,blanks);
}
~~~

~~~c
/*书上难度高一点，会让你计算单词数量。*/
#include <stdio.h>
#include <ctype.h>	// 为isspace()函数提供原型
#include <stdbool.h>// 为bool、true、false提供定义
#define STOP '|'
int main(void)
{
    char c;
    char prev;
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;
    printf("Enter text to be analyzed (| to terminate):\n");
    prev = '\n';
    while ((c = getchar()) != STOP)
    {
        n_chars++;
        if (c == '\n')
        	n_lines++;
        if (!isspace(c) && !inword)
        {
            inword = true;		// 开始一个新的单词
            n_words++;
        }
        if (isspace(c) && inword)
        	inword = false;
        prev = c;
    }
    if (prev != '\n')
    	p_lines = 1;
    printf("characters = %ld, words = %d, lines = %d, ",n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);
    return 0;
}

 
~~~

## 记录字符文本中特定字符方式

左边为我的，右边是网上的。

虽说我的也能跑，但是我故意把数组设置成0，模拟用户输入字符越界情况，有时候能够正确输出结果，很少数诡异输出不对的结果。总体来说偏向于右边这种更加安全，更加有想法。

<img src="E:\霍格沃兹图书馆\笔记\Java_note\Java_Img\image-20210114221649432.png" alt="image-20210114221649432"  />







