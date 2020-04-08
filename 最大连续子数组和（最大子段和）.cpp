#include<stdio.h>
#include <stdlib.h>
int main()
{
    /*问题： 给定n个整数（可能为负数）组成的序列a[1],a[2],a[3],…,a[n],求该序列如a[i]+a[i+1]+…+a[j]的子段和的最大值。当所给的整数均为负数时定义子段和为0，依此定义，所求的最优值为： Max{0,a[i]+a[i+1]+…+a[j]},1<=i<=j<=n
例如，当（a[1],a[2],a[3],a[4],a[5],a[6]）=(-2,11,-4,13,-5,-2)时，最大子段和为20。*/

    int n,i,j;
    int b=0,y=0;
    // 声明整型数组指知针变量
    int *array;
    printf("输入整数个数 n: ");
    scanf("%d", &n);
    // 创建长度道为n的数组
    array = (int *)malloc(n * sizeof(int));
    // 赋值并输出
    for(int x=0;x<n;x++)
    {
        scanf("%d",&array[x]);
    }

    for(j=0;j<n;j++)
    {
        b=0;
        for(i = j; i < n; i++)
        {
            b=b+array[i];
            if(b>y)
              y=b;
        }
    }
    printf("最大子段和为%d",y);
}

