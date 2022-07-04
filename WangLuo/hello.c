#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int count(int);
void sc();//生成函数
bool jy();//校验函数

int main()
{
    printf("**********************************************\n");
    printf("选着你需要的功能：\n");
    printf("s -- 编列出CRC码\n");
    printf("j -- 判断这CRC码\n");
    printf("***********************************************\n");

    int choose = 0;
    scanf("%c",&choose);
    switch (choose)
    {
    case 's':
        sc();
        break;
    case 'j':
        if(jy())
        {
            printf("The transmission is error-free \n");
        }
        else
        {
            printf("The transmission was incorrect\n");
        }
        
        break;
    default:
        break;
    }
    return 0;
}

int count(int num)//计算位数
{
    unsigned int a, b = 0; /*计算生成码的长度m*/
    a = num;
    do
    {
        a >>= 1;//每移一位，位数加1，直到最高位为0
        b++;
    } while (a != 0);
    return b;
}

void sc()
{
    unsigned int gx, fx, m, n, z;
    printf("please input the 16 进制code\n");
    printf("生成码的值：\n");
    scanf("%x", &gx);
    printf("信息码的值：\n");
    scanf("%x", &fx);
    m = count(gx);//gx的位数
    n = count(fx);//fx位数

    fx <<= m - 1; /*信息码左移m-1位，求出扩展列，即fx*（gx的最高次幂的位数）*/
    unsigned int ffx;//拷贝一个fx
    ffx = fx;

    for (int i = m + n - 1; i >= m; i--)
    {
        if ((ffx >> (i - 1)) == 0)//相与直到为0
            continue;
        unsigned int tmp = 0xffffffff;//32位
        tmp <<= (32 - i);
        tmp >>= (32 - i); //高位清0
        ffx &= tmp;       //保留ffx的低位
        ffx ^= (gx << (i - m));//减去是gx的位数
    }

    ffx &= (0xffffffff << 32 - (m - 1)) >> (32 - (m - 1)); //高位清0

    z = ffx | fx;

    printf("CRC校验码比特序列R(x)=0x%x", ffx);
    printf("\n");
    printf("CRC校验码的发送数据比特序列为0x%x\n", z);
}

bool jy()
{
    unsigned int gx, fx, m, n, z;
    printf("please input the 16 进制code\n");
    printf("生成码的值：\n");
    scanf("%x", &gx);
    printf("待校验数据：\n");
    scanf("%x", &fx);

    m = count(gx);
    n = count(fx);

    unsigned int ffx;
    ffx = fx;

    for (int i = n; i >= m; i--)
    {
  

  if ((ffx >> (i - 1)) == 0)
        continue;
    unsigned int tmp = 0xffffffff;
    tmp <<= (32 - i);
    tmp >>= (32 - i); //高位清0
    ffx &= tmp;       //保留ffx的低位
    ffx ^= (gx << (i - m));
    }

    if(ffx == 0)
    {
        return true;
    }
    else
        {
            return false;
        }
        
}